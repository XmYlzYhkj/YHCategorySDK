//
//  UITextField+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/12/4.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (YH)

- (NSInteger)curOffset;

- (void)makeOffset:(NSInteger)offset;

- (void)makeOffsetFromBeginning:(NSInteger)offset;


/**
 格式化手机号码：1377 8888 777
 */
-(void)formatePhoneNum;


/**
 获取光标前一位的字符串
 
 @return
 */
-(NSString *)getOneStringBeforeCursor;


/**
 光标前一位字符串为空格
 
 @return
 */
-(BOOL)isBlankForTheStringBeforeCursor;


/**
 向前移一位光标
 */
-(void)removeCursorToPrevious;


/**
 向后移一位光标
 */
-(void)removeCursorToNext;


/**
 判断光标是否在最后一位
 
 @return 1
 */
-(BOOL)isCursorAtLastPosition;


/**
 判断是否为纯数字
 
 @param string
 @return
 */
- (BOOL)isNumberWithString:(NSString*)string;


/**
 通用正则表达式判断
 
 @param string
 @param regex
 @return
 */
- (BOOL)judgeByRegexWithString:(NSString *)string andRegex:(NSString *)regex;


@end
