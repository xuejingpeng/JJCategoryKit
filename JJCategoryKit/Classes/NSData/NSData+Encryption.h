//
//  NSData+Encryption.h
//  JJCategoryKit
//
//  Created by xuejingpeng0224@qq.com on 06/05/2019.
//  Copyright (c) 2019 xuejingpeng0224@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger,DataEncryption){
    DataEncryptionMD2,
    DataEncryptionMD4,
    DataEncryptionMD5,
    DataEncryptionSHA1,
    DataEncryptionSHA224,
    DataEncryptionSHA256,
    DataEncryptionSHA384,
    DataEncryptionSHA512,
};

@interface NSData (Encryption)

/*
 *  NSData 加密
 *
 *  @param type 加密类型
 */
- (NSData *) dataEncryptionType:(DataEncryption)type;

@end
