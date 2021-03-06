//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTIAccessibilitySupportedDatas;

@interface YTIUnseenContentCountRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(nonatomic) int contentCount; // @dynamic contentCount;
@property(nonatomic) long long countTimestamp; // @dynamic countTimestamp;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasContentCount; // @dynamic hasContentCount;
@property(nonatomic) _Bool hasCountTimestamp; // @dynamic hasCountTimestamp;
@property(nonatomic) _Bool hasMaxDisplayCount; // @dynamic hasMaxDisplayCount;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) int maxDisplayCount; // @dynamic maxDisplayCount;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

