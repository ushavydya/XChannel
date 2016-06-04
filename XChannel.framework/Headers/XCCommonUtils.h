//
//  CommonUtils.h
//  XChannelSDK
//
//  Created by Vydyanathan Krishnamoorthy on 12/17/12.
//  Copyright (c) 2012 Xemobi Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface XCCommonUtils : NSObject


+(NSString *) formatPhoneNumber :(NSString *)phoneNumber;
+(NSString *) generateRequestToken : (NSString *) stringForSignature;
+(NSString *) getTimeStamp;
+(NSString *) getClientId;
+(void) setRequestHeader : (NSMutableURLRequest *) request dataStr:(NSString *) dataStr;
+ (NSString *) shortenUrl : (NSString *) url;
+(NSString *) getDateStringFromDate:(NSDate *)aDate;

//Is aDate within "numDays" from todays date in the past?
+(BOOL) isDate:(NSDate *)aDate withinDays:(NSInteger)numDays;
+(BOOL) urlIsValid:(NSString *)candidate;
+ (NSDateFormatter *)dateFormatter;
@end
