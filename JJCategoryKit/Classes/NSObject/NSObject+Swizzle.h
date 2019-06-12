//
//  NSObject+Swizzle.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Swizzle)

//覆盖实例方法
+ (void)overrideInstanceMethod:(SEL)origSelector withInstanceMethod:(SEL)newSelector;

//覆盖类方法
+ (void)overrideClassMethod:(SEL)origSelector withClassMethod:(SEL)newSelector;


//拦截实例方法
+ (void)exchangeInstanceMethod:(SEL)origSelector withInstanceMethod:(SEL)newSelector;

//拦截类方法
+ (void)exchangeClassMethod:(SEL)origSelector withClassMethod:(SEL)newSelector;

@end
