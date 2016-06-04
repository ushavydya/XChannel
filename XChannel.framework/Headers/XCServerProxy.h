//
//  ServerProxy.h
//   XChannelSDK
//
//  Created by Usha Vydyanathan on 8/24/15.
//  Copyright (c) 2015 Xemobi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "AFHTTPSessionManager.h"





@interface XCServerProxy : NSObject 

@property (nonatomic, weak) id delegate;



-(void) getDealsForBeaconID:(NSString *)beaconId major:(NSInteger)major minor:(NSInteger)minor
        completion:(void (^)(NSArray *objects, NSError *error))onCompletion;

-(void) getBeaconsForLongitude:(double)longitude latitude:(double)latitude
        completion:(void (^)(NSArray *objects, NSError *error))onCompletion;

-(void) addUserCampaignParticipation:(NSInteger) userId campaignId:(NSInteger) campaignId beaconId:(NSString *)beaconId major:(NSInteger)major minor:(NSInteger)minor beaconDealId:(NSInteger)beaconDealId socialChannelId:(NSInteger) socialChannelId externalId:(NSString *) externalId fbFriendCount:(NSInteger) fbFriendCount twFollowerCount:(NSInteger)twFollowerCount twFollowingCount:(NSInteger)twFollowingCount shareUrl:(NSString *) shareUrl delegate:(id) del;

-(void) createNewUser:(NSString *) deviceId deviceOS:(NSString *) deviceOS deviceType:(NSString *) deviceType  completion:(void (^)(NSInteger userId, NSError *error))onCompletion;

+(XCServerProxy *) sharedInstance ;

@end
