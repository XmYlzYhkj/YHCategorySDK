//
//  UIImageView+YH.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (YH)

/*
 * @brief 图片加载通用函数
 * @parma imageUrl 图片地址
 * @parma completionHandler 图片获取完成
 */
- (void)imageStartLoading:(NSString *)imageUrl completionHandler:(void (^)(bool completion))completionHandler;

/*
 * @brief 图片加载通用函数, 网络图片将缓存在本地user's home directory/image
 * @parma imageUrl 图片地址(http开头为网络图片，否则去本地图片)
 */
- (void)imageStartLoading:(NSString *)imageUrl;



@end
