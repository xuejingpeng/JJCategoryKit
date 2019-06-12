//
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImage (Category)

/**
 由颜色生成图片

 @param color 颜色
 @return 结果图片
 */
+ (UIImage *) imageWithColor:(UIColor*)color;

/**
 将图片剪裁至目标尺寸

 @param sourceImage 目标图片
 @param targetSize 裁剪尺寸大小
 @return 结果的图片
 */
+ (UIImage *) imageByScalingAndCroppingForSourceImage:(UIImage *)sourceImage targetSize:(CGSize)targetSize;

/**
 图片旋转角度

 @param degrees 角度大小
 @return 结果图片
 */
- (UIImage *) imageRotatedByDegrees:(CGFloat)degrees;

/**
 拉伸图片按方向

 @param insets 方向拉伸
 @return 结果图片
 */
- (UIImage *) resizableImage:(UIEdgeInsets)insets;

//拉伸图片CGFloat

/**
 拉伸图片按比例拉伸

 @param scale 比例值
 @return 结果图片
 */
- (UIImage *) imageByResizeToScale:(CGFloat)scale;

/**
 放大图片按指定大小

 @param size 尺寸大小
 @return  结果图片
 */
- (UIImage *) imageByResizeWithMaxSize:(CGSize)size;

/**
 小样图图片CGSize

 @param size 尺寸大小
 @return 结果图片
 */
- (UIImage *) imageWithThumbnailForSize:(CGSize)size;

/**
 通过Rect剪裁图片

 @param rect 位置
 @return 结果图片
 */
- (UIImage *) imageByCropToRect:(CGRect)rect;

/**
 图片增加圆角

 @param radius 圆角的度数
 @return 结果图片
 */
- (UIImage *) imageByRoundCornerRadius:(CGFloat)radius;

/**
 图片增加圆角及边框

 @param radius 圆角度
 @param borderWidth 边框宽度
 @param borderColor 边框颜色
 @return 结果图片
 */
- (UIImage *) imageByRoundCornerRadius:(CGFloat)radius
                          borderWidth:(CGFloat)borderWidth
                          borderColor:(UIColor *)borderColor;

/**
 旋转图片

 @param orientation 旋转什么方向
 @return 结果图片
 */
- (UIImage *)imageByOrientation:(UIImageOrientation)orientation;
/**
 图片旋转180度
 
 @return 结果图片
 */
- (UIImage *)imageByRotate180;

//图片向左90度
- (UIImage *)imageByRotateLeft90;
@end


@interface UIImage (Blur)
//玻璃化效果，这里与系统的玻璃化枚举效果一样，但只是一张图
/**
 玻璃化效果，下面三个效果差不多

 @return 图片
 */
- (UIImage *)imageByBlurSoft;

- (UIImage *)imageByBlurLight;

- (UIImage *)imageByBlurExtraLight;

/**
 黑色玻璃化效果

 @return 结果
 */
- (UIImage *)imageByBlurDark;

/**
 玻璃化效果（颜色自定义）

 @param tintColor 颜色
 @return 结果
 */
- (UIImage *)imageByBlurWithTint:(UIColor *)tintColor;

- (UIImage *)imageByBlurRadius:(CGFloat)blurRadius
                     tintColor:(UIColor *)tintColor
                      tintMode:(CGBlendMode)tintBlendMode
                    saturation:(CGFloat)saturation
                     maskImage:(UIImage *)maskImage;

/**
 图片设置成模糊

 @param blur 程度，最大0.5
 @param exclusionPath 路径
 @return 结果
 */
- (UIImage *) boxblurImageWithBlur:(CGFloat)blur exclusionPath:(UIBezierPath *)exclusionPath;
@end





@interface UIImage (ImageEffects)

//图片效果

- (UIImage *)applyLightEffect;
- (UIImage *)applyExtraLightEffect;
- (UIImage *)applyDarkEffect;
- (UIImage *)applyBlurEffect;
- (UIImage *)applyTintEffectWithColor:(UIColor *)tintColor;
- (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius
                       tintColor:(UIColor *)tintColor
           saturationDeltaFactor:(CGFloat)saturationDeltaFactor
                       maskImage:(UIImage *)maskImage;
@end
