//
//  PayUModelOfferStatus.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 13/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class declares the properties that holds offer status information.
 */
#import <Foundation/Foundation.h>

@interface PayUModelOfferStatus : NSObject

@property (nonatomic, strong) NSString * category;
@property (nonatomic, strong) NSString * discount;
@property (nonatomic, strong) NSString * errorCode;
@property (nonatomic, strong) NSString * msg;
@property (nonatomic, strong) NSString * offerAvailedCount;
@property (nonatomic, strong) NSString * OfferKey;
@property (nonatomic, strong) NSString * OfferRemainingCount;
@property (nonatomic, strong) NSString * OfferType;
@property (nonatomic, strong) NSString * status;

/*!
 * This method returns its instance.
 * @return [obj]       [OfferStatus type]
 * @param  [Json]      [NSDictionary type]
 */
+ (instancetype)prepareOfferStausObejctFromDict:(id) JSON;

@end

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