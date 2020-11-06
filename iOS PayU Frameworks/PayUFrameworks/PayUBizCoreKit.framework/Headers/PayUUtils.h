//
//  PayUUtils.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 30/09/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class declares the common methods like - to store values in NSUserDefaults.
 */
#import <Foundation/Foundation.h>
#import "PayUConstants.h"
#import "PayUModelPaymentParams.h"

@interface PayUUtils : NSObject

typedef void (^completionBlockForWebServiceResponse)(id JSON ,NSString *errorMessage, id extraParam);

/*!
 * This method returns request object.
 * @param  [postParam] [NSString type]
 * @param  [paramURL]  [NSUrl type]
 * @return [request]   [NSMutableURLRequest type]
 */
-(NSMutableURLRequest *)getURLRequestWithPostParam:(NSString *) postParam
                                           withURL:(NSURL *) paramURL
                                   httpHeaderField:(NSDictionary *) headerFields
                                        httpMethod:(NSString*)httpMethod;

/*!
 * This method gives response callback to block that is passed to it .
 * @param [webServiceRequest] [NSMutableURLRequest type]
 * @param [block]
 */
-(void)getWebServiceResponse:(NSMutableURLRequest *) webServiceRequest
         withCompletionBlock:(completionBlockForWebServiceResponse) completionBlock;

/*!
 * This method is used to store TransactionId to NSUserDefaults.
 * @param [txnID] [NSString type]
 */
+(void) setTransactionID:(NSString *)txnID;

/*!
 * This method is used to get TransactionId from NSUserDefaults.
 * @return [txnID]              [NSString type]
 */
+(NSString *) getTransactionID;

/*!
 * This method is used to store merchantKey to NSUserDefaults.
 * @param [merchantKey] [NSString type]
 */
+(void)setMerchantKey:(NSString*)merchantKey;

/*!
 * This method is used to get merchantKey from NSUserDefaults.
 * @return [merchantKey]              [NSString type]
 */
+(NSString *)getMerchantKey;

/*!
 * This method is used to get SDKVersion from plist file.
 * @return [SDKVersion] [NSString type]
 */
+(NSString *)getSDKVersion;

/*!
 * This method is used to get CBVersion from plist file.
 * @return [CBVersion] [NSString type]
 */
+(NSString *)getCBVersion;

/*!
 * This method is used to get paltformType of iOS device.
 * @return [platform] [NSString type]
 */
+ (NSString *) platformType;

/*!
 * This method is used to get DeviceAnalytics data that has to be send to server.
 * @param   [arr]                     [array stored in plist file]
 * @return  [DeviceAnalyticsString]   [NSString type]
 */
+(NSString *)prepareDeviceAnalyticsStringWithArray:(NSArray *)arr;

/*!
 * This method is used to get the Analytics Server url
 * @return  [analyticsServerUrl]        [NSString type]
 */
+(NSString *)getAnalyticsServerUrl;

/*!
 * This method is used to get network status.
 * @return  [NO/YES]                                                [BOOL type]
 * @see     [reachabilityForInternetConnection - PayUReachability]
 * @see     [currentReachabilityStatus - PayUReachability]
 */
+ (BOOL)isReachable;

/*!
 * This method is used to get network strength.
 * @return  [networkStrength]     [NSString type]
 * @see     [getSignalStrength]
 */
+ (NSString *)getNetworkSignalStrength;

/*!
 * This method is used to get network reachability string by which it is connected.
 * @return  [reachabilityString]                                    [NSString type]
 * @see     [reachabilityForInternetConnection - PayUReachability]
 * @see     [currentReachabilityStatus - PayUReachability]
 */
+ (NSString*)currentReachabilitySource;

/*!
 * This method returns sorted array bases on key parameter.
 @return [sortedArray]  [NSArray type]
 @param  [arr]          [NSArray type]
 @param  [key]          [NSString type]
 */
+(NSArray *)sortArray:(NSArray *)arr WithKey:(NSString *)key;

/*!
 * This method returns empty string if passed parameter is nil.
 * @param  [param] [NSString type]
 * @return [param] [NSString type]
 */
+(NSString *)passEmptyStringFornilValues:(NSString *) param;


+(NSDictionary *)createDictWithPostParam:(NSString *) postParam andJSON:(id) JSON;

+(BOOL)isKindOfNSDictionary:(id) dict;

+(NSString *)encodeURLString:(NSString *) urlString;

+(NSMutableDictionary *)getHTTPHeaderFieldsForV2:(PayUModelPaymentParams *) postParamModel;

+(NSString *)getStringifyDict:(NSDictionary *) dict;

+ (NSString *)getStringifyDict:(NSDictionary *) dict options:(NSJSONWritingOptions) options;

+ (BOOL)validateRegex:(NSString *) regex on:(NSString *) param;

@end
