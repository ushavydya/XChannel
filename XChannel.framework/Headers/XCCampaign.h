//
//  XCCampaign.h
//  XChannelSDK
//
//  Created by Vydyanathan Krishnamoorthy on 11/18/14.
//  Copyright (c) 2014 Xemobi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface XCCampaign : MTLModel <MTLJSONSerializing>

@property(nonatomic)            NSInteger id;
@property(nonatomic, strong)    NSString *contentUrl;
@property(nonatomic, strong)    NSString *clickThroughUrl;
@property(nonatomic, strong)    NSString *hashTag;
@property(nonatomic)            double capAmount;
@property(nonatomic, strong)    NSDate *startDate;
@property(nonatomic, strong)    NSDate *endDate;
@property(nonatomic)            NSInteger clientId;
@property(nonatomic)            BOOL isActive;
@property(nonatomic, strong)    NSArray *campaignSocialChannels;
@property(nonatomic, strong)    NSDate   *lastUpdated;
@property(nonatomic)            NSInteger campaignTypeId;

-(BOOL) isCampaignTypeSocial;

@end
