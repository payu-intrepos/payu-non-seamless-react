//
//  PayUWebServiceResponse.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 08/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class gives web service response callback.
 */
#import <Foundation/Foundation.h>
#import "PayUModelPaymentParams.h"
#import "PayUValidations.h"
#import "PayUUtils.h"
#import "PayUCreatePostParam.h"
#import "PayUJSONParser.h"
#import "PayUModelOfferStatus.h"
#import "PayUConstants.h"
#import "PayUSharedDataManager.h"
#import "PayUModelEMIDetails.h"
#import "PayUModelGetTxnInfo.h"
#import "PayUModelVAS.h"

@interface PayUWebServiceResponse : NSObject

typedef void (^completionBlockForPayUPaymentRelatedDetail)(PayUModelPaymentRelatedDetail *paymentRelatedDetails ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForOfferStatus)(PayUModelOfferStatus *offerStatus ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForOfferDetails)(PayUModelOfferDetails *offerDetails ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForDeleteStoredCard)(NSString * deleteStoredCardStatus, NSString * deleteStoredCardMessage ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForGetVASStatusForCardBinOrBankCode)(id ResponseMessage ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForVAS)(PayUModelVAS *vas ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForGetEMIAmountAccordingToInterest)(NSDictionary *dictEMIDetails ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForEligibleBinsForEMI)(NSArray<PayUModelEMIDetails *> *arrEMIDetails ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForGetUserCards)(NSDictionary *dictStoredCard ,NSString *errorMessage, id extraParam);

typedef void (^completionBlockForVerifyPayment)(NSDictionary *dictVerifyPayment ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForDeleteOneTapToken)(NSString *deleteOneTapTokenMsg ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForCheckIsDomestic)(PayUModelCheckIsDomestic *checkIsDomestic , NSString *errorMessage, id extraParam);
typedef void (^completionBlockForGetTransactionInfo)(NSArray *arrOfGetTxnInfo , NSString *errorMessage, id extraParam);
typedef void (^completionBlockForSaveUserCard)(PayUModelStoredCard *objStoredCard , NSString *errorMessage, id extraParam);

/*!
 * This method gives webService response callback for MobileSDK.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserforPaymentRelatedDetailForMobileSDK - PayUJSONParser]
 */
-(void)getPayUPaymentRelatedDetailForMobileSDK:(PayUModelPaymentParams *) paymentParam
                           withCompletionBlock:(completionBlockForPayUPaymentRelatedDetail) paramCompletionBlock;

/*!
 * This method gives webService response callback for OfferStatus.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserforOfferStatus - PayUJSONParser]
 */
-(void)getOfferStatus:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForOfferStatus) paramCompletionBlock;

/*!
 * This method gives webService response callback for OfferDetails.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserforOfferDetails - PayUJSONParser]
 */
-(void)getOfferDetails:(PayUModelPaymentParams *) paymentParam forPaymentType:(NSString *)paymentType withCompletionBlock:(completionBlockForOfferDetails) paramCompletionBlock;

/*!
 * This method gives webService response callback for deleteStoreCard.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserForDeleteStoredCard - PayUJSONParser]
 */
-(void)deleteStoredCard:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForDeleteStoredCard) paramCompletionBlock;

-(void)callVASForMobileSDKWithPaymentParam:(PayUModelPaymentParams *) paymentParam
                       withCompletionBlock:(completionBlockForVAS) paramCompletionBlock;

/*!
 * This method gives webService response callback for VAS. It is recommended to call from merchant side before payment initiated. It stores the response in singleton class. It contains info about banks and cardBins that are down for payment.
 * @param [paymentParam]                                        [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 */
-(void)callVASForMobileSDKWithPaymentParam:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method gives response callback for VAS status for passed cardBin or bankCode. All information has stored in "PayUSharedDataManager" class.
 * @param [cardBinOrBankCode]                               [NSString type]
 * @param [block]
 * @see   [isNumeric  -PayUValidations]
 * @see   [getIssuerOfCardNumber - PayUValidations]
 */
-(void)getVASStatusForCardBinOrBankCode:(NSString *) cardBinOrBankCode withCompletionBlock:(completionBlockForGetVASStatusForCardBinOrBankCode) paramCompletionBlock;
/*!
 * This method gives webService response callback for EMIAmountAccordingToInterest API.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserForGetEMIAmountAccordingToInterest - PayUJSONParser]
 */
-(void)getEMIAmountAccordingToInterest:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForGetEMIAmountAccordingToInterest) paramCompletionBlock;

/// This will return minimum amount and supported bin by each bank for EMI
/// @param paymentParam  paymentParams object
/// @param paramCompletionBlock  completion block
-(void)eligibleBinsForEMI:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForEligibleBinsForEMI) paramCompletionBlock;

/*!
 * This method gives webService response callback for getUserCards API.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserForGetUserCards - PayUJSONParser]
 */
-(void)getUserCards:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForGetUserCards) paramCompletionBlock;

/*!
 * This method gives webService response callback for verifyPayment API.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserForVerifyPayment - PayUJSONParser]
 */
-(void)verifyPayment:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForVerifyPayment) paramCompletionBlock;

/*!
 * This method gives webService response callback for EditUserCard API.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserForEditUserCard - PayUJSONParser]
 */
-(void)editUserCard:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForSaveUserCard) paramCompletionBlock;

/*!
 * This method gives webService response callback for DeleteOneTapToken API.
 * @param [paymentParam]                                                    [PayUModelPaymentParams type]
 * @param [block]
 * @see   [createRequestWithPaymentParam - PayUCreateRequest]
 * @see   [getWebServiceResponse - PayUUtils]
 * @see   [JSONParserForEditUserCard - PayUJSONParser]
 */
-(void)deleteOneTapToken:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForDeleteOneTapToken) paramCompletionBlock;

-(void)checkIsDomestic:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForCheckIsDomestic) paramCompletionBlock;

-(void)getTransactionInfo:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForGetTransactionInfo) paramCompletionBlock;

-(void)saveUserCard:(PayUModelPaymentParams *) paymentParam withCompletionBlock:(completionBlockForSaveUserCard) paramCompletionBlock;

@end
