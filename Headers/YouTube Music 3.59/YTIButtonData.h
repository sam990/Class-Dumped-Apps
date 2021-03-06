//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ELMPBCommand, NSData, NSString, YTILoggingDirectives;

@interface YTIButtonData : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *buttonAccessibilityLabel; // @dynamic buttonAccessibilityLabel;
@property(retain, nonatomic) ELMPBCommand *buttonCommand; // @dynamic buttonCommand;
@property(copy, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(nonatomic) _Bool hasButtonAccessibilityLabel; // @dynamic hasButtonAccessibilityLabel;
@property(nonatomic) _Bool hasButtonCommand; // @dynamic hasButtonCommand;
@property(nonatomic) _Bool hasButtonText; // @dynamic hasButtonText;
@property(nonatomic) _Bool hasIsInAppPurchase; // @dynamic hasIsInAppPurchase;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool isInAppPurchase; // @dynamic isInAppPurchase;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

