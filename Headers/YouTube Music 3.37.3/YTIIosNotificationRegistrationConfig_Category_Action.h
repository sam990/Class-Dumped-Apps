//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString, YTINotificationActivationMode, YTINotificationBehaviorType;

@interface YTIIosNotificationRegistrationConfig_Category_Action : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTINotificationActivationMode *activationMode; // @dynamic activationMode;
@property(nonatomic) _Bool authenticationRequired; // @dynamic authenticationRequired;
@property(retain, nonatomic) YTINotificationBehaviorType *behaviorType; // @dynamic behaviorType;
@property(nonatomic) _Bool destructive; // @dynamic destructive;
@property(nonatomic) _Bool hasActivationMode; // @dynamic hasActivationMode;
@property(nonatomic) _Bool hasAuthenticationRequired; // @dynamic hasAuthenticationRequired;
@property(nonatomic) _Bool hasBehaviorType; // @dynamic hasBehaviorType;
@property(nonatomic) _Bool hasDestructive; // @dynamic hasDestructive;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end
