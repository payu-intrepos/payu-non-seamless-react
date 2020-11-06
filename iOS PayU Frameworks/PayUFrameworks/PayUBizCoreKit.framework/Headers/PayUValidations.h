//
//  PayUValidations.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 01/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class validates the payment params.
 */
#import <Foundation/Foundation.h>
#import "PayUModelPaymentParams.h"


@interface PayUValidations : NSObject

/*!
 * This method validates mandatory params for payment and returns error string.
 * @param  [paymentParam]                                   [PayUModelPaymentParams type]
 * @return [errorString]                                    [NSMutableString type]
 * @see    [validateMandatoryParamsForPaymentHashGeneration]
 * @see    [validateEnvironment]
 * @see    [validateHash]
 */
-(NSMutableString *)validateMandatoryParamsForPayment: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates mandatory params for paymentHashGeneration and returns error string.
 * @param  [paymentParam]                                   [PayUModelPaymentParams type]
 * @return [errorString]                                    [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateTransactionID]
 * @see    [validateAmount]
 * @see    [validateProductInfo]
 * @see    [validateSURLFURL]
 * @see    [validateFirstName]
 * @see    [validateEmail]
 */
-(NSMutableString *)validateMandatoryParamsForPaymentHashGeneration: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate OneTap params and returns string value.
 * @param  [paymentParam]                   [PayUModelPaymentParams type]
 * @return [errorString]                    [NSMutableString type]
 * @see    [validateOneTapTokenDictionary]
 */
-(NSMutableString *)validateOneTapParam: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate stored card params and returns string value.
 * @param  [paymentParam]                   [PayUModelPaymentParams type]
 * @return [errorString]                    [NSMutableString type]
 * @see    [validateStoredCardToken]
 * @see    [validateCVV]
 */
-(NSMutableString *)validateStoredCardParams: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates Net Banking params.
 * @param  [paymentParam]                   [PayUModelPaymentParams type]
 * @return [errorString]                    [NSString type]
 * @see    [validateBankCode]
 */
-(NSString *)validateNetbankingParams: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates CCDC params for payment and returns error string.
 * @param  [paymentParam]                                   [PayUModelPaymentParams type]
 * @return [errorString]                                    [NSMutableString type]
 * @see    [getIssuerOfCardNumber]
 * @see    [validateExpiryMonth]
 * @see    [validateExpiryYear]
 * @see    [validateCardNumber]
 * @see    [validateCVV]
 */
-(NSMutableString *)validateCCDCParams: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate payment related detail for mobile SDK params and returns error string.
 * @param  [paymentParam]           [PayUModelPaymentParams type]
 * @return [errorString]            [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 */
-(NSMutableString *)validatePaymentRelatedDetailsParam:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate offer params and returns error string.
 * @param  [paymentParam]                  [PayUModelPaymentParams type]
 * @return [errorString]                   [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 * @see    [validateLuhnCheckOnCardNumber]
 * @see    [validateOfferKey]
 * @see    [validateAmount]
 */
-(NSMutableString *)validateOfferStatusParam:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate delete stored card params and returns string value.
 * @param  [paymentParam]                   [PayUModelPaymentParams type]
 * @return [errorString]                    [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateUserCredentials]
 * @see    [validateStoredCardToken]
 * @see    [validateEnvironment]
 */
-(NSMutableString *)validateDeleteStoredCard: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate VAS params and returns error string.
 * @param  [paymentParam]           [PayUModelPaymentParams type]
 * @return [errorString]            [NSMutableString type]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 */
-(NSMutableString *)validateVASParams:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates cash card params.
 * @param  [paymentParam]                   [PayUModelPaymentParams type]
 * @return [errorString]                    [NSString type]
 * @see    [validateCCDCParams]
 * @see    [validateBankCode]
 */
-(NSString *)validateCashCardParams: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates EMI params.
 * @param  [paymentParam]                   [PayUModelPaymentParams type]
 * @return [errorString]                    [NSString type]
 * @see    [getIssuerOfCardNumber]
 * @see    [validateExpiryMonth]
 * @see    [validateExpiryYear]
 * @see    [validateCardNumber]
 * @see    [validateCVV]
 * @see    [validateBankCode]
 */
-(NSString *)validateEMIParams: (PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates user credentials.
 * @param  [userCredentials]               [NSString type]
 * @return [errorString]                   [NSString type]
 */
-(NSString *)validateUserCredentials: (NSString *) userCredentials;

/*!
 * This method validates offerKey.
 * @param  [offerKey]       [NSString type]
 * @return [errorString]    [NSString type]
 */
-(NSString *)validateOfferKey:(NSString *) offerKey;

/*!
 * This method validates key.
 * @param  [key]               [NSString type]
 * @return [errorString]       [NSString type]
 */
-(NSString *)validateKey:(NSString *) key;

/*!
 * This method validates TransactionID.
 * @param  [transactionID]       [NSString type]
 * @return [errorString]         [NSString type]
 */
-(NSString *)validateTransactionID:(NSString *) transactionID;

/*!
 * This method validates TransactionID seprated by Pipe symbol.
 * @param  [transactionID]       [NSString type]
 * @return [errorString]         [NSString type]
 * @see    [validateTransactionID]
 */
-(NSMutableString *)validatePipedTransactionID:(NSString *) transactionID;
//Card Validations

/*!
 * This method returns the issuer of card number.
 * @param  [cardNumber]                     [NSString type]
 * @return [issuer]                         [NSString type]
 * @see    [validateRegex]
 * @see    [validateLuhnCheckOnCardNumber]
 */
-(NSString *)getIssuerOfCardNumber:(NSString *) cardNumber;

/*!
 * This method validates expiry month and year.
 * @param  [year]           [NSString type]
 * @param  [month]          [NSString type]
 * @return [errorString]    [NSString type]
 */
-(NSString *)validateExpiryYear:(NSString *) year withExpiryMonth:(NSString *) month;

/*!
 * This method validates CVV number.
 * @param  [cardNumber]                     [NSString type]
 * @return [errorString]                    [NSString type]
 * @see    [getIssuerOfCardNumber]
 */
-(NSString *) validateCVV:(NSString *) CVV withCardNumber:(NSString *) cardNumber;

// Other

/*!
 * This method validates expiry month.
 * @param  [month]          [NSString type]
 * @return [errorString]    [NSString type]
 */
-(NSString *)validateExpiryMonth:(NSString *) month;

/*!
 * This method validates LuhnCheck on card number.
 * @param  [cardNumber]                     [NSString type]
 * @return [string]                         [NSString type]
 */
-(NSString *)validateLuhnCheckOnCardNumber:(NSString *) cardNumber;

/*!
 * This method validates card number.
 * @param  [cardNumber]                     [NSString type]
 * @return [errorString]                    [NSString type]
 * @see    [getIssuerOfCardNumber]
 * @see    [validateLuhnCheckOnCardNumber]
 */
-(NSString *)validateCardNumber:(NSString *) cardNumber;


//-(BOOL)validateRegex:(NSString *) regex withCardNumber:(NSString *) cardNumber;

// General Validations

/*!
 * This method validates numeric value.
 * @param  [paramString]    [NSString type]
 * @return [YES/NO]         [BOOL type]
 */
-(BOOL)isNumeric:(NSString *) paramString;


//-(BOOL)isAlphabet:(NSString *) paramString;

/*!
 * This method validate offer params and returns error string.
 * @param  [paymentParam]                  [PayUModelPaymentParams type]
 * @return [errorString]                   [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 * @see    [validateLuhnCheckOnCardNumber]
 * @see    [validateOfferKey]
 * @see    [validateAmount]
 */
-(NSMutableString *)validateOfferDetailsParam:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method validates amount.
 * @param  [amount]            [NSString type]
 * @return [errorString]       [NSString type]
 */
-(NSString *)validateAmount:(NSString *) amount;

/*!
 * This method validate EMIAmountAccordingToInterest Params and returns error string.
 * @param  [paymentParam]                  [PayUModelPaymentParams type]
 * @return [errorString]                   [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 * @see    [validateAmount]
 */
- (NSMutableString *)validateEMIAmountAccordingToInterestParams:(PayUModelPaymentParams *) paymentParam;

/// This method validate EligibleBinsForEMI Params and returns error string.
/// @param paymentParam  payment params
- (NSString *)validateEligibleBinsForEMIParams:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate GetUserCards Params and returns error string.
 * @param  [paymentParam]                  [PayUModelPaymentParams type]
 * @return [errorString]                   [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 * @see    [validateUserCredentials]
 */
- (NSMutableString *)validateGetUserCardsParam:(PayUModelPaymentParams *) paymentParam;

/*!
 * This method validate VerifyPaymentAPI Params and returns error string.
 * @param  [paymentParam]                  [PayUModelPaymentParams type]
 * @return [errorString]                   [NSMutableString type]
 * @see    [validateKey]
 * @see    [validateHash]
 * @see    [validateEnvironment]
 * @see    [validatePipedTransactionID]
 */
-(NSMutableString *)validateVerifyPaymentParam:(PayUModelPaymentParams *) paymentParam;

-(NSMutableString *)validateEditUserCardParam:(PayUModelPaymentParams *) paymentParam;

-(NSMutableString *)validateDeleteOneTapTokenParam:(PayUModelPaymentParams *) paymentParam;

-(NSMutableString *)validateCheckIsDomesticParam:(PayUModelPaymentParams *) paymentParam;

-(NSMutableString *)validateGetTransactionInfoParam:(PayUModelPaymentParams *) paymentParam;

-(NSMutableString *)validateSaveUserCardParam:(PayUModelPaymentParams *) paymentParam;

-(NSString *)validateCardNumberForCheckIsDomestic:(NSString *) cardNumber;

-(NSString *)validateLazyPayParams:(PayUModelPaymentParams *) paymentParam;

-(NSString *)validateUPIParams: (PayUModelPaymentParams *) paymentParam;

-(BOOL)isValidVPA:(NSString *) vpa;

@end
