//
//  PayUConstants.h
//  PayU_iOS_CoreSDK
//
//  Created by Umang Arya on 30/09/15.
//  Copyright © 2015 PayU. All rights reserved.
//

#ifndef PayUConstants_h
#define PayUConstants_h

//Device Analytics constants
#define DEVICE_ANALYTICS                                        @"DeviceAnalytics"
#define ANALYTICS_TIMEOUT_INTERVAL                              5
#define DA_URL_PATH                                             @"mobileWebService.php"
#define iOS_MANUFACTURER                                        @"apple"

//Device Analytics Keys
#define KEY_SDK_VERSION_NAME                                    @"sdk_version"
#define KEY_CB_VERSION_NAME                                     @"cb_version"
#define KEY_IOS_VERSION                                         @"os_version"
#define KEY_NETWORK_INFO                                        @"network_info"
#define KEY_NETWORK_STRENGTH                                    @"network_strength"
#define KEY_DEVICE_RESOLUTION                                   @"resolution"
#define KEY_DEVICE_MANUFACTURER                                 @"device_manufacturer"
#define KEY_DEVICE_MODEL                                        @"device_model"
#define KEY_MERCHANT_ID                                         @"merchant_key"
#define KEY_TXNID                                               @"txnid"

#define ANALYTICS_PRODUCTION_URL                                @"https://info.payu.in/merchant/"
#define ANALYTICS_MOBILE_DEV_URL                                @"https://mobiledev.payu.in/merchant/"
#define ANALYTICS_MOBILE_TEST_URL                               @"https://mobiletest.payu.in/merchant/"
#define ANALYTICS_DEMOTEST_URL                                  @"https://demotest.payu.in/merchant/"
#define ANALYTICS_TEST_URL                                      @"https://test.payu.in/merchant/"
#define ANALYTICS_BIZ_CHECKOUT_TEST_URL                         @"https://bizcheckouttest.payu.in/merchant/"

#define PAYU_PAYMENT_PRODUCTION_URL                             @"https://secure.payu.in/_payment"
#define PAYU_PAYMENT_MOBILETEST_URL                             @"https://mobiletest.payu.in/_payment"
#define PAYU_PAYMENT_MOBILEDEV_URL                              @"https://mobiledev.payu.in/_payment"
#define PAYU_PAYMENT_DEMOTEST_URL                               @"https://demotest.payu.in/_payment"
#define PAYU_PAYMENT_TEST_URL                                   @"https://test.payu.in/_payment"
#define PAYU_PAYMENT_BIZ_CHECKOUT_TEST_URL                      @"https://bizcheckouttest.payu.in/_payment"

#define PAYU_WEBSERVICE_PRODUCTION_URL                          @"https://info.payu.in/merchant/postservice.php?form=2"
#define PAYU_WEBSERVICE_MOBILETEST_URL                          @"https://mobiletest.payu.in/merchant/postservice?form=2"
#define PAYU_WEBSERVICE_MOBILEDEV_URL                           @"https://mobiledev.payu.in/merchant/postservice?form=2"
#define PAYU_WEBSERVICE_DEMOTEST_URL                            @"https://demotest.payu.in/merchant/postservice?form=2"
#define PAYU_WEBSERVICE_TEST_URL                                @"https://test.payu.in/merchant/postservice?form=2"
#define PAYU_WEBSERVICE_BIZ_CHECKOUT_TEST_URL                   @"https://bizcheckouttest.payu.in/merchant/postservice?form=2"

#define PAYU_WEBSERVICE_V2_PRODUCTION_URL                       @"https://api.payu.in"
#define PAYU_WEBSERVICE_V2_SANDBOX_URL                          @"https://sandbox.payu.in"

#define ENVIRONMENT_PRODUCTION                                  @"Production"
#define ENVIRONMENT_MOBILETEST                                  @"MobileTest"
#define ENVIRONMENT_MOBILEDEV                                   @"MobileDev"
#define ENVIRONMENT_DEMOTEST                                    @"DemoTest"
#define ENVIRONMENT_TEST                                        @"Test"
#define ENVIRONMENT_BIZ_CHECKOUT_TEST                           @"BizCheckoutTest"

//Errors
//Mandatory params error list
#define ERROR_KEY_IS_MISSING                                    @"Key is missing, "

#define ERROR_TRANSACTIONID_IS_MISSING                          @"Transaction ID is missing, "
#define ERROR_TRANSACTIONID_GREATER_THAN_25                     @"Transaction ID greater than 25 character, "

#define ERROR_AMOUNT_IS_MISSING                                 @"Amount is missing, "
#define ERROR_AMOUNT_IS_NONNUMERIC                              @"Amount is non-numeric, "
#define ERROR_AMOUNT_CONTAIN_MORE_THAN_ONE_DECIMAL              @"Amount contain more than one decimal, "
#define ERROR_AMOUNT_IS_LESS_THAN_MINIMUM_AMOUNT                @"Amount is less than minimum amount, "


#define ERROR_PRODUCTINFO_IS_MISSING                            @"Product Info is missing, "
#define ERROR_PRODUCTINFO_GREATER_THAN_100                      @"Product Info greater than 100 character, "

#define ERROR_FIRSTNAME_IS_MISSING                              @"First name is missing, "
#define ERROR_FIRSTNAME_GREATER_THAN_60                         @"First name greater than 60 character, "

#define ERROR_EMAIL_IS_MISSING                                  @"email ID is missing, "
#define ERROR_EMAIL_INVALID                                     @"email ID is invalid, "

#define ERROR_PHONENUMBER_IS_MISSING                            @"Phone number is missing, "
#define ERROR_PHONENUMBER_GREATER_THAN_50                       @"Phone number greater than 50 character, "

#define ERROR_IS_MISSING                                        @"is missing, "

#define ERROR_IS_INVALID                                        @"is invalid, "

#define ERROR_HASH_IS_MISSING                                   @"hash is missing, "

#define ERROR_EXPIRY_MONTH_IS_MISSING                           @"Expiry month is missing, "
#define ERROR_EXPIRY_MONTH_IS_NONNUMERIC                        @"Expiry month is non-numeric, "
#define ERROR_EXPIRY_MONTH_IS_OUT_OF_RANGE                      @"Expiry month is not between 1-12, "
#define ERROR_EXPIRY_MONTH_IS_LESS_THAN_CURRENT_MONTH           @"Expiry month is less than current month, "

#define ERROR_EXPIRY_YEAR_IS_MISSING                            @"Expiry year is missing, "
#define ERROR_EXPIRY_YEAR_IS_NONNUMERIC                         @"Expiry year is non-numeric, "
#define ERROR_EXPIRY_YEAR_LESSER_THAN_CURRENT_YEAR              @"Expiry year can't be less than current year, "

#define ERROR_EXPIRY_YEAR_LENGTH_GREATER_THAN_4                 @"Expiry year length greater than 4 digit, "

#define ERROR_NAME_ON_CARD_IS_MISSING                           @"Name on card is missing, "

#define ERROR_CARD_NUMBER_IS_MISSING                            @"Card number is missing, "
#define ERROR_CARD_NUMBER_LENGTH_LESS_THAN_12                   @"Card number length is less than 12 digit, "
#define ERROR_CARD_NUMBER_IS_INVALID                            @"Card number or CardBin is Invalid, "
#define ERROR_CARD_NUMBER_IS_NON_NUMERIC                        @"Card number is non-numeric, "

#define ERROR_CVV_IS_MISSING                                    @"CVV is missing, "
#define ERROR_CVV_LENGTH_SHOULD_BE_4_FOR_AMEX                   @"CVV length should be 4 for AMEX, "
#define ERROR_CVV_LENGTH_SHOULD_BE_3_FOR_NON_AMEX               @"CVV length should be 3, "
#define ERROR_CVV_IS_NON_NUMERIC                                @"CVV is non-numeric, "
#define ERROR_CVV_INVALID                                       @"CVV is invalid, "

#define ERROR_SAVE_STORECARD_FLAG_IS_INVALID                    @"Save StoredCard flag is invalid, "

#define ERROR_ENVIRONMENT_IS_MISSING                            @"Environment is missing, "
#define ERROR_ENVIRONMENT_INVALID                               @"Invalid Environment, "

#define ERROR_BANK_CODE_IS_MISSING                              @"Bank Code is missing, "

#define ERROR_COMMAND_IS_MISSING                                @"Command is missing, "

#define ERROR_OFFER_KEY_IS_MISSING                              @"Offer Key is missing, "

#define ERROR_PAYMENT_TYPE_IS_MISSING                           @"Payment Type is missing, "

#define ERROR_STORED_CARD_TOKEN_IS_MISSING                      @"Stored card not selected, "
#define ERROR_STORED_CARD_TYPE_IS_MISSING                       @"Stored card type is missing, "
#define ERROR_STORED_CARD_MODE_IS_MISSING                       @"Stored card mode is missing, "

#define ERROR_ONE_TAP_STORED_CARD_TOKEN_MISSING                 @"Stored card Dictionary missing, "
#define ERROR_ONE_TAP_MERCHANY_HASH_IS_MISSING                  @"Merchant hash is missing, "
#define ERROR_ONE_TAP_CARD_CVV_MISSING                          @"This is not OneTap Card, "

#define ERROR_USER_CREDENTIAL_IS_MISSING                        @"User credentials is missing, "
#define ERROR_USER_CREDENTIAL_IS_INVALID                        @"Invalid User credentials, "

#define ERROR_VAS_INVALID_CARDBIN_OR_BANKCODE                   @"Invalid cardbin or bank code"
#define ERROR_VAS_API_NOT_CALLED                                @"VAS API not called"

#define VAS_DOWN_TIME_MESSAGE_FOR_NETBANKING                    @" Oops! %@ seems to be down. We recommend you to pay using any other means of payment."
#define VAS_DOWN_TIME_MESSAGE_FOR_CARD                          @"We are experiencing high failures for %@ card at this time. We recommend you to pay using any other means of payment."
#define ERROR_EMI_MODE_IS_MISSING                               @"EMI mode is missing, "

#define ERROR_CASH_CARD_IS_MISSING                              @"Cash Card is missing, "

#define ERROR_INVALID_JSON                                      @"Invalid JSON"
#define ERROR_EMI_NOT_SUPPORTED_WITH_THIS_CARD                  @"EMI not supported with this card"
#define ERROR_MEMORY_ISSUE                                      @"Memory Issue"

#define ERROR_SUBVENTION_AMOUNT_IS_MISSING                      @"Subvention Amount is missing, "
#define ERROR_SUBVENTION_AMOUNT_IS_NONNUMERIC                   @"Subvention Amount should be a Double value example 5.00, "
#define ERROR_SUBVENTION_AMOUNT_GREATER_THAN_AMOUNT             @"Subvention Amount should be less than or equal to the transaction amount, "
#define ERROR_INVALID_VPA                                       @"Invalid VPA, "
#define ERROR_BENEFECIARY_DETAIL_MISSING                        @"Beneficiary detail mandatory for TPV txn, "


// Regex

#define EMAIL_REGEX                                             @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}"
#define VPA_REGEX                                               @".+@.+"


// Payment Type

#define     PAYMENT_PG_INVALID                                  @"Invalid payment method, "



// Set values

#define MINIMUM_AMOUNT                                          @"0.1"


// Commands for webservice

#define COMMAND_PAYMENT_RELATED_DETAILS_FOR_MOBILE_SDK          @"payment_related_details_for_mobile_sdk"
#define COMMAND_CHECK_OFFER_STATUS                              @"check_offer_status"
#define COMMAND_CHECK_OFFER_DETAILS                             @"check_offer_details"
#define COMMAND_DELETE_USER_CARD                                @"delete_user_card"
#define COMMAND_VAS_FOR_MOBILE_SDK                              @"vas_for_mobile_sdk"
#define COMMAND_EDIT_USER_CARD                                  @"edit_user_card"
#define COMMAND_SAVE_USER_CARD                                  @"save_user_card"
#define COMMAND_GET_USER_CARDS                                  @"get_user_cards"
#define COMMAND_GET_EMI_AMOUNT_ACCORDING_TO_INTEREST            @"getEmiAmountAccordingToInterest"
#define COMMAND_ELIGIBLE_BINS_FOR_EMI                           @"eligibleBinsForEMI"
#define COMMAND_VERIFY_PAYMENT                                  @"verify_payment"
#define COMMAND_DELETE_ONE_TAP_TOKEN                            @"delete_one_tap_token"
#define COMMAND_CHECK_IS_DOMESTIC                               @"check_isDomestic"
#define COMMAND_GET_TRANSACTION_INFO                            @"get_transaction_info"

// Endpoints for webservice

#define PAYMENTS                                                @"/payments"
#define PAYMENT_METHODS                                         @"/paymentmethods"
#define SELLERS                                                 @"/sellers"
#define STORECARDS                                              @"/storecards"
#define URL_EMIS                                                @"/paymentmethods/emis/amounttable"


// HTTP MEthods
#define HTTP_METHOD_GET                                         @"GET"
#define HTTP_METHOD_POST                                        @"POST"
#define HTTP_METHOD_DELETE                                      @"DELETE"


#define     PARAM_COMMAND                                       @"command"
#define     PARAM_VAR1                                          @"var1"
#define     PARAM_VAR2                                          @"var2"
#define     PARAM_VAR3                                          @"var3"
#define     PARAM_VAR4                                          @"var4"
#define     PARAM_VAR5                                          @"var5"
#define     PARAM_VAR6                                          @"var6"
#define     PARAM_VAR7                                          @"var7"
#define     PARAM_VAR8                                          @"var8"
#define     PARAM_VAR9                                          @"var9"
#define     PARAM_VAR10                                         @"var10"
#define     PARAM_VAR11                                         @"var11"
#define     PARAM_VAR12                                         @"var12"
#define     PARAM_VAR13                                         @"var13"
#define     PARAM_VAR14                                         @"var14"
#define     PARAM_VAR15                                         @"var15"
#define     PARAM_DEFAULT                                       @"default"

#define     REQUEST_IDENTIFIER_1                                @"1"
#define     REQUEST_IDENTIFIER_2                                @"2"
#define     REQUEST_IDENTIFIER_3                                @"3"
#define     REQUEST_IDENTIFIER_4                                @"4"
#define     REQUEST_IDENTIFIER_5                                @"5"

// payment params
#define     PARAM_KEY                                           @"key"
#define     PARAM_TXNID                                         @"txnid"
#define     PARAM_AMOUNT                                        @"amount"
#define     PARAM_PRODUCT_INFO                                  @"productinfo"
#define     PARAM_PRODUCT_INFO_V2                               @"productInfo"
#define     PARAM_FIRST_NAME                                    @"firstname"
#define     PARAM_FIRST_NAME_V2                                 @"firstName"
#define     PARAM_LAST_NAME                                     @"lastname"
#define     PARAM_LAST_NAME_V2                                  @"lastName"
#define     PARAM_EMAIL                                         @"email"
#define     PARAM_PHONE                                         @"phone"
#define     PARAM_ADDRESS_1                                     @"address1"
#define     PARAM_ADDRESS_2                                     @"address2"
#define     PARAM_CITY                                          @"city"
#define     PARAM_STATE                                         @"state"
#define     PARAM_COUNTRY                                       @"country"
#define     PARAM_ZIPCODE                                       @"zipcode"
#define     PARAM_ZIPCODE_V2                                    @"zipCode"
#define     PARAM_UDF_1                                         @"udf1"
#define     PARAM_UDF_2                                         @"udf2"
#define     PARAM_UDF_3                                         @"udf3"
#define     PARAM_UDF_4                                         @"udf4"
#define     PARAM_UDF_5                                         @"udf5"
#define     PARAM_SURL                                          @"surl"
#define     PARAM_FURL                                          @"furl"
#define     PARAM_CURL                                          @"curl"
#define     PARAM_HASH                                          @"hash"
#define     PARAM_CODURL                                        @"codurl"
#define     PARAM_DROP_CATEGORY                                 @"drop_category"
#define     PARAM_DROP_CATEGORY_V2                              @"dropCategory"
#define     PARAM_ENFORCE_PAY_METHOD                            @"enforce_paymethod"
#define     PARAM_CUSTOM_NOTE                                   @"custom_note"
#define     PARAM_NOTE_CATEGORY                                 @"note_category"
#define     PARAM_SHIPPING_FIRSTNAME                            @"shipping_firstname"
#define     PARAM_SHIPPING_LASTNAME                             @"shipping_lastname"
#define     PARAM_SHIPPING_ADDRESS_1                            @"shipping_address1"
#define     PARAM_SHIPPING_ADDRESS_2                            @"shipping_address2"
#define     PARAM_SHIPPING_CITY                                 @"shipping_city"
#define     PARAM_SHIPPING_STATE                                @"shipping_state"
#define     PARAM_SHIPPING_COUNTRY                              @"shipping_country"
#define     PARAM_SHIPPING_ZIPCODE                              @"shipping_zipcode"
#define     PARAM_SHIPPING_PHONE                                @"shipping_phone"
#define     PARAM_OFFER_KEY                                     @"offer_key"
#define     PARAM_USER_CREDENTIALS                              @"user_credentials"
#define     PARAM_SUBVENTION_AMOUNT                             @"subvention_amount"
#define     PARAM_SUBVENTION_ELIGIBILITY                        @"subvention_eligibility"
#define     PARAM_IS_SUBVENT                                    @"is_subvent"
#define     PARAM_NOTIFYURL                                     @"notifyurl"

#define     PARAM_DEVICE_TYPE                                   @"device_type"
#define     PARAM_INSTRUMENT_TYPE                               @"instrument_type"
#define     PARAM_INSTRUMENT_ID                                 @"instrument_id"
#define     INSTRUMENT_TYPE                                     @"iOS"
#define     DEVICE_TYPE_IOS                                     @"2"
#define     PARAM_SDK_PLATFORM                                  @"sdk_platform"



#define     PARAM_PG                                            @"pg"
#define     PARAM_BANK_CODE                                     @"bankcode"
#define     PARAM_BANK_CODE_V2                                  @"bankCode"
#define     PARAM_NAME                                          @"name"

#define     PARAM_CCNUM                                         @"ccnum"
#define     PARAM_CCNAME                                        @"ccname"
#define     PARAM_CCVV                                          @"ccvv"
#define     PARAM_CC_EXP_MON                                    @"ccexpmon"
#define     PARAM_CC_EXP_YR                                     @"ccexpyr"
#define     PARAM_STORE_CARD                                    @"store_card"
#define     PARAM_STORE_CARD_NAME                               @"card_name"
#define     PARAM_BANK_CODE_CCDC                                @"CC"
#define     PARAM_BANK_CODE_UPI                                 @"UPI"
#define     PARAM_BANK_CODE_UPI_TPV                             @"UPITPV"
#define     PARAM_ONE_CLICK_CHECKOUT                            @"one_click_checkout"
#define     PARAM_CARD_MERCHANT_PARAM                           @"card_merchant_param"
#define     KEY_IBIBOCODES                                      @"ibiboCodes"
#define     KEY_USERCARDS                                       @"userCards"
#define     KEY_NETBANKING                                      @"netbanking"
#define     KEY_NETBANKING_V2                                   @"NetBanking"
#define     KEY_CASHCARD                                        @"cashcard"
#define     KEY_CASHCARD_V2                                     @"CashCard"
#define     KEY_EMI                                             @"emi"
#define     KEY_DEBITCARD                                       @"debitcard"
#define     KEY_CREDITCARD                                      @"creditcard"
#define     KEY_CREDITCARD_V2                                   @"CreditCard"
#define     KEY_PAISAWALLET                                     @"paisawallet"
#define     KEY_LAZYPAY                                         @"lazypay"
#define     KEY_NO_COST_EMI                                     @"no_cost_emi"
#define     KEY_UPI                                             @"upi"
//NetBanking parsing elements
#define     KEY_BANK_ID                                         @"bank_id"
#define     KEY_PGID                                            @"pgId"
#define     KEY_PAYMENTGATEWAYID                                @"paymentGatewayId"
#define     KEY_PT_PRIORITY                                     @"pt_priority"
#define     KEY_SHOW_FORM                                       @"show_form"
#define     KEY_TITLE                                           @"title"

//EMI parsing elements
#define     KEY_BANK                                            @"bank"
#define     KEY_MIN_AMOUNT                                      @"min_amount"
#define     KEY_ISELIGIBLE                                      @"isEligible"

//Stored Card parsing elements
#define     KEY_USER_CARDS                                      @"user_cards"
#define     KEY_CARD_BIN                                        @"card_bin"
#define     KEY_CARD_BRAND                                      @"card_brand"
#define     KEY_CARD_CVV                                        @"card_cvv"
#define     KEY_CARD_MODE                                       @"card_mode"
#define     KEY_CARD_NAME                                       @"card_name"
#define     KEY_CARD_NO                                         @"card_no"
#define     KEY_CARD_TOKEN                                      @"card_token"
#define     KEY_CARD_TYPE                                       @"card_type"
#define     KEY_EXPIRY_MONTH                                    @"expiry_month"
#define     KEY_EXPIRY_YEAR                                     @"expiry_year"
#define     KEY_ISDOMESTIC                                      @"isDomestic"
#define     KEY_IS_EXPIRED                                      @"is_expired"
#define     KEY_ISSUINGBANK                                     @"issuingBank"
#define     KEY_NAME_ON_CARD                                    @"name_on_card"
#define     DUPLICATE_CARD_COUNT                                @"duplicate_cards_count"

// OfferStatus parsing elements
#define     KEY_CATEGORY                                        @"category"
#define     KEY_DISCOUNT                                        @"discount"
#define     KEY_ERROR_CODE                                      @"error_code"
#define     KEY_MSG                                             @"msg"
#define     KEY_OFFER_AVAILED_COUNT                             @"offer_availed_count"
#define     KEY_OFFER_KEY                                       @"offer_key"
#define     KEY_OFFER_REMAINING_COUNT                           @"offer_remaining_count"
#define     KEY_OFFER_TYPE                                      @"offer_type"
#define     KEY_STATUS                                          @"status"
#define     KEY_ALLOWED_ON                                      @"allowed_on"
#define     KEY_OFFER_DATA                                      @"offer_data"
#define     KEY_CARD_DATA                                       @"card_data"
#define     KEY_CARD_TOKENS                                     @"card_tokens"


// Payment Param for Stored Card
#define     KEY_STORE_CARD_TOKEN                                @"store_card_token"

// Payment Param for PayUMoney
#define     PARAM_BANK_CODE_PAYU_MONEY                          @"payuw"

#define     KEY_USERCREDENTIALS                                 @"userCredentials"
#define     KEY_PAYMENTCARD                                     @"paymentCard"
#define     KEY_BIN                                             @"bin"
#define     KEY_BRAND                                           @"brand"
#define     KEY_CARDNUMBER                                      @"cardNumber"
#define     KEY_OWNERNAME                                       @"ownerName"
#define     KEY_VALIDTHROUGH                                    @"validThrough"
#define     KEY_USERCREDENTIAL                                  @"userCredential"

#define     NO_NETBANKING                                       @"NetBanking is unavailable"
#define     NO_STORED_CARDS                                     @"No Stored cards available"
#define     NO_CASH_CARDS                                       @"No cash cards available"
#define     NO_EMI                                              @"No EMI available"

// Payment Param for TPV Transactions
#define     KEY_BENEFICIARYDETAIL                               @"beneficiarydetail"
#define     KEY_BENEFICIARYACCOUNTNUMBER                        @"beneficiaryAccountNumber"

// Keys for VAS Parsing

#define     KEY_NETBANKINGSTATUS                                @"netBankingStatus"
#define     KEY_UP_STATUS                                       @"up_status"
#define     KEY_ISSUINGBANKDOWNBINS                             @"issuingBankDownBins"
#define     KEY_bins_arr                                        @"bins_arr"
#define     KEY_SBI_MAES_BINS                                   @"sbiMaesBins"

// Keys for Verify Transaction Parsing
#define     KEY_TRANSACTION_DETAILS                             @"transaction_details"
#define     KEY_MERCHANT_UTR                                    @"Merchant_UTR"
#define     KEY_PG_TYPE                                         @"PG_TYPE"
#define     KEY_SETTLED_AT                                      @"Settled_At"
#define     KEY_ADDEDON                                         @"addedon"
#define     KEY_ADDITIONAL_CHARGES                              @"additional_charges"
#define     KEY_AMT                                             @"amt"
#define     KEY_BANK_REF_NUM                                    @"bank_ref_num"
#define     KEY_BANKCODE                                        @"bankcode"
#define     KEY_DISC                                            @"disc"
#define     KEY_ERROR_MESSAGE                                   @"error_Message"
#define     KEY_FIELD9                                          @"field9"
#define     KEY_MIHPAYID                                        @"mihpayid"
#define     KEY_MODE                                            @"mode"
#define     KEY_NET_AMOUNT_DEBIT                                @"net_amount_debit"
#define     KEY_REQUEST_ID                                      @"request_id"
#define     KEY_TRANSACTION_AMOUNT                              @"transaction_amount"
#define     KEY_UNMAPPEDSTATUS                                  @"unmappedstatus"

// Available Payment Option

#define     PAYMENT_PG_ONE_TAP_STOREDCARD                       @"One Tap Stored Card"
#define     PAYMENT_PG_STOREDCARD                               @"Saved Cards"
#define     PAYMENT_PG_CCDC                                     @"Credit / Debit Cards"
#define     PAYMENT_PG_NET_BANKING                              @"Net Banking"
#define     PAYMENT_PG_CASHCARD                                 @"Cash Card"
#define     PAYMENT_PG_EMI                                      @"EMI"
#define     PAYMENT_PG_NO_COST_EMI                              @"No Cost EMI"
#define     PAYMENT_PG_PAYU_MONEY                               @"PayU Money"
#define     PAYMENT_PG_LAZYPAY                                  @"LazyPay"
#define     PAYMENT_PG_UPI                                      @"UPI"

// PG Type

#define     PG_NET_BANKING                                      @"NB"
#define     PG_CCDC                                             @"CC"
#define     PG_EMI                                              @"EMI"
#define     PG_CASHCARD                                         @"CASH"
#define     PG_PAYU_MONEY                                       @"wallet"

// getOfferDetail callback dictionary key
#define     KEY_POST_PARAM                                      @"PostParam"
#define     KEY_JSON_RESPONSE                                   @"JsonResponse"

// getEMIAmountAccordingToInterest
#define     KEY_EMIBANKINTEREST                                 @"emiBankInterest"
#define     KEY_BANKRATE                                        @"bankRate"
#define     KEY_BANKCHARGE                                      @"bankCharge"
#define     KEY_EMI_VALUE                                       @"emi_value"
#define     KEY_EMIVALUE                                        @"emiValue"
#define     KEY_EMI_INTEREST_PAID                               @"emi_interest_paid"
#define     KEY_EMIINTERESTPAID                                 @"emiInterestPaid"
#define     KEY_ADDITIONALCOST                                  @"additionalCost"
#define     KEY_EMIAMOUNT                                       @"emiAmount"
#define     KEY_EMIMDRNOTE                                      @"emiMdrNote"
#define     KEY_LOANAMOUNT                                      @"loanAmount"
#define     KEY_PAYBACKAMOUNT                                   @"paybackAmount"
#define     KEY_TENURE                                          @"tenure"
#define     KEY_TRANSACTIONAMOUNT                               @"transactionAmount"

// eligibleBinForEMI
#define     KEY_DETAILS                                         @"details"
#define     KEY_MINAMOUNT                                       @"minAmount"
#define     KEY_CARDBINS                                        @"cardBins"

// Check_isDomestic API parsing elements

#define     KEY_CARDCATEGORY                                    @"cardCategory"
#define     KEY_CARDTYPE                                        @"cardType"

// GetTransactionInfo API parsing elements
#define     KEY_TRANSACTION_DETAILS_INFO                        @"Transaction_details"
#define     KEY_ACTION                                          @"action"
#define     KEY_BANK_NAME                                       @"bank_name"
#define     KEY_BANK_REF_NO                                     @"bank_ref_no"
#define     KEY_CARDTYPE_INFO                                   @"cardtype"
#define     KEY_FAILURE_REASON                                  @"failure_reason"
#define     KEY_FIELD2                                          @"field2"
#define     KEY_IBIBO_CODE                                      @"ibibo_code"
#define     KEY_ID                                              @"id"
#define     KEY_IP                                              @"ip"
#define     KEY_ISSUING_BANK                                    @"issuing_bank"
#define     KEY_MER_SERVICE_FEE                                 @"mer_service_fee"
#define     KEY_MER_SERVICE_TAX                                 @"mer_service_tax"
#define     KEY_MERCHANTNAME                                    @"merchantname"
#define     KEY_PAYMENT_GATEWAY                                 @"payment_gateway"
#define     KEY_PG_MID                                          @"pg_mid"
#define     KEY_TRANSACTION_FEE                                 @"transaction_fee"
#define     KEY_MERCHANT_SUBVENTION_AMOUNT                      @"merchant_subvention_amount"
// SaveUserCard & EditUserCard API parsing elements
#define     KEY_CARDTOKEN                                       @"cardToken"
#define     KEY_CARD_LABEL                                      @"card_label"
#define     KEY_CARD_NUMBER                                     @"card_number"

// Issuer Collections
#define     ISSUER_LASER                                        @"LASER"
#define     ISSUER_DISCOVER                                     @"DISCOVER"

#define     ISSUER_SMAE                                         @"SMAE"
#define     ISSUER_RUPAY                                        @"RUPAY"
#define     ISSUER_VISA                                         @"VISA"
#define     ISSUER_MAST                                         @"MAST"
#define     ISSUER_MAES                                         @"MAES"
#define     ISSUER_DINR                                         @"DINR"
#define     ISSUER_AMEX                                         @"AMEX"
#define     ISSUER_JCB                                          @"JCB"

#define     DEFAULT_CARD_NAME                                   @"PayUUser"

#define     CASH_CARD_CPMC                                      @"CPMC"

#define     NO_INTERNET_CONNECTION                              @"Seems you are not connected to internet"

#ifdef DEBUG
#   define PayUSDKLog(...) NSLog(__VA_ARGS__)
#else
#   define PayUSDKLog(...)
#endif

#pragma mark - API V2 Constants -

typedef NS_ENUM(NSUInteger, PayUAPIVersion) {
    version_1,
    version_2
};

#define     KEY_PAYMENT_ID                                      @"paymentId"
#define     KEY_ACCOUNT_ID                                      @"accountId"
#define     KEY_REFERENCE_ID                                    @"referenceId"
#define     KEY_PAYMENT_STATUS                                  @"paymentStatus"
#define     KEY_AMOUNT                                          @"amount"
#define     KEY_CURRENCY                                        @"currency"
#define     KEY_PAYMENT_SOURCE                                  @"paymentSource"
#define     KEY_PAYMENT_METHOD                                  @"paymentMethod"
#define     KEY_ORDER                                           @"order"

#define     KEY_PAYMENTCARD                                     @"paymentCard"
#define     KEY_VALID_THROUGH                                   @"validThrough"
#define     KEY_OWNER_NAME                                      @"ownerName"
#define     KEY_ALTERNATE_NAME                                  @"alternateName"
#define     KEY_CVV                                             @"cvv"
#define     KEY_BRAND                                           @"brand"
#define     KEY_CATEGORY                                        @"category"
#define     KEY_ISSUER                                          @"issuer"
#define     KEY_BIN                                             @"bin"
#define     KEY_LAST4DIGITS                                     @"last4Digits"
#define     KEY_CARD_HASH                                       @"cardHash"
#define     KEY_ORDERED_ITEM                                    @"orderedItem"
#define     KEY_ITEMID                                          @"itemId"
#define     KEY_DESCRIPTION                                     @"description"
#define     KEY_QUANTITY                                        @"quantity"
#define     KEY_USER_DEFINED_FIELDS                             @"userDefinedFields"
#define     KEY_PAYMENT_CHARGE_SPECIFICATION                    @"paymentChargeSpecification"
#define     KEY_PRICE                                           @"price"
#define     KEY_TAX_SPECIFICATION                               @"taxSpecification"
#define     KEY_CONVENIENCE_FEE                                 @"convenienceFee"
#define     KEY_TDR                                             @"tdr"
#define     KEY_OFFERS                                          @"offers"
#define     KEY_APPLIED                                         @"applied"
#define     KEY_AVAILED                                         @"availed"
#define     KEY_OFFER_ID                                        @"offerId"
#define     KEY_TYPE                                            @"type"
#define     KEY_ENFORCE_PAYMENT                                 @"enforcePaymethod"
#define     KEY_SI                                              @"si"
#define     KEY_FORCE_PG_ID                                     @"forcePgid"
#define     KEY_CARD_MERCHANT_PARAM                             @"cardMerchantParam"
#define     KEY_SUBVENTION_AMOUNT                               @"subventionAmount"
#define     KEY_SUBVENTION_ELIGIBILITY                          @"subventionEligibility"
#define     KEY_AUTH_ONLY                                       @"authOnly"
#define     KEY_VPA                                             @"vpa"
#define     KEY_VISA_CALL_ID                                    @"visaCallId"
#define     KEY_SODEXO_SOURCE_ID                                @"sodexoSoureId"
#define     KEY_CITI_REWARDS                                    @"citiReward"
#define     KEY_PARTNER_HOLD_TIME                               @"partnerHoldTime"
#define     KEY_CONSENT_SHARED                                  @"consentShared"
#define     KEY_ITEMS                                           @"items"
#define     KEY_BIRTHDAY                                        @"birthday"
#define     KEY_GENDER                                          @"gender"
#define     KEY_STORE_CARD                                      @"storeCard"
#define     KEY_ONE_CLICK_CHECKOUT                              @"oneClickCheckout"
#define     KEY_TXN_S2S_FLOW                                    @"txnS2sFlow"

#define     KEY_CALLBACK_ACTIONS                                @"callBackActions"
#define     KEY_SUCCESS_ACTION                                  @"successAction"
#define     KEY_FAILURE_ACTION                                  @"failureAction"
#define     KEY_CANCELACTION                                    @"cancelAction"
#define     KEY_COD_ACTION                                      @"codAction"
#define     KEY_TERM_ACTION                                     @"termAction"
#define     KEY_TIMEOUT_ACTION                                  @"timeOutAction"
#define     KEY_RETURN_ACTION                                   @"returnAction"

#define     KEY_BILLING_DETAILS                                 @"billingDetails"
#define     KEY_AUTHORIZATION                                   @"authorization"

#define     KEY_BANK_DATA                                       @"bankData"
#define     KEY_MESSAGE_DIGEST                                  @"messageDigest"
#define     KEY_PARES                                           @"pares"
#define     KEY_ADDITIONAL_INFO                                 @"additionalInfo"

#define     KEY_PAYMENT_GATEWAY_IDENTIFIER                      @"paymentGatewayIdentifier"
#define     KEY_AUTH_UDF1                                       @"authUdf1"
#define     KEY_AUTH_UDF2                                       @"authUdf2"


#endif /* PayUConstants_h */
