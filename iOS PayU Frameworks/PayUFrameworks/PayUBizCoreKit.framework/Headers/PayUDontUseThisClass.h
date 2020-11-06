//
//  PayUDontUseThisClass.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 31/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class is used to provide Hash to the merchant. It is not recommended to use this class.
 */
#import <Foundation/Foundation.h>
#import "PayUModelHashes.h"
#import "PayUModelPaymentParams.h"
#import "PayUValidations.h"

@interface PayUDontUseThisClass : NSObject


typedef void (^completionBlockForgetPayUHashesWithPaymentParam)(PayUModelHashes *allHashes, PayUModelHashes *hashString, NSString *errorMessage);

/*!
 * This method gives callback for Hash.
 * @param [paymentParam]                                                      [PayUModelPaymentParams type]
 * @param [salt]                                                              [NSString type]
 * @see   [passEmptyStringFornilValues - PayUUtils]
 * @see   [getHash]
 * @see   [validateMandatoryParamsForPaymentHashGeneration - PayUValidations]
 */
-(void)getPayUHashesWithPaymentParam:(PayUModelPaymentParams *) paymentParam merchantSalt:(NSString *) salt withCompletionBlock:(completionBlockForgetPayUHashesWithPaymentParam) completionBlock;

- (NSString *) getHash:(NSString *)input;

+ (NSString*)getCurrentDateForAPIV2;

+ (id) getDigestForString:(NSString*)input;

+ (NSString*) getAuthStringForPostData:(NSString *) str
                              withDate:(NSString *) date
                                digest:(NSString *) digest
                                  salt:(NSString *) salt
                                   key:(NSString *) key;

+ (NSString *) getDeleteStoredCardPostParamString:(PayUModelPaymentParams *) paymentParam;
@end
