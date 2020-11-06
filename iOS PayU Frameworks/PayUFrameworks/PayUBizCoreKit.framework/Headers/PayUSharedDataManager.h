//
//  PayUSharedDataManager.h
//  SeamlessTestApp
//
//  Created by Umang Arya on 19/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class stores info about VAS.
 */
#import <Foundation/Foundation.h>
//#import "Constants/PayUConstants.h"
#import "PayUConstants.h"

@interface PayUSharedDataManager : NSObject

/*!
 * This method returns singleton instance.
 */
+ (instancetype) sharedDataManager;

@property (nonatomic, strong) NSString *errorMessageForVAS;
@property (nonatomic, strong) id JSONForVAS;
@property (nonatomic, strong) NSString *postParam;
@property (nonatomic, strong) NSString *OfferPaymentType;

@end
