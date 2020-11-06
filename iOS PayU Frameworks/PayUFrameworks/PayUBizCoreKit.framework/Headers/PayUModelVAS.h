//
//  PayUModelVAS.h
//  PayUNonSeamlessTestApp
//
//  Created by Umang Arya on 17/04/20.
//  Copyright © 2020 PayU. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Object interfaces

@interface PayUModelVAS : NSObject

@property (nonatomic, copy) NSArray<NSString *> *sbiMaesBins;
@property (nonatomic, copy) NSArray<NSString *> *downNetBanks;

+ (instancetype)fromJSONDictionary:(NSDictionary *)dict error:(NSError **)error;

@end


NS_ASSUME_NONNULL_END
