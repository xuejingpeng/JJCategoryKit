
//
//  NSObject+DCNull.m
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import "NSObject+IsNull.h"

@implementation NSObject (IsNull)

#pragma mark - 判断一个对象是否为空
- (BOOL)isNull
{
    if ([self isEqual:[NSNull null]]) {
        return YES;
        
    }else if ([self isEqual:[NSNull class]]){
        return YES;
    }else{
        if (self == nil) {
            return YES;
        }
    }
    
    if ([self isKindOfClass:[NSString class]]) {
        if ([((NSString *)self) isEqualToString:@"(null)"]) {
            return YES;
        }
    }
    
    return NO;
}


@end
