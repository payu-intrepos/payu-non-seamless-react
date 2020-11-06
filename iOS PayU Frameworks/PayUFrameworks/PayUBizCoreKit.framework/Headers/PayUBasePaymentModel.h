//
//  PayUBasePaymentModel.h
//  PayUNonSeamlessTestApp
//
//  Created by Vipin Aggarwal on 26/11/18.
//  Copyright © 2018 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PayUBasePaymentModel : NSObject

@property (strong, nonatomic) NSString * bankID;
@property (strong, nonatomic) NSString * pgID;
@property (strong, nonatomic) NSString * ptPriority;
@property (strong, nonatomic) NSString * showForm;
@property (strong, nonatomic) NSString * bankCode;

@end

NS_ASSUME_NONNULL_END
