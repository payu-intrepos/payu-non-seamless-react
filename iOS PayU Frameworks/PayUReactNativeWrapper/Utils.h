//
//  Utils.h
//  react-native-biz-sdk
//
//  Created by Umang Arya on 04/09/20.
//

#import <Foundation/Foundation.h>
#import <PayUCheckoutProKit/PayUCheckoutProKit.h>
#import <PayUCheckoutProBaseKit/PayUCheckoutProBaseKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Utils : NSObject

+(NSDictionary *)transformResponse:(NSDictionary *) aDict;

+(UIColor *)colorFromHexString:(NSString *)hexString;

+(PayUPaymentParam *)paymentParam:(NSDictionary *)paymentParamDict;

+(PayUCheckoutProConfig *)config:(NSDictionary *)configDict;

+(NSError *)convertExceptionToError:(NSException *)exception;

@end

NS_ASSUME_NONNULL_END
