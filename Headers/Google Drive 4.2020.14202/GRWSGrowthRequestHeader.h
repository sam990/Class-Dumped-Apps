//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GRWSClient, GRWSDeviceInfo, NSString;

@interface GRWSGrowthRequestHeader : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GRWSDeviceInfo *deviceDescription; // @dynamic deviceDescription;
@property(nonatomic) _Bool hasDeviceDescription; // @dynamic hasDeviceDescription;
@property(nonatomic) _Bool hasQueryingApplication; // @dynamic hasQueryingApplication;
@property(copy, nonatomic) NSString *pseudonymousId; // @dynamic pseudonymousId;
@property(retain, nonatomic) GRWSClient *queryingApplication; // @dynamic queryingApplication;

@end

