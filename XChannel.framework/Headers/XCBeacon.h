//
//  XCBeacon.h
//  XChannelSDK
//
//  Created by Vydyanathan Krishnamoorthy on 11/17/14.
//  Copyright (c) 2014 Xemobi Inc. All rights reserved.
//

#ifndef NewPro_Beacon_h
#define NewPro_Beacon_h

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface XCBeacon : MTLModel <MTLJSONSerializing>

@property(nonatomic) NSInteger id;
@property(nonatomic, strong) NSString *uuid;
@property(nonatomic) NSInteger major;
@property(nonatomic) NSInteger minor;
@property(nonatomic) NSInteger clientId;
@property(nonatomic) BOOL isActive;
@property(nonatomic, strong) NSDate   *lastUpdated;

@end


#endif
