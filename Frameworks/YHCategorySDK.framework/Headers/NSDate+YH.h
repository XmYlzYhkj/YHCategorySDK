//
//  NSDate+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (YH)

/**
 *  用于直播时长
 *
 *  @param compareDate 比较的日期
 *
 *  @return 字符串
 */
+ (NSString *) compareCurrentTime:(NSDate*) compareDate ;

+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;


//获取日
- (NSUInteger)getDay;
//获取月
- (NSUInteger)getMonth;
//获取年
- (NSUInteger)getYear;
//获取小时
- (NSUInteger)getHour;
//获取分钟
- (NSUInteger)getMinute;
//该月的最后一天
- (NSDate *)endOfMonth;
//转为NSString类型的
+ (NSDate *)dateFromString:(NSString *)string;

/**
 *  根据生日计算星座
 *
 *  @param month 月份
 *  @param day   日期
 *
 *  @return 星座名称
 */
+ (NSString *)calculateConstellationWithMonth:(NSInteger)month day:(NSInteger)day;

/**
 *  计算年龄
 */
+ (NSInteger)ageWithDateOfBirthYear:(NSInteger)year
                              Month:(NSInteger)month
                                Day:(NSInteger)day;

#pragma mark 时间戳转换

// 整形转 某年某月某日
+ (NSString *)toStringData:(UInt64)UInt64Date;
+ (NSString *)toDStringData:(UInt64)UInt64Date;
/// 将时间戳 格式化为 formatString(例如:yyyy-MM-dd HH:mm:ss)类型格式
+ (NSString *)formatDate:(NSString *)formatString WithTimeStamp:(NSInteger)timeStamp;

/// 将标准日期字符串(e.g. 2002-07-17 09:41:00) 格式化为 formatString(e.g. yyyy-MM-dd HH:mm:ss)类型格式
+ (NSString *)formatDate:(NSString *)dataStr withFormat:(NSString *)formatString;

//将formatString格式的日期转为yyyy年MM月dd日
+ (NSString *)formatDate:(NSString *)dataStr forFormat:(NSString *)formatString;
/**
 时间字符串转时间戳
 
 @param date 时间戳
 @param formatString 格式化
 @return 时间戳
 */
+ (NSString *)getTimeStamp:(NSString *)date format:(NSString *)formatString;



/// 将时间毫秒数 格式化为 formatString(例如:yyyy-MM-dd HH:mm:ss)类型格式
+ (NSString *)formatDate:(NSString *)formatString WithTimeMillis:(NSInteger)timeMillis;

/**
 获取当前时间戳
 
 @return 时间戳
 */
+ (NSTimeInterval)getTimeStamp;

/**
 @return yyyyMMddHHmmssSSS
 */
+ (NSString *)getTimeStampString;

/**
 当前月中一共有多少天
 */
+ (NSInteger)numberOfDays:(NSDate *)date;

+ (NSInteger)howManyDaysInThisYear:(NSInteger)year withMonth:(NSInteger)month;

/**
 *  得到上周的第一天和最后一天
 */
+(NSArray *)getFirstAndLastDayOfLastWeek;

/**
 *  得到这个周的第一天和最后一天
 */
+(NSArray *)getFirstAndLastDayOfThisWeek;

/**
 *  得到上个月的第一天和最后一天
 */
+(NSArray *)getFirstAndLastDayOfLastMonth;

/**
 *  得到这个月的第一天和最后一天
 */

+(NSArray *)getFirstAndLastDayOfThisMonth;
/**
 *  得到今年的第一天和最后一天
 */
+(NSArray *)getFirstAndLastDayOfThisYear;

/**
 当前月1号对应星期几
 */
- (NSInteger)firstWeekDay;


#pragma mark Public Method
- (NSString *)yh_stringValue;

- (NSString *)yh_stringValueWithFormat:(NSString *)format;

- (NSString *)yh_stringValueWithFormat:(NSString *)format withLocale:(NSLocale *)locale;

@end
