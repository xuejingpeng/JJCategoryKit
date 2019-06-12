//
//  NSArray+Category.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Category)
// 数组转成json 字符串

/**
 数组转成json 字符串

 @return 结果
 */
- (NSString *)transToJSONString;
@end
