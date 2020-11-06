//
//  PayUModelPaymentParams.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 28/09/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class declares all payment params.
 */
#import <Foundation/Foundation.h>
#import "PayUModelHashes.h"
#import "PayUModelStoredCard.h"
#import "PayUConstants.h"

@interface PayUModelPaymentParams : NSObject <NSCopying>

// Mandatory Parameters
@property (strong, nonatomic) NSString * key;
@property (strong, nonatomic) NSString * amount;
@property (strong, nonatomic) NSString * productInfo;
@property (strong, nonatomic) NSString * firstName;
@property (strong, nonatomic) NSString * email;
@property (strong, nonatomic) NSString * transactionID;
@property (strong, nonatomic) NSString * SURL;
@property (strong, nonatomic) NSString * FURL;
// For setting Environment
//  ENVIRONMENT_PRODUCTION   is for Production
//  ENVIRONMENT_TEST   is for Test
@property (strong, nonatomic) NSString * environment;
// Hashes
@property (strong, nonatomic) PayUModelHashes *hashes;



// Other Parameters
@property (strong, nonatomic) NSString * userCredentials;


// Optional Parameters
@property (strong, nonatomic) NSString * phoneNumber;
@property (strong, nonatomic) NSString * address1;
@property (strong, nonatomic) NSString * address2;
@property (strong, nonatomic) NSString * city;
@property (strong, nonatomic) NSString * state;
@property (strong, nonatomic) NSString * country;
@property (strong, nonatomic) NSString * zipcode;
@property (strong, nonatomic) NSString * udf1;
@property (strong, nonatomic) NSString * udf2;
@property (strong, nonatomic) NSString * udf3;
@property (strong, nonatomic) NSString * udf4;
@property (strong, nonatomic) NSString * udf5;
@property (strong, nonatomic) NSString * CURL;
@property (strong, nonatomic) NSString * CODURL;
@property (strong, nonatomic) NSString * dropCategory;
@property (strong, nonatomic) NSString * enforcePayMethod;
@property (strong, nonatomic) NSString * customNote;
@property (strong, nonatomic) NSString * noteCategory;
@property (strong, nonatomic) NSString * shippingFirstname;
@property (strong, nonatomic) NSString * shippingLastname;
@property (strong, nonatomic) NSString * shippingAddress1;
@property (strong, nonatomic) NSString * shippingAddress2;
@property (strong, nonatomic) NSString * shippingCity;
@property (strong, nonatomic) NSString * shippingState;
@property (strong, nonatomic) NSString * shippingCountry;
@property (strong, nonatomic) NSString * shippingZipcode;
@property (strong, nonatomic) NSString * shippingPhone;
@property (strong, nonatomic) NSString * offerKey;

@property (assign, nonatomic) PayUAPIVersion apiVersion;

// Param for Stored card
@property (nonatomic, strong) NSString * cardBin;
@property (nonatomic, strong) NSString * cardBrand;
@property (nonatomic, strong) NSString * oneTapFlag;
@property (nonatomic, strong) NSString * cardMode;
@property (nonatomic, strong) NSString * cardName;
@property (nonatomic, strong) NSString * cardNo;
@property (nonatomic, strong) NSString * cardToken;
@property (nonatomic, strong) NSString * cardType;
@property (nonatomic, strong) NSString * isDomestic;
@property (nonatomic, strong) NSString * isExpired;
@property (nonatomic, strong) NSString * issuingBank;




// Param for CCDC & Stored Card
@property (strong, nonatomic) NSString * cardNumber;
@property (strong, nonatomic) NSString * expiryMonth;
@property (strong, nonatomic) NSString * expiryYear;
@property (strong, nonatomic) NSString * CVV;
@property (strong, nonatomic) NSString * nameOnCard;
@property  BOOL isOneTap;

//Param for CCDC
@property (strong, nonatomic) NSString * storeCardName;



// Param for NetBanking, StoredCard, CashCard, EMI
@property (strong, nonatomic) NSString * bankCode;

// Param for OneTap
@property (strong, nonatomic) NSDictionary *OneTapTokenDictionary;


//This param is for GetTransactionInfo API
@property (strong, nonatomic) NSString *startTime;
@property (strong, nonatomic) NSString *endTime;

//This param is for SaveuserCard API
@property (strong, nonatomic) NSString *duplicateCheck;
@property (strong, nonatomic) NSString *encryptionData;

//This param is used while doing payment via subvention mode of EMI
@property (strong, nonatomic) NSString *subventionAmount;
@property (strong, nonatomic) NSString *subventionEligibility;

//This param is for LazyPay
@property (strong, nonatomic) NSString *notifyURL;

//This param is for TPV transactions
@property (strong, nonatomic) NSString *beneficiaryAccountNumbers;




//API v2 properties
@property (strong, nonatomic) NSString *paymentId;
@property (strong, nonatomic) NSString *paymentStatus;
@property (strong, nonatomic) NSString *currency;
@property (strong, nonatomic) NSString *date;
@property (strong, nonatomic) NSString *digest;
@property (strong, nonatomic) NSString *authorization;

@property (strong, nonatomic) NSString * ownerName;
@property (strong, nonatomic) NSString * alternateName;
@property (strong, nonatomic) NSString * category; //"CreditCard" "DebitCard"
@property (strong, nonatomic) NSString * last4Digits;
@property (strong, nonatomic) NSString * cardHash;

/*
 //In array of orderItem, the array contains objects. Each object has this format
 {
 "itemId": null,
 "description": "AAA",
 "quantity": null
 }
 */
@property (strong, nonatomic) NSArray * orderItem;

@property (strong, nonatomic) NSDictionary * taxSpecification;
@property (strong, nonatomic) NSString * convenienceFee;
@property (strong, nonatomic) NSString * tdr;


/*
 //In array of offers, the array contains objects. Each object has this format
 {
 "offerId": "no_offer",
 "amount": null
 }
 */
@property (strong, nonatomic) NSArray * appliedOffers;
@property (strong, nonatomic) NSArray * availedOffers;

@property (strong, nonatomic) NSString * offerType;
@property (strong, nonatomic) NSString * failureReason;

@property (strong, nonatomic) NSString * si;
@property (strong, nonatomic) NSString * forcePgid;
@property (strong, nonatomic) NSString * cardMerchantParam;
@property (strong, nonatomic) NSString * authOnly;
@property (strong, nonatomic) NSString * vpa;
@property (strong, nonatomic) NSString * visaCallId;
@property (strong, nonatomic) NSString * sodexoSourceId;
@property (strong, nonatomic) NSString * citiReward;
@property (strong, nonatomic) NSString * partnerHoldTime;
@property (strong, nonatomic) NSString * consentShared;
@property (strong, nonatomic) NSString * items;
@property (strong, nonatomic) NSString * birthday;
@property (strong, nonatomic) NSString * gender;
@property (strong, nonatomic) NSString * oneClickCheckout;
@property (strong, nonatomic) NSString * txnS2SFlow;

@property (strong, nonatomic) NSString * cancelAction;
@property (strong, nonatomic) NSString * codAction;
@property (strong, nonatomic) NSString * termAction;
@property (strong, nonatomic) NSString * timeOutAction;
@property (strong, nonatomic) NSString * returnAction;

@property (strong, nonatomic) NSString * bankData;
@property (strong, nonatomic) NSString * messageDigest;
@property (strong, nonatomic) NSString * pares;
@property (strong, nonatomic) NSString * paymentGatewayIdentifier;
@property (strong, nonatomic) NSString * authUdf1;
@property (strong, nonatomic) NSString * authUdf2;

@property (strong, nonatomic) NSString * lastName;


- (NSString *)getValidThrough;
- (BOOL)isCardToBeStored;

@end

