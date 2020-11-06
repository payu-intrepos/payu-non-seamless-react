//
//  PayUModelGetTxnInfo.h
//  PayUNonSeamlessTestApp
//
//  Created by Umang Arya on 4/21/16.
//  Copyright © 2016 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PayUModelGetTxnInfo : NSObject

+(NSArray *)createObjectFromDict:(NSDictionary *) JSON;

@property (strong, nonatomic) NSString * action;
@property (strong, nonatomic) NSString * addedon;
@property (strong, nonatomic) NSString * additionalCharges;
@property (strong, nonatomic) NSString * amount;
@property (strong, nonatomic) NSString * bankName;
@property (strong, nonatomic) NSString * bankRefNo;
@property (strong, nonatomic) NSString * cardNo;
@property (strong, nonatomic) NSString * cardType;
@property (strong, nonatomic) NSString * discount;
@property (strong, nonatomic) NSString * email;
@property (strong, nonatomic) NSString * errorCode;
@property (strong, nonatomic) NSString * failureReason;
@property (strong, nonatomic) NSString * field2;
@property (strong, nonatomic) NSString * firstname;
@property (strong, nonatomic) NSString * ibiboCode;
@property (strong, nonatomic) NSString * thisid;
@property (strong, nonatomic) NSString * ip;
@property (strong, nonatomic) NSString * issuingBank;
@property (strong, nonatomic) NSString * merchantKey;
@property (strong, nonatomic) NSString * lastname;
@property (strong, nonatomic) NSString * merServiceFee;
@property (strong, nonatomic) NSString * merServiceTax;
@property (strong, nonatomic) NSString * merchantName;
@property (strong, nonatomic) NSString * mode;
@property (strong, nonatomic) NSString * offerKey;
@property (strong, nonatomic) NSString * offerType;
@property (strong, nonatomic) NSString * paymentGateway;
@property (strong, nonatomic) NSString * pgMID;
@property (strong, nonatomic) NSString * phone;
@property (strong, nonatomic) NSString * productInfo;
@property (strong, nonatomic) NSString * status;
@property (strong, nonatomic) NSString * transactionFee;
@property (strong, nonatomic) NSString * txnID;
@property (strong, nonatomic) NSString * udf1;
@property (strong, nonatomic) NSString * merchantSubventionAmount;

@end

/*
action = dropped;
addedon = "2016-01-01 09:37:49";
"additional_charges" = "0.00";
amount = "10.00";
"bank_name" = "State Bank of India";
"bank_ref_no" = "<null>";
"card_no" = "<null>";
cardtype = "<null>";
discount = "0.00";
email = "me@itsmeonly.com";
"error_code" = E501;
"failure_reason" = "<null>";
field2 = "<null>";
firstname = firstname;
"ibibo_code" = SBIB;
id = 497266345;
ip = "175.101.16.97";
"issuing_bank" = "<null>";
key = 0MQaQP;
lastname = "<null>";
"mer_service_fee" = "<null>";
"mer_service_tax" = "<null>";
merchantname = SDKTEST;
mode = NB;
"offer_key" = "";
"offer_type" = "<null>";
"payment_gateway" = SBINB;
"pg_mid" = "PAYU_PPMPL";
phone = "";
productinfo = myproduct;
status = "<null>";
"transaction_fee" = "10.00";
txnid = 1451621217881;
udf1 = udf1;
*/
