//
//  XChannelConfiguration.h
//


#import <Foundation/Foundation.h>
#import "Configuration.h"

@interface XCConfiguration : Configuration {

}

+(NSString *)lookupConfigByKey:(NSString *)key;

//Merchant ID's that are approved from Google
+(NSString *)get_APPROVED_GOOGLE_MIDS;
//Do we notify on FB even if push succeeds?
+(int) get_DUAL_NOTIFICATION_ENABLED;
//How many times the user uses the app before being prompted for rating?
+(float)get_USE_DELAY_FOR_RATING_PROMPT;
//How many days of usage before prompting for rating?
+(float)get_USE_FREQUENCY_FOR_RATING_PROMPT;
+(NSArray *)get_EXCLUDED_SHARING_ITEMS_ARRAY;
+(NSString *) get_REVIEW_URL;
+(NSString *) get_PRIVACY_POLICY_URL;
+(NSString *) get_TERMS_OF_USE_URL;
+(int) get_CAMERA_ALERT_TIME;
+(NSString *)get_PLACES_PROXY;
+(NSString *)get_MILO_NO_IMAGE_FILE_NAME_URL;
//Used to display store data as well as to decide local spots on the Explore view
+(long)get_SEARCH_RADIUS_IN_MILES;
+(void)set_SEARCH_RADIUS_IN_MILES:(int)searchRadius;
+(NSString *)get_FOURSQUARE_SEARCH_STRING;
+(NSString *)get_FACEBOOK_SEARCH_STRING;
+(NSString *)get_FACTUAL_SEARCH_STRING;
+(BOOL)get_IS_DATA_FEED_ENABLED:(NSString *)sourceName;
+(NSString *)get_ITUNES_APP_ID;
+(NSArray *)get_BEACON_UUIDS;
+(NSString *)get_CJ_API_TOKEN;
+(NSInteger)get_BEACON_NOTIFICATION_INTERVAL;
+(NSInteger)get_CLIENT_NOTIFICATION_INTERVAL;

@end
