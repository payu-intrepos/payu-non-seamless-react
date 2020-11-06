//
//  PayUCreateRequest.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 30/09/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class is used to create postParam and request for payment.
 */

#import <Foundation/Foundation.h>
#import "PayUConstants.h"
#import "PayUModelPaymentParams.h"
#import "PayUValidations.h"
#import "PayUCreatePostParam.h"
#import "PayUUtils.h"

@interface PayUCreateRequest : NSObject


typedef void (^completionBlockForCreateRequestWithPaymentParam)(NSMutableURLRequest *request ,NSString *postParam,NSString *error);

@property (nonatomic, strong) PayUValidations *validations;
@property (nonatomic, strong) PayUUtils *utils;
@property (nonatomic, strong) PayUCreatePostParam *createPostParam;

/*!
 * This method gives callback to block with request.
 * @param   [paymentParam]                          [PayUModelPaymentParams type]
 * @param   [paymentType]                           [NSString type]
 * @param   [block]
 * @see     [getURLRequestWithPostParam - PayUUtils]
 * @see     [createPostParam - PayUCreatePostParam]
 * @see     [validateMandatoryParamsForPayment - PayUValidations]     
 * @see     [validateOneTapParam - PayUValidations]                   
 * @see     [validateStoredCardParams - PayUValidations]              
 * @see     [validateCCDCParams - PayUValidations]                    
 * @see     [validateNetbankingParams - PayUValidations]              
 * @see     [validateCashCardParams - PayUValidations]                
 * @see     [validateEMIParams - PayUValidations]                     
 * @see     [validatePaymentRelatedDetailsParam - PayUValidations]    
 * @see     [validateOfferStatusParam - PayUValidations]              
 * @see     [validateDeleteStoredCard - PayUValidations]              
 * @see     [validateVASParams - PayUValidations]
 */
-(void)createRequestWithPaymentParam:(PayUModelPaymentParams *) paymentParam forPaymentType: (NSString *)paymentType withCompletionBlock:(completionBlockForCreateRequestWithPaymentParam) paramCompletionBlock;

@end
