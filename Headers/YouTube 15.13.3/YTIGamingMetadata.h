//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray;

@interface YTIGamingMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool disableAllNotificationTypes; // @dynamic disableAllNotificationTypes;
@property(retain, nonatomic) GPBEnumArray *disabledNotificationTypesArray; // @dynamic disabledNotificationTypesArray;
@property(readonly, nonatomic) unsigned long long disabledNotificationTypesArray_Count; // @dynamic disabledNotificationTypesArray_Count;
@property(retain, nonatomic) GPBEnumArray *enabledNotificationTypesArray; // @dynamic enabledNotificationTypesArray;
@property(readonly, nonatomic) unsigned long long enabledNotificationTypesArray_Count; // @dynamic enabledNotificationTypesArray_Count;
@property(nonatomic) _Bool hasDisableAllNotificationTypes; // @dynamic hasDisableAllNotificationTypes;

@end
