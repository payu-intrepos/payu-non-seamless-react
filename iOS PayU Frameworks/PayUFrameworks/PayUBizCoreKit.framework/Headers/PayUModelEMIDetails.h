//
//  PayUModelEMIDetails.h
//  SeamlessTestApp
//
//  Created by Umang Arya on 4/4/16.
//  Copyright © 2016 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PayUModelEMIDetails : NSObject

@property (strong, nonatomic) NSString *emiBankInterest;
@property (strong, nonatomic) NSString *bankRate;
@property (strong, nonatomic) NSString *bankCharge;
@property (strong, nonatomic) NSString *amount;
@property (strong, nonatomic) NSString *cardType;
@property (strong, nonatomic) NSString *emiValue;
@property (strong, nonatomic) NSString *emiInterestPaid;
@property (strong, nonatomic) NSString *additionalCost;
@property (strong, nonatomic) NSString *emiAmount;
@property (strong, nonatomic) NSString *emiMdrNote;
@property (strong, nonatomic) NSString *loanAmount;
@property (strong, nonatomic) NSString *paybackAmount;
@property (strong, nonatomic) NSString *tenure;
@property (strong, nonatomic) NSString *transactionAmount;
@property (strong, nonatomic) NSString *bankReference;

@property (nonatomic, nullable, copy)   NSArray<NSString *> *supportedCardBins;
@property (nonatomic, nullable, strong) NSNumber *minTxnAmount;
@property (nonatomic, assign) BOOL isEligible;

/*!
 * This method returns dictionary object after parsing getEMIAmountAccordingToInterest
 * @return [obj NSDictionary] [NSDictionary type]
 * @param  [JSON]      [id type]
 */
+(NSDictionary *)prepareDictFromJSON:(id)JSON;

+(NSArray<PayUModelEMIDetails *> *)prepareArrayFromJSONForEligibleBinsForEMI:(id)JSON;

//additionalCost = "0.00";
//amount = "0.17";
//bankCharge = 0;
//bankRate = "<null>";
//"card_type" = "credit card";
//emiAmount = "0.17";
//emiBankInterest = 12;
//emiMdrNote = "<null>";
//"emi_interest_paid" = "0.02";
//"emi_value" = "0.17";
//loanAmount = 1;
//paybackAmount = 0;
//tenure = "06 months";
//transactionAmount = 1;

//additionalCost = "0.00";
//amount = "0.33";
//bankCharge = 0;
//cardType = "credit card";
//emiAmount = "0.33";
//emiBankInterest = 13;
//emiInterestPaid = "0.02";
//emiValue = "0.34";
//loanAmount = 1;
//paybackAmount = 0;
//tenure = "03 months";
//transactionAmount = 1;

@end

NS_ASSUME_NONNULL_END

