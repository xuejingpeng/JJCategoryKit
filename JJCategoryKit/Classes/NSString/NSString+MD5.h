//
//  NSString+MD5.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)

/**
 MD5加密

 @return 加密完的结果
 */
- (NSString *) md5WithString;
@end
