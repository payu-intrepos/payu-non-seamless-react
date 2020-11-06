//
//  PayUModelUPI.h
//  PayUNonSeamlessTestApp
//
//  Created by Vipin Aggarwal on 26/11/18.
//  Copyright © 2018 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PayUBasePaymentModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface PayUModelUPI : PayUBasePaymentModel

@property (strong, nonatomic) NSString * upiTitle;

+ (NSArray *)prepareUPIArrayFromDict:(id)JSON;

@end

NS_ASSUME_NONNULL_END
