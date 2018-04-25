//
//  NSString+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (YH)

- (BOOL)isEmpty;

- (NSDictionary *)dictionaryWithJsonString;

/**
 *  URLEncode
 */
- (NSString *)URLEncodedString;

/**
 *  URLDecode
 */
-(NSString *)URLDecodedString;

-(NSString *)withDateFormat:(NSString *)originalFormat toFormat:(NSString *)sourceFormat;

@end
