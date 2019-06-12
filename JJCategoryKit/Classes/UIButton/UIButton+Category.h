//
//  UIButton+Category.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ButtonActionCallBack)(UIButton *button);
@interface UIButton (Category)
/** 事件回调的block */
@property (nonatomic, copy) ButtonActionCallBack buttonEventsBlock;
/**
 添加按钮点击事件

 @param action 事件
 @param controlEvents 点击方式
 */
-(void)addCallBackAction:(ButtonActionCallBack)action
        forControlEvents:(UIControlEvents)controlEvents;

/**
 添加按钮点击事件

 @param action 事件
 */
-(void)addCallBackAction:(ButtonActionCallBack)action;

@end

@interface UIButton (EnlargeTouchArea)

/**
 *  扩大或缩小 UIButton 的点击范围
 *
 *  @param top    向上增加的点击范围(注:top参数值为负数,则反方向减小点击范围)
 *
 *  @param right  向右增加的点击范围(注:right参数值为负数,则反方向减小点击范围)
 *
 *  @param bottom 向下增加的点击范围(注:bottom参数值为负数,则反方向减小点击范围)
 *
 *  @param left   向左增加的点击范围(注:left参数值为负数,则反方向减小点击范围)
 */
- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;

@end
