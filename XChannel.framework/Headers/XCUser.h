//
//  XCUser.h
//  XChanelSDK
//
//  Created by Usha Vydyanathan on 8/25/15
//  Copyright (c) 2015 Xemobi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface XCUser : MTLModel <MTLJSONSerializing> {
  
    NSInteger   id;
    NSString    *externalId;
    NSString    *firstName;
    NSString    *lastName;
    NSString    *name;
    NSString    *deviceId;
    NSString    *deviceOS;
    NSString    *pushToken;
    BOOL        pushEnabled;
    NSDate      *lastUpdated;
  
}

@property (nonatomic) NSInteger id;
@property (nonatomic, strong) NSString *externalId;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *deviceId;
@property (nonatomic, strong) NSString *deviceOS;
@property (nonatomic, strong) NSString *pushToken;
@property (nonatomic, strong) NSDate *lastUpdated;

@property (nonatomic) BOOL pushEnabled;

@end
