//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIVideoAdTracking;

@interface YTISurveyQuestionCommon : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPings; // @dynamic hasPings;
@property(nonatomic) _Bool hasSkipSeconds; // @dynamic hasSkipSeconds;
@property(nonatomic) _Bool hasTimeoutSeconds; // @dynamic hasTimeoutSeconds;
@property(retain, nonatomic) YTIVideoAdTracking *pings; // @dynamic pings;
@property(retain, nonatomic) NSMutableArray *responsePingsArray; // @dynamic responsePingsArray;
@property(readonly, nonatomic) unsigned long long responsePingsArray_Count; // @dynamic responsePingsArray_Count;
@property(nonatomic) unsigned int skipSeconds; // @dynamic skipSeconds;
@property(nonatomic) unsigned int timeoutSeconds; // @dynamic timeoutSeconds;

@end
