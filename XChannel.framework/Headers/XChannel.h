//
//  XChannel.h
//  XChannelSDK
//
//  Created by Usha Vydyanathan on 8/25/15.
//  Copyright (c) 2015 Xemobi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <UIKit/UIApplication.h>
#import <PassKit/PassKit.h>
#import "XCBeacon.h"
#import "XCBeaconDeal.h"

typedef NS_ENUM(NSUInteger , XCSocialChannel) {
   XCSocialChannelIdNone,
   XCSocialChannelIdFB ,
   XCSocialChannelIdTwitter ,
   XCSocialChannelIdPinterest
};


@interface XChannel : NSObject


+(void) setAPIKey:(NSString *) apiKey secret:(NSString *) secret;
+(void) setDeviceId : (NSString *) deviceId;

+(void) getBeaconsForLongitude:(double)longitude latitude:(double)latitude
                    completion:(void (^)(NSArray *beacons, NSError *error))onCompletion;

+(void) getDealsForBeacon:(CLBeacon *)beacon region:(CLBeaconRegion *)region
                 completion:(void (^)( NSArray *objects, NSError *error))onCompletion;

+(void) addUserCampaignParticipation:(CLBeacon *) beacon beaconDeal:(XCBeaconDeal *) beaconDeal socialChannelId :(XCSocialChannel) socialChannelId socialChannelAccountHandle: (NSString *) socialChannelAccountHandle;

+(void) getCouponForPassbook: (XCBeaconDeal *) beaconDeal completion:(void (^)( PKPass *pass, NSError *error))onCompletion;

+ (NSString *) getApiKey;
+ (NSString *) getSecret;
+ (NSArray *) getStopBeaconRegionList;

@end
