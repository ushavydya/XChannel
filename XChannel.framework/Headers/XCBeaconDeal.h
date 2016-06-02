//
//  XCBeaconDeal.h
//   XChannelSDK
//
//  Created by Vydyanathan Krishnamoorthy on 5/20/14.
//  Copyright (c) 2014 Xemobi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>
#import "XCCampaign.h"

@interface XCBeaconDeal :MTLModel <MTLJSONSerializing>

@property(nonatomic) NSInteger id;

@property(nonatomic)            double      dealAmount;
@property(nonatomic, strong)    NSString    *dealMessage;
@property(nonatomic)            double      dealPercentage;
@property(nonatomic)            NSInteger   rewardPoints;
@property(nonatomic, strong)    NSString    *passFileUrl;


@property(nonatomic, strong)    XCCampaign    *campaign;

@property(nonatomic, strong)    NSDate      *lastUpdated;

@end
