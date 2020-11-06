//
//  PayUModelPaymentRelatedDetail.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 09/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class declares the properties that holds payment related details.
 */
#import <Foundation/Foundation.h>
#import "PayUModelNetBanking.h"
#import "PayUModelStoredCard.h"
#import "PayUModelCashCard.h"
#import "PayUModelEMI.h"

@interface PayUModelPaymentRelatedDetail : NSObject

@property (nonatomic, strong) NSArray *oneTapStoredCardArray;
@property (nonatomic, strong) NSArray *storedCardArray;
@property (nonatomic, strong) NSArray *netBankingArray;
@property (nonatomic, strong) NSArray *cashCardArray;
@property (nonatomic, strong) NSArray *upiArray;
@property (nonatomic, strong) NSArray *EMIArray;
@property (nonatomic, strong) NSArray *NoCostEMIArray;

@property (nonatomic, strong) NSMutableArray *availablePaymentOptionsArray;

@end


/*
{
    ibiboCodes =     {
        amexz =         {
            AMEXZ =             {
                "bank_id" = "<null>";
                pgId = 110;
                "pt_priority" = 100;
                "show_form" = 0;
                title = AmexezeClick;
            };
        };
        cashcard =         {
            AMON =             {
                "bank_id" = "<null>";
                pgId = 30;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "Airtel Money";
            };
            CPMC =             {
                "bank_id" = "<null>";
                pgId = 20;
                "pt_priority" = 8;
                "show_form" = 1;
                title = "Citibank Reward Points";
            };
            DONE =             {
                "bank_id" = "<null>";
                pgId = 65;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "DONE Cash Card";
            };
            ITZC =             {
                "bank_id" = "<null>";
                pgId = 31;
                "pt_priority" = 100;
                "show_form" = 0;
                title = ItzCash;
            };
            OXICASH =             {
                "bank_id" = "<null>";
                pgId = 85;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "Oxicash card";
            };
            PAYCASH =             {
                "bank_id" = "<null>";
                pgId = 84;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "PAYCASH CARD";
            };
            ZIPCASH =             {
                "bank_id" = "<null>";
                pgId = 82;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "ZIPcash card";
            };
        };
        cod =         {
            COD =             {
                "bank_id" = "<null>";
                pgId = 40;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "Cash On Delivery";
            };
        };
        creditcard =         {
            CC =             {
                "bank_id" = "<null>";
                pgId = 8;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "Credit Card";
            };
            DINR =             {
                "bank_id" = "<null>";
                pgId = 8;
                "pt_priority" = 100;
                "show_form" = 1;
                title = Diners;
            };
        };
        debitcard =         {
            MAES =             {
                "bank_id" = "<null>";
                pgId = 8;
                "pt_priority" = 11;
                "show_form" = 1;
                title = "Other Maestro Cards";
            };
            MAST =             {
                "bank_id" = "<null>";
                pgId = 8;
                "pt_priority" = 10;
                "show_form" = 1;
                title = "MasterCard Debit Cards (All Banks)";
            };
            PNDB =             {
                "bank_id" = "<null>";
                pgId = 108;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "Punjab National Bank Debit Card";
            };
            SMAE =             {
                "bank_id" = "<null>";
                pgId = 8;
                "pt_priority" = 3;
                "show_form" = 1;
                title = "State Bank Maestro Cards";
            };
            VISA =             {
                "bank_id" = "<null>";
                pgId = 8;
                "pt_priority" = 20;
                "show_form" = 1;
                title = "Visa Debit Cards (All Banks)";
            };
        };
        emi =         {
            EMI =             {
                bank = HDFC;
                "bank_id" = "<null>";
                pgId = 15;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "3 Months";
            };
            EMI03 =             {
                bank = CITI;
                "bank_id" = "<null>";
                pgId = 20;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "3 Months";
            };
            EMI06 =             {
                bank = CITI;
                "bank_id" = "<null>";
                pgId = 20;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "6 Months";
            };
            EMI12 =             {
                bank = HDFC;
                "bank_id" = "<null>";
                pgId = 15;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "12 Months";
            };
            EMI6 =             {
                bank = HDFC;
                "bank_id" = "<null>";
                pgId = 15;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "6 Months";
            };
            EMI9 =             {
                bank = HDFC;
                "bank_id" = "<null>";
                pgId = 15;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "9 Months";
            };
            EMIA12 =             {
                bank = AXIS;
                "bank_id" = "<null>";
                pgId = 7;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "12 Months";
            };
            EMIA3 =             {
                bank = AXIS;
                "bank_id" = "<null>";
                pgId = 7;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "3 Months";
            };
            EMIA6 =             {
                bank = AXIS;
                "bank_id" = "<null>";
                pgId = 7;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "6 Months";
            };
            EMIA9 =             {
                bank = AXIS;
                "bank_id" = "<null>";
                pgId = 7;
                "pt_priority" = 100;
                "show_form" = 1;
                title = "9 Months";
            };
        };
        netbanking =         {
            AXIB =             {
                "bank_id" = "<null>";
                pgId = 23;
                "pt_priority" = 3;
                "show_form" = 0;
                title = "AXIS Bank NetBanking";
            };
            BBCB =             {
                "bank_id" = "<null>";
                pgId = 24;
                "pt_priority" = 5;
                "show_form" = 0;
                title = "Bank of Baroda - Corporate Banking";
            };
            BBRB =             {
                "bank_id" = "<null>";
                pgId = 24;
                "pt_priority" = 6;
                "show_form" = 0;
                title = "Bank of Baroda - Retail Banking";
            };
            BOIB =             {
                "bank_id" = "<null>";
                pgId = 53;
                "pt_priority" = 7;
                "show_form" = 0;
                title = "Bank of India";
            };
            BOMB =             {
                "bank_id" = "<null>";
                pgId = 58;
                "pt_priority" = 8;
                "show_form" = 0;
                title = "Bank of Maharashtra";
            };
            CABB =             {
                "bank_id" = "<null>";
                pgId = 69;
                "pt_priority" = 9;
                "show_form" = 0;
                title = "Canara Bank";
            };
            CRPB =             {
                "bank_id" = "<null>";
                pgId = 33;
                "pt_priority" = 16;
                "show_form" = 0;
                title = "Corporation Bank";
            };
            DSHB =             {
                "bank_id" = "<null>";
                pgId = 64;
                "pt_priority" = 19;
                "show_form" = 0;
                title = "Deutsche Bank";
            };
            FEDB =             {
                "bank_id" = "<null>";
                pgId = 59;
                "pt_priority" = 22;
                "show_form" = 0;
                title = "Federal Bank";
            };
            HDFB =             {
                "bank_id" = "<null>";
                pgId = 56;
                "pt_priority" = 23;
                "show_form" = 0;
                title = "HDFC Bank";
            };
            ICIB =             {
                "bank_id" = "<null>";
                pgId = 19;
                "pt_priority" = 24;
                "show_form" = 0;
                title = "ICICI Netbanking";
            };
            IDBB =             {
                "bank_id" = "<null>";
                pgId = 32;
                "pt_priority" = 25;
                "show_form" = 0;
                title = "Industrial Development Bank of India";
            };
            INIB =             {
                "bank_id" = "<null>";
                pgId = 28;
                "pt_priority" = 29;
                "show_form" = 0;
                title = "IndusInd Bank";
            };
            INOB =             {
                "bank_id" = "<null>";
                pgId = 45;
                "pt_priority" = 28;
                "show_form" = 0;
                title = "Indian Overseas Bank";
            };
            JAKB =             {
                "bank_id" = "<null>";
                pgId = 37;
                "pt_priority" = 31;
                "show_form" = 0;
                title = "Jammu and Kashmir Bank";
            };
            KRKB =             {
                "bank_id" = "<null>";
                pgId = 35;
                "pt_priority" = 32;
                "show_form" = 0;
                title = "Karnataka Bank";
            };
            KRVB =             {
                "bank_id" = "<null>";
                pgId = 71;
                "pt_priority" = 33;
                "show_form" = 0;
                title = "Karur Vysya ";
            };
            SBBJB =             {
                "bank_id" = "<null>";
                pgId = 46;
                "pt_priority" = 48;
                "show_form" = 0;
                title = "State Bank of Bikaner and Jaipur";
            };
            SBHB =             {
                "bank_id" = "<null>";
                pgId = 47;
                "pt_priority" = 49;
                "show_form" = 0;
                title = "State Bank of Hyderabad";
            };
            SBIB =             {
                "bank_id" = "<null>";
                pgId = 39;
                "pt_priority" = 50;
                "show_form" = 0;
                title = "State Bank of India";
            };
            SBMB =             {
                "bank_id" = "<null>";
                pgId = 48;
                "pt_priority" = 51;
                "show_form" = 0;
                title = "State Bank of Mysore";
            };
            SBTB =             {
                "bank_id" = "<null>";
                pgId = 49;
                "pt_priority" = 53;
                "show_form" = 0;
                title = "State Bank of Travancore";
            };
            SOIB =             {
                "bank_id" = "<null>";
                pgId = 36;
                "pt_priority" = 46;
                "show_form" = 0;
                title = "South Indian Bank";
            };
            UBIB =             {
                "bank_id" = "<null>";
                pgId = 25;
                "pt_priority" = 58;
                "show_form" = 0;
                title = "Union Bank of India";
            };
            UNIB =             {
                "bank_id" = "<null>";
                pgId = 63;
                "pt_priority" = 59;
                "show_form" = 0;
                title = "United Bank Of India";
            };
            VJYB =             {
                "bank_id" = "<null>";
                pgId = 70;
                "pt_priority" = 60;
                "show_form" = 0;
                title = "Vijaya Bank";
            };
            YESB =             {
                "bank_id" = "<null>";
                pgId = 26;
                "pt_priority" = 61;
                "show_form" = 0;
                title = "Yes Bank";
            };
        };
        paisawallet =         {
            PAYUW =             {
                "bank_id" = "<null>";
                pgId = 79;
                "pt_priority" = 100;
                "show_form" = 0;
                title = "Paisa Wallet non-ROD";
            };
        };
    };
    userCards =     {
        msg = "Card not found.";
        status = 0;
    };
}
*/


