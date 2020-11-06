//
//  PayUModelCashCard.h
//  SeamlessTestApp
//
//  Created by Umang Arya on 26/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class declares the properties that holds CachCard information.
 */
#import <Foundation/Foundation.h>
#import "PayUBasePaymentModel.h"

@interface PayUModelCashCard : PayUBasePaymentModel

@property (strong, nonatomic) NSString * cashCardTitle;

/*!
 * This method returns model objects array.
 * @return [obj array] [NSArray type]
 * @param  [Json]      [NSDictionary type]
 */
+ (NSArray *)prepareCashCardArrayFromDict:(id)JSON;

@end
