//
//  UIColor+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (YH)

/**
 16进制颜色
 
 @param color #ffffff
 @return color
 */
+ (UIColor *) colorWithHexString: (NSString *)color;


/**
 <#Description#>

 @param color color
 @param alpha alpha
 @return color
 */
+ (UIColor *) colorWithHexString: (NSString *)color withAlpha:(CGFloat)alpha;
@end
