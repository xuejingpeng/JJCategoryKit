//
//  NSMutableString+Safe.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableString (Safe)

/**
 某个位置插入指定字符串

 @param aString 指定字符串
 @param loc 位置
 */
- (void)safeInsertString:(NSString *)aString atIndex:(NSUInteger)loc;

/**
 后面添加指定字符串

 @param aString 需要添加的字符串
 */
- (void)safeAppendString:(NSString *)aString;

/**
 替换字符串

 @param target 旧的字符串
 @param replacement 新的字符串
 @param options 查找方式
 @param searchRange 查找范围
 @return 结果
 */
- (NSUInteger)safeReplaceOccurrencesOfString:(NSString *)target withString:(NSString *)replacement options:(NSStringCompareOptions)options range:(NSRange)searchRange;
@end
