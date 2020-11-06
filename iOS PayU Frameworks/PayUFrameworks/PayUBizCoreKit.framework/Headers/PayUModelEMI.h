//
//  PayUModelEMI.h
//  SeamlessTestApp
//
//  Created by Umang Arya on 28/10/15.
//  Copyright © 2015 PayU. All rights reserved.
//

/*!
 * This class declares the properties that holds EMI related information.
 */
#import <Foundation/Foundation.h>

@interface PayUModelEMI : NSObject

@property (strong, nonatomic) NSString * bankName;
@property (strong, nonatomic) NSString * bankID;
@property (strong, nonatomic) NSString * pgID;
@property (strong, nonatomic) NSString * ptPriority;
@property (strong, nonatomic) NSString * showForm;
@property (strong, nonatomic) NSString * emiTitle;
@property (strong, nonatomic) NSString * bankCode;
@property (strong, nonatomic) NSString * minAmount;

/*!
 * This method returns model objects array.
 * @return [obj array] [NSArray type]
 * @param  [Json]      [NSDictionary type]
 */
+ (NSArray *)prepareEMIArrayFromDict:(id)JSON;


/*!
 * This method returns model objects of No cost EMI.
 * @return [obj array] [NSArray type]
 * @param  [Json]      [NSDictionary type]
 */
+ (NSArray *)prepareNoCostEMIArrayFromDict:(id)JSON;


+ (NSDictionary *)getEMIDictFromEMIModelArray:(NSArray *)emiArray;

+ (NSDictionary *)getEligibleNoCostEMIDictFromEMIModelArray:(NSArray *)emiArray WRTToAmount:(NSString *) amount;

@end
