//
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Category)
//把View加在Window上
- (void) addToWindow;

@end

@interface UIView (Screenshot)

/**
 view截图

 @param compressionQuality 图片的质量：0~1
 @return 返回的图片
 */
- (UIImage*) screenshotCompressionQuality:(CGFloat)compressionQuality;

/**
 ScrollView截图 contentOffset

 @param contentOffset 截图范围
 @param compressionQuality 图片的质量：0~1
 @return 返回图片
 */
- (UIImage*) screenshotForScrollViewWithContentOffset:(CGPoint)contentOffset compressionQuality:(CGFloat)compressionQuality;
/**
 View按Rect截图

 @param frame frame
 @param compressionQuality 图片的质量：0~1
 @return 返回图片
 */
- (UIImage*) screenshotInFrame:(CGRect)frame compressionQuality:(CGFloat)compressionQuality;

/**
 整个view转成图片

 @return 返回图片
 */
- (UIImage*) convertToImage;
@end

@interface UIView (Animation)

/**
 左右抖动动画
 */
- (void) shakeAnimation;

/**
 旋转180度
 */
- (void) trans180DegreeAnimation;

@end

