//
//  NSDictionary+Safe.h
//  DoubleConversion
//
//  Created by Umang Arya on 08/09/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Safe)

-(id)safeObjectForKey:(NSString *)aKey;
-(NSDictionary *)removeNullKeys;

@end

NS_ASSUME_NONNULL_END
