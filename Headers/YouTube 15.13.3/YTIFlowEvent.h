//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFlowEventMetadata, YTIFlowEventType;

@interface YTIFlowEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int flowEventStatus; // @dynamic flowEventStatus;
@property(retain, nonatomic) YTIFlowEventType *flowEventType; // @dynamic flowEventType;
@property(retain, nonatomic) YTIFlowEventMetadata *flowMetadata; // @dynamic flowMetadata;
@property(copy, nonatomic) NSString *flowNonce; // @dynamic flowNonce;
@property(nonatomic) int flowType; // @dynamic flowType;
@property(nonatomic) _Bool hasFlowEventStatus; // @dynamic hasFlowEventStatus;
@property(nonatomic) _Bool hasFlowEventType; // @dynamic hasFlowEventType;
@property(nonatomic) _Bool hasFlowMetadata; // @dynamic hasFlowMetadata;
@property(nonatomic) _Bool hasFlowNonce; // @dynamic hasFlowNonce;
@property(nonatomic) _Bool hasFlowType; // @dynamic hasFlowType;

@end
