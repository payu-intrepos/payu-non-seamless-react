//
//  PayUCreatePostParam.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 06/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class is used to get PostParam.
 */

#import <Foundation/Foundation.h>
#import "PayUModelPaymentParams.h"

@interface PayUCreatePostParam : NSObject

/*!
 * This method returns postParam string.
 * @param  [paramPaymentParam]                      [PayUModelPaymentParams type]
 * @param  [type]                                   [NSString type]
 * @return [postParam]                              [NSString type]
 * @see    [appendDeviceRelatedParam]
 * @see    [passEmptyStringFornilValues - PayUUtils]
 * @see    [getCardName]
 */
-(NSString *)createPostParam:(PayUModelPaymentParams *) paramPaymentParam withType:(NSString *) type;

+ (NSString *)getV2PostParamForDeleteSC:(PayUModelPaymentParams *) paramPaymentParam;

@end
