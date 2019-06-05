//
//  UIImage+UpdateImageSize.h
//  RemoteExpert
//
//  Created by yxh on 2018/6/25.
//  Copyright © 2018年 yxh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (UpdateImageSize)

/**
 改变图片大小

 @param img 原图片
 @param newSize 设置的图片大小
 @return 新图片
 */
+(UIImage *)imageResize :(UIImage*)img andResizeTo:(CGSize)newSize;
+ (UIImage *)thumbnailWithImageWithoutScale:(UIImage *)image size:(CGSize)asize;
+(UIImage *)imageCompressForSize:(UIImage *)sourceImage targetSize:(CGSize)size;

/**
 改变图片角度（一般用于圆角图片）

 @param radius 角度
 @return 新图片
 */
-(UIImage *)hyb_imageWithCornerRadius:(CGFloat)radius;


/**
 根据颜色或者单色的图片

 @param color 颜色
 @param size 大小
 @return 图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

@end
