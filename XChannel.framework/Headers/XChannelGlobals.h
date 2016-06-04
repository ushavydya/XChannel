//
//  XChannelGlobals.h
//  XChannelSDK
//
//  Created by VYDYANATHAN KRISHNAMOORTHY on 3/13/12.
//  Copyright (c) 2012 Xemobi Inc. All rights reserved.
//
#ifndef NewPro_NewProGlobals_h
#define NewPro_NewProGlobals_h



#pragma mark General Constants

//**** Begin General constants ****/

#define NAV_BAR_BUTTON_DEFAULT_TINT [UIColor whiteColor]

//Facebook app id for SpotPlus
//#define FACEBOOK_APP_ID @"385502164802976"
//Facebook app id for citidemo
#define FACEBOOK_APP_ID @"1525348214389223"

#define kFacebookSessionStateChangedNotification @"com.facebook.SpotIt:SpotItSessionStateChangedNotification"
#define XCHANNEL_VERSION @"1.0"
//****** Begin Server specs ****//

//xchannel.xemobi.com is a pointer to app.spotpl.us
#define SERVER_ADDRESS @"http://xchannel.xemobi.com/"
//#define SERVER_ADDRESS @"http://73.162.189.205:3000/"
//#define SERVER_ADDRESS @"http://73.162.189.205:4000/"
#define SERVER_REACHABILITY_URL @"xchannel.xemobi.com"


//RestKit API call timeout to our servers and data providers (google/milo/semantics)
//In case of our servers, this value should be kept in sync with the load balancer
//timeout. 
#define RESTKIT_API_TIMEOUT 20

//Synchronous call timeouts
#define SYNC_CALL_DEFAULT_TIMEOUT 5
#define SYNC_CALL_LOW_TIMEOUT 3

//HTTP custom header keys
#define AUTH_HEADER_NODE @"Authorization"
#define TIMESTAMP_HEADER_NODE @"TimeStamp"
#define CLIENTID_HEADER_NODE @"X-ClientId"
#define CLIENT_API_KEY_HEADER_NODE @"X-ClientAPIKey"

#define SHORTENED_URL_COMPLETION_NOTIFICATION @"urlShorteningCompleted"
#define SHORTENED_URL_FAILED_NOTIFICATION @"urlShorteningFailed"
#define LOCATION_UPDATE_RECEIVED_NOTIFICATION @"locationUpdateReceived"
#define LOCATION_UPDATE_FAILED_NOTIFICATION @"locationUpdateFailed"

#define SOCIAL_CHANNEL_ID_FB 1
#define SOCIAL_CHANNEL_ID_TWITTER 2
#define SOCIAL_CHANNEL_ID_PINTEREST 3
//***** End server specs *****//
#define LOCATION_PERMISSION_PURPOSE @"Enabling location allows us to show you prices and deals on products from stores near you"

#define LOCATION_DISABLED_ALERT_MSG @"XChannel shows you products and deals in your neighborhood. Please enable location data for the best experience. You can do so by going to Settings > Privacy > Location Services"



#pragma mark Useful Macros

#pragma mark S3 specs

#define AWS_S3_SPOTIT_BASE_URL @"http://images.spotit.xemobi.s3.amazonaws.com"
#define AWS_S3_BUCKET  @"images.spotit.xemobi"
#define AWS_S3_PASSESS_BUCKET @"passess.spotit.xemobi"
#define AWS_S3_ACCESS_KEY @"AKIAIYW4S6TI6IAFYGDQ"
#define AWS_S3_SECRET_KEY @"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"




#pragma mark Logging API and Flurry Event definitions

//***** Begin Logging API and event definitions *****/
#define FLURRY_API_KEY @"NQ3XGB547YBJB73XXSJ9"

#define LOG_EVENT(eventName) [Flurry logEvent:eventName];
#define LOG_EVENT_WITH_PARAMS(eventName, params) [Flurry logEvent:eventName withParameters:params];



#define EVENT_FB_LOGIN @"FBLogin"
#define EVENT_FB_LOGOUT @"FBLogout"
#define EVENT_FB_PERM_DENIED @"FBPermisionDenied"
#define EVENT_FB_GET_FRIENDS_DATA @"FBGetFriendsData"

#define EVENT_FB_SEND @"FBSend"


#define PINTEREST_ACTIVITY @"pinterest.ShareExtension"

//***** End Logging API and event definitions *****/


#endif
