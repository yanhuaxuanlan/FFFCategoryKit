//
//  NSString+Base64.h
//  wealthmaster
//
//  Created by apple on 2019/1/15.
//  Copyright © 2019 panshi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Base64)
+ (NSString *)base64StringFromText:(NSString *)text;
@end

NS_ASSUME_NONNULL_END
