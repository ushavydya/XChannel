//
//  XCCampaignSocial.h
//  XChannelSDK
//
//  Created by Usha Vydyanathan on 5/9/16.
//  Copyright © 2016 Xemobi. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface XCCampaignSocial : MTLModel <MTLJSONSerializing>

@property(nonatomic)            NSInteger id;
@property(nonatomic)            NSInteger campaignId;
@property(nonatomic)            NSInteger socialChannelId;
@property(nonatomic)            BOOL isActive;

@end