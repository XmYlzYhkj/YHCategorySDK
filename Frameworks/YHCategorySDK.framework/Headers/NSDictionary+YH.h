//
//  NSDictionary+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (YH)

/**
 字典转化为字符串
 
 @return str
 */
-(NSString*) dicToJsonString;

/**
 字典转化为字符串
 按照参数名升序,以"参数名=值&参数名=值&...&参数名=值"格式生成,字符串尾部不包含”&”字符
 @return str
 */
-(NSString *)dicToSortString;

/**
 json字符串转化为字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

@end
