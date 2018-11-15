//
//  NSNumber+UC.h
//  UCCat
//
//  Created by xubojoy on 2018/11/15.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSNumber (UC)
/**
 Creates and returns an NSNumber object from a string.
 Valid format: @"12", @"12.345", @" -0xFF", @" .23e99 "...
 
 @param string  The string described an number.
 
 @return an NSNumber when parse succeed, or nil if an error occurs.
 */
+ (nullable NSNumber *)numberWithString:(NSString *)string;
@end

NS_ASSUME_NONNULL_END
