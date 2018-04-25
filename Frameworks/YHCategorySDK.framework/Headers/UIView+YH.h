//
//  UIView+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (YH)

-(void)setBorderWidth:(CGFloat)borderWidth;

-(void)setBorderColor:(UIColor *)borderColor;

-(CGFloat)getYForSubviewWithHeight:(CGFloat)height;//垂直居中

-(CGFloat)getXForSubviewWithWidth:(CGFloat)width;//左右居中


/**
 3D动画
 
 @param fromValue 起始值
 @param toValue 结束值
 @param anchorPoint 锚点
 */
-(void)addTransform3DAnimationFromValue:(id)fromValue toValue:(id)toValue anchorPoint:(CGPoint)anchorPoint duration:(CGFloat)duration;


/**
 位置动画
 
 @param startPoint 起始值
 @param endPoint 结束值
 @param duration 动画时间
 */
-(void)addAnimationWithStartPoint:(CGPoint )startPoint withEndPoint:(CGPoint)endPoint duration:(CGFloat)duration;

/**
 Z轴旋转动画

 @param fromValue 起始值
 @param toValue 结束值
 @param duration 动画时间
 */
-(void)addRotationAnimationFromValue:(id)fromValue toValue:(id)toValue duration:(CGFloat)duration;

/**
 设置框架颜色
 
 @param width 宽度
 @param color 颜色
 */
-(void)setLayerBorderWidth:(CGFloat)width borderColor:(UIColor *)color;



/**
 设置半径
 
 @param cornerRadius 半径
 */
-(void)setLayerCornerRadius:(CGFloat)cornerRadius;

@end
