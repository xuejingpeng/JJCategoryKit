//
//  UIColor+ColorChange.h
//  CSSTradingPlatform
//
//  Created by 薛静鹏 on 2019/3/15.
//  Copyright © 2019 xiaoxue. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (ColorChange)
// 颜色转换：iOS中（以#开头）十六进制的颜色转换为UIColor(RGB)
+ (UIColor *) colorWithHexString: (NSString *)color;
@end

NS_ASSUME_NONNULL_END
