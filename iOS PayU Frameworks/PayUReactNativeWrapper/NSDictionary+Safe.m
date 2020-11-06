//
//  NSDictionary+Safe.m
//  DoubleConversion
//
//  Created by Umang Arya on 08/09/20.
//

#import "NSDictionary+Safe.h"

@implementation NSDictionary (Safe)

-(id)safeObjectForKey:(NSString *)aKey {
    NSObject *object = self[aKey];
    const id nul = [NSNull null];
    if(object == nul) {
        return nil;
    }
    return object;
}

-(NSDictionary *)removeNullKeys{
    if ([self isKindOfClass:[NSDictionary class]]) {
        const NSMutableDictionary *replaced = [self mutableCopy];
        
        for(NSString *key in self) {
            replaced[key] = [self safeObjectForKey:key];
        }
        
        return [replaced copy];
    } else {
        return self;
    }
}

@end
