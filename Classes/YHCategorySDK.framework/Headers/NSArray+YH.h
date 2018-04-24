//
//  NSArray+YH.h
//  YHCategorySDK
//
//  Created by Jagtu on 2018/4/16.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (YH)

/**
 json字符串转化为NSArray
 */
+ (NSArray *)arrayWithJsonString:(NSString *)jsonString;

@end
