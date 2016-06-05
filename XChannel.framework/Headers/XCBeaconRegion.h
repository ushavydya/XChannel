//
//  XCBeaconRegion.h
//  XChannelSDK
//
//  Created by Vydyanathan Krishnamoorthy on 4/22/14.
//  Copyright (c) 2014 Xemobi Inc. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@interface XCBeaconRegion : CLBeaconRegion

+ (instancetype)sharedInstance;
+ (NSArray *)targetRegions;

- (id)initWithUUID:(NSString *)uuidString;

@end
