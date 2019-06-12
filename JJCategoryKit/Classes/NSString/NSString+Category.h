//
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface NSString (Category)

/**
  计算文字高度
  
  @param fontSize 字体
  @param width 最大宽度
  @return 文字高度
  */
- (CGFloat) heightWithFontSize:(CGFloat)fontSize width:(CGFloat)width;

/**
 计算文字宽度
 
 @param fontSize 字体
 @param maxHeight 最大高度
 @return 文字宽度
 */
- (CGFloat  ) widthWithFontSize:(CGFloat)fontSize height:(CGFloat)maxHeight;

/**
 电话号码中间4位*显示

 @param phoneNum 电话号码
 @return 135*****262
 */
+ (NSString*) getSecrectStringWithPhoneNumber:(NSString*)phoneNum;


/**
 银行卡号中间8位*显示

 @param accountNo 银行卡号
 @return 结果
 */
+ (NSString*) getSecrectStringWithAccountNo:(NSString*)accountNo;


/**
 转为手机格式，默认为-
 
 @param mobile 手机号
 @return 结果
 */
+ (NSString*) stringMobileFormat:(NSString*)mobile;


/**
 *  NSString转为NSNumber
 *
 *  @return NSNumber
 */
- (NSNumber*) toNumber;
/**
 抹除小数末尾的0

 @return 结果
 */
- (NSString*) removeUnwantedZero;

/**
 //去掉前后空格

 @return 结果
 */
- (NSString*) trimmedString;

@end
