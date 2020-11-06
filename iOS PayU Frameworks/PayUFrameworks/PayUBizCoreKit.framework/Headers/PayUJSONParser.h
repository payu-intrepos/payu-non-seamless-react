//
//  PayUJSONParser.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 09/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class is used to parse JSON
 */

#import <Foundation/Foundation.h>
#import "PayUModelPaymentRelatedDetail.h"
#import "PayUModelOfferStatus.h"
#import "PayUModelOfferDetails.h"
#import "PayUModelEMIDetails.h"
#import "PayUModelUPI.h"
#import "PayUModelCheckIsDomestic.h"
#import "PayUModelGetTxnInfo.h"
#import "PayUConstants.h"

@interface PayUJSONParser : NSObject

typedef void (^completionBlockForJSONParserforPaymentRelatedDetailForMobileSDK)(PayUModelPaymentRelatedDetail *paymentRelatedDetails ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForOfferStatus)(PayUModelOfferStatus *offerStatus ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForOfferDetails)(PayUModelOfferDetails *offerDetails ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForDeleteStoredCard)(NSString * deleteStoredCardStatus, NSString * deleteStoredCardMessage ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForGetEMIAmountAccordingToInterest)(NSDictionary *dictEMIDetails ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForEligibleBinsForEMI)(NSArray<PayUModelEMIDetails *> *arrEMIDetails ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForGetUserCards)(NSDictionary *dictStoredCard ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForVerifyPayment)(NSDictionary *dictVerifyPayment ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForDeleteOneTapToken)(NSString *deleteOneTapTokenMsg ,NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForCheckIsDomestic)(PayUModelCheckIsDomestic *checkIsDomestic , NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForGetTransactionInfo)(NSArray *arrOfGetTxnInfo , NSString *errorMessage, id extraParam);
typedef void (^completionBlockForJSONParserForSaveUserCard)(PayUModelStoredCard *objStoredCard , NSString *errorMessage, id extraParam);

/*!
 * This method parse the JSON for CCDC/NetBanking Offer.
 * @param [JSON] [id - object returned from "JSONObjectWithData" method of NSJSONSerialization]
 * @param [block]
 */
-(void)JSONParserforOfferStatus:(id) JSON withCompletionBlock:(completionBlockForJSONParserForOfferStatus) paramCompletionBlock;

/*!
 * This method parse the JSON for CCDC/NetBanking Offers.
 * @param [JSON] [id - object returned from "JSONObjectWithData" method of NSJSONSerialization]
 * @param [paymentType]         [NSString type]
 * @param [block]
 */
-(void)JSONParserforOfferDetails:(id) JSON withPaymentType:(NSString *) paymentType andCompletionBlock:(completionBlockForJSONParserForOfferDetails) paramCompletionBlock;

/*!
 * This method parse the JSON for CCDC/payment related detail. It parses the JSON and prepares array of model classes for all payment options.
 * @param [JSON] [id - object returned from "JSONObjectWithData" method of NSJSONSerialization]
 * @param [block]
 */
-(void)JSONParserforPaymentRelatedDetailForMobileSDK:(id) JSON
                            andOneTapTokenDictionary:(NSDictionary *) oneTapTokenDictionary
                                          apiVersion:(PayUAPIVersion) apiVersion
                                 withCompletionBlock:(completionBlockForJSONParserforPaymentRelatedDetailForMobileSDK) paramCompletionBlock;

/*!
 * This method parse the JSON for deleteStoredCard.
 * @param [JSON] [id - object returned from "JSONObjectWithData" method of NSJSONSerialization]
 * @param [block]
 */
-(void)JSONParserForDeleteStoredCard:(id) JSON
                          apiVersion:(PayUAPIVersion) apiVersion
                 withCompletionBlock:(completionBlockForJSONParserForDeleteStoredCard) paramCompletionBlock;

-(void)JSONParserForGetEMIAmountAccordingToInterest:(id) JSON withCompletionBlock:(completionBlockForJSONParserForGetEMIAmountAccordingToInterest) paramCompletionBlock;

-(void)JSONParserForEligibleBinsForEMI:(id) JSON withCompletionBlock:(completionBlockForJSONParserForEligibleBinsForEMI) paramCompletionBlock;

-(void)JSONParserForGetUserCards:(id) JSON
                      apiVersion:(PayUAPIVersion) apiVersion
             withCompletionBlock:(completionBlockForJSONParserForGetUserCards) paramCompletionBlock;

-(void)JSONParserForVerifyPayment:(id) JSON withCompletionBlock:(completionBlockForJSONParserForVerifyPayment) paramCompletionBlock;

-(void)JSONParserForDeleteOneTapToken:(id) JSON withCompletionBlock:(completionBlockForJSONParserForDeleteOneTapToken) paramCompletionBlock;

-(void)JSONParserForCheckIsDomestic:(id) JSON withCompletionBlock:(completionBlockForJSONParserForCheckIsDomestic) paramCompletionBlock;

-(void)JSONParserForGetTransactionInfo:(id) JSON withCompletionBlock:(completionBlockForJSONParserForGetTransactionInfo) paramCompletionBlock;

-(void)JSONParserForSaveUserCard:(id) JSON withCompletionBlock:(completionBlockForJSONParserForSaveUserCard) paramCompletionBlock;

@end
