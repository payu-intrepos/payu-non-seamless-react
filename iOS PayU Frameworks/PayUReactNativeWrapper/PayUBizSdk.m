#import "PayUBizSdk.h"
#import <React/RCTUtils.h>
#import <PayUCheckoutProKit/PayUCheckoutProKit.h>
#import <PayUCheckoutProBaseKit/PayUCheckoutProBaseKit.h>
#import "Utils.h"

@interface PayUBizSdk() <PayUCheckoutProDelegate>

typedef void (^hashCompletionCallback)(NSDictionary<NSString *,NSString *> * _Nonnull);

@property (nonatomic, strong) NSMutableDictionary *hashCallbacks;

@end

@implementation PayUBizSdk
{
    bool hasListeners;
}
NSString *const OnPaymentSuccess = @"onPaymentSuccess";
NSString *const OnPaymentFailure = @"onPaymentFailure";
NSString *const OnPaymentCancel = @"onPaymentCancel";
NSString *const OnError = @"onError";
NSString *const GenerateHash = @"generateHash";

RCT_EXPORT_MODULE()
RCT_EXPORT_METHOD(hashGenerated:(NSDictionary *)hashDict) {
    hashCompletionCallback callback = [self.hashCallbacks objectForKey:hashDict.allKeys.firstObject];
    @try {
        dispatch_async(dispatch_get_main_queue(), ^{
            callback(hashDict);
            [self.hashCallbacks removeObjectForKey:hashDict.allKeys.firstObject];
        });
    } @catch (NSException *exception) {
        [self onError:[Utils convertExceptionToError:exception]];
    }
}

RCT_EXPORT_METHOD(openCheckoutScreen:(NSDictionary *)params) {
    @try {
        self.hashCallbacks = [[NSMutableDictionary alloc] init];
        NSDictionary *paymentParamDict = [params objectForKey:@"payUPaymentParams"];
        NSDictionary *configDict = [params objectForKey:@"payUCheckoutProConfig"];
        
        PayUPaymentParam *paymentParam = [Utils paymentParam:paymentParamDict];
        if (paymentParam == nil) {
            [self onError:[NSError errorWithDomain:@"com.payu.bizReactNativeWrapper" code:101 userInfo:@{NSLocalizedDescriptionKey : @"payment param not set"}]];
            return;
        }
        PayUCheckoutProConfig *checkoutProConfig = [Utils config:configDict];
        
        dispatch_async(dispatch_get_main_queue(), ^{
            UIViewController *rootVc = RCTPresentedViewController();
            [PayUCheckoutPro openOn:rootVc paymentParam:paymentParam config:checkoutProConfig delegate:self];
        });
    }
    @catch (NSException * exception) {
        [self onError:[Utils convertExceptionToError:exception]];
    }
}

#pragma mark - PayUCheckoutProDelegate Methods
- (void)generateHashFor:(NSDictionary<NSString *,NSString *> * _Nonnull)param onCompletion:(void (^ _Nonnull)(NSDictionary<NSString *,NSString *> * _Nonnull))onCompletion {
    [self.hashCallbacks setObject:onCompletion forKey:param[HashConstant.hashName]];
    [self sendEventWithName:GenerateHash body:param];
}

- (void)onError:(NSError * _Nullable)error {
    NSDictionary *errorDict = [NSDictionary dictionaryWithObjectsAndKeys:
                               error.localizedDescription, @"errorMsg",
//                               error.code, @"errorCode",
                               nil];
    [self sendEventWithName:OnError body:errorDict];
}

- (void)onPaymentCancelWithIsTxnInitiated:(BOOL)isTxnInitiated {
    NSDictionary *response = [NSDictionary dictionaryWithObjectsAndKeys:
                               [NSNumber numberWithBool:isTxnInitiated], @"isTxnInitiated",
                               nil];
    [self sendEventWithName:OnPaymentCancel body:response];
}

- (void)onPaymentFailureWithResponse:(id _Nullable)response {
    [self sendEventWithName:OnPaymentFailure body:response];
}

- (void)onPaymentSuccessWithResponse:(id _Nullable)response {
    [self sendEventWithName:OnPaymentSuccess body:response];
}

#pragma mark - RCTEventEmitter methods

-(NSArray<NSString *> *)supportedEvents {
    return @[OnPaymentSuccess, OnPaymentFailure, OnPaymentCancel, OnError, GenerateHash];
}

// Will be called when this module's first listener is added.
-(void)startObserving {
    hasListeners = YES;
}

// Will be called when this module's last listener is removed, or on dealloc.
-(void)stopObserving {
    hasListeners = NO;
}

- (void)sendEventWithName:(NSString *)name body:(id)body{
    if (hasListeners) {
        [super sendEventWithName:name body:body];
    }
}
@end
