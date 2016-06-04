//
//  NSData+Base64.h
//  NewPro
//
//  Created by Usha Vydyanathan on 2/7/13.
//  Copyright (c) 2013 Xemobi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Base64)
+ (NSData *) dataWithBase64EncodedString:(NSString *) string;
- (id) initWithBase64EncodedString:(NSString *) string;

- (NSString *) base64Encoding;
- (NSString *) base64EncodingWithLineLength:(unsigned int) lineLength;

@end
