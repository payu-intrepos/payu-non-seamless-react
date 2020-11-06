//
//  PayUModelCheckIsDomestic.h
//  PayUNonSeamlessTestApp
//
//  Created by Umang Arya on 4/18/16.
//  Copyright © 2016 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PayUModelCheckIsDomestic : NSObject

@property (nonatomic, strong) NSString * isDomestic;
@property (nonatomic, strong) NSString * issuingBank;
@property (nonatomic, strong) NSString * cardType;
@property (nonatomic, strong) NSString * cardCategory;

+ (instancetype)prepareCheckIsDomesticObejctFromDict:(NSDictionary *)JSON;

@end
