//
//  PayUModelOfferDetails.h
//  SeamlessTestApp
//
//  Created by Vipin Aggarwal on 17/03/16.
//  Copyright © 2016 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PayUModelStoredCard.h"

@class PayUModelOffer, PayUModelOfferAndStoredCard;

@interface PayUModelOfferDetails : NSObject

@property (nonatomic) NSArray <PayUModelOfferAndStoredCard*> *arrOfferAndStoredCard;

/*!
 * This method returns its instance.
 * @return [obj]            [OfferDetails type]
 * @param  [Json]           [NSDictionary type]
 * @param  [paymentType]    [NSString type]
 */
+ (instancetype) prepareOffersDetailsFromDict:(id) JSON forPaymentType:(NSString *) paymentType;

@end

@interface PayUModelOfferAndStoredCard : NSObject

@property (nonatomic) NSArray <PayUModelOffer*> *arrOffers;
@property (nonatomic) PayUModelStoredCard *storedCard;

@end


@interface PayUModelOffer : NSObject

@property (nonatomic, strong) NSString * category;
@property (nonatomic, strong) NSString * discount;
@property (nonatomic, strong) NSString * errorCode;
@property (nonatomic, strong) NSString * msg;
@property (nonatomic, strong) NSString * offerAvailedCount;
@property (nonatomic, strong) NSString * OfferKey;
@property (nonatomic, strong) NSString * OfferRemainingCount;
@property (nonatomic, strong) NSString * OfferType;
@property (nonatomic, strong) NSString * status;
@property (nonatomic, strong) NSSet *allowedOn;

//Response of OfferStatus API
/*
 category = debitcard;
 discount = 9;
 "error_code" = E001;
 msg = "Valid offer";
 "offer_availed_count" = Unknown;
 "offer_key" = "offertest@1411";
 "offer_remaining_count" = Unknown;
 "offer_type" = instant;
 status = 1;
 */

@end
