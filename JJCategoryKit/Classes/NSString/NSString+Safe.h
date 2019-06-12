//
//  NSString+Safe.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Safe)


/**
 取出字符串的子串

 @param from 起点
 @return 结果
 */
- (NSString *)safeSubstringFromIndex:(NSUInteger)from;

/**
 取出字符串的子串

 @param to 从0到index结束
 @return 结果
 */
- (NSString *)safeSubstringToIndex:(NSUInteger)to;

/**
 取出字符串的zichuan

 @param range range区间取
 @return 结果
 */
- (NSString *)safeSubstringWithRange:(NSRange)range;

/**
 找出子串的位置
 
 @param aString 根据某个字符串
 @return 结果
 */
- (NSRange)safeRangeOfString:(NSString *)aString;

/**
 
找出子串的位置
 @param aString 根据某个字符串
 @param mask 查找方式
 @return 结果
 */
- (NSRange)safeRangeOfString:(NSString *)aString options:(NSStringCompareOptions)mask;

/**
 尾部添加字符串

 @param aString 字符串
 @return 结果
 */
- (NSString *)safeStringByAppendingString:(NSString *)aString;

@end
