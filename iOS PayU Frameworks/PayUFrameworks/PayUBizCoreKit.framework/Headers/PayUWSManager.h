//
//  WSManager.h
//  PayU_iOS_SDK_TestApp
//
//  Created by Sharad Goyal on 15/10/15.
//  Copyright (c) 2015 PayU, India. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ATTRIBUTE_ALLOC __attribute__((unavailable("alloc not available, call sharedSingletonInstance instead")))
#define ATTRIBUTE_INTI __attribute__((unavailable("init not available, call sharedSingletonInstance instead")))
#define ATTRIBUTE_NEW __attribute__((unavailable("new not available, call sharedSingletonInstance instead")))
#define ATTRIBUTE_COPY __attribute__((unavailable("copy not available, call sharedSingletonInstance instead")))

/*!
 * This class is used to handle WebRequest to communicate with Server.
 */
@interface PayUWSManager : NSObject

/*!
 * This method returns singleton object.
 * @return [obj]                [WSManager Type]
 * @see    [initUniqueInstance]
 */
+(instancetype)getSingletonInstance;

@property (copy) void (^myBlockVar) (BOOL success, NSDictionary *response, NSError *error);

+(instancetype) alloc ATTRIBUTE_ALLOC;
-(instancetype) init  ATTRIBUTE_INTI;
+(instancetype) new   ATTRIBUTE_NEW;
+(instancetype) copy  ATTRIBUTE_INTI;

/*!
 * This method sends request to server and handles response and gives callback to block
 * @param [pURL]        [NSString type]
 * @param [bodyPost]    [NSString type]
 * @param [block]       [block to get callback]
 */
- (void) postOperation:(NSString *)pURL parameter:(NSString *)bodyPost andCompletion:(void (^)(BOOL success, NSDictionary *response, NSError *error))block;

@end
