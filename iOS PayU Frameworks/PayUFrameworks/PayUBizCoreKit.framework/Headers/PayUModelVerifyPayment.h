//
//  PayUModelVerifyPayment.h
//  PayUNonSeamlessTestApp
//
//  Created by Umang Arya on 4/14/16.
//  Copyright © 2016 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PayUModelVerifyPayment : NSObject

@property (nonatomic, strong) NSString * MerchantUTR;
@property (nonatomic, strong) NSString * PGType;
@property (nonatomic, strong) NSString * SettledAt;
@property (nonatomic, strong) NSString * AddedOn;
@property (nonatomic, strong) NSString * AdditionalCharges;
@property (nonatomic, strong) NSString * Amt;
@property (nonatomic, strong) NSString * BankRefNum;
@property (nonatomic, strong) NSString * BankCode;
@property (nonatomic, strong) NSString * CardNo;
@property (nonatomic, strong) NSString * CardType;
@property (nonatomic, strong) NSString * Disc;
@property (nonatomic, strong) NSString * ErrorMessage;
@property (nonatomic, strong) NSString * ErrorCode;
@property (nonatomic, strong) NSString * Field9;
@property (nonatomic, strong) NSString * FirstName;
@property (nonatomic, strong) NSString * MihpayID;
@property (nonatomic, strong) NSString * Mode;
@property (nonatomic, strong) NSString * NameOnCard;
@property (nonatomic, strong) NSString * NetAmountDebit;
@property (nonatomic, strong) NSString * ProductInfo;
@property (nonatomic, strong) NSString * RequestId;
@property (nonatomic, strong) NSString * Status;
@property (nonatomic, strong) NSString * TransactionAmount;
@property (nonatomic, strong) NSString * TxnID;
@property (nonatomic, strong) NSString * Udf1;
@property (nonatomic, strong) NSString * Udf2;
@property (nonatomic, strong) NSString * Udf3;
@property (nonatomic, strong) NSString * Udf4;
@property (nonatomic, strong) NSString * Udf5;
@property (nonatomic, strong) NSString * UnmappedStatus;
@property (strong, nonatomic) NSString * merchantSubventionAmount;

+(NSDictionary *) prepareDictFromVerifyPaymentAPI:(id)JSON;

+(instancetype) prepareVerifyTxnObjFromEachVerifyTxnObjDetail:(id)JSON;
@end









/*
{
    msg = "1 out of 3 Transactions Fetched Successfully";
    status = 1;
    "transaction_details" =     {
        asdasd =         {
            "Merchant_UTR" = "<null>";
            "PG_TYPE" = HDFCPG;
            "Settled_At" = "0000-00-00 00:00:00";
            addedon = "2015-06-30 21:13:57";
            "additional_charges" = "0.00";
            amt = "12.34";
            "bank_ref_num" = 4928966142151811;
            bankcode = CC;
            "card_no" = 512345XXXXXX2346;
            "card_type" = MAST;
            disc = "0.00";
            "error_Message" = "NO ERROR";
            "error_code" = E000;
            field9 = SUCCESS;
            firstname = "John Hugh";
            mihpayid = 403993715512534860;
            mode = CC;
            "name_on_card" = "Any name";
            "net_amount_debit" = "12.34";
            productinfo = asdasd;
            "request_id" = "";
            status = success;
            "transaction_amount" = "12.34";
            txnid = asdasd;
            udf1 = "";
            udf2 = "";
            udf3 = "";
            udf4 = "";
            udf5 = "";
            unmappedstatus = captured;
        };
        dsadsad =         {
            mihpayid = "Not Found";
            status = "Not Found";
        };
        sdsad =         {
            mihpayid = "Not Found";
            status = "Not Found";
        };
    };
}
*/