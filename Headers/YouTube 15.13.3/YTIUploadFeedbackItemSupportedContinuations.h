//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTITimedContinuationData, YTIUploadFeedbackRefreshContinuation;

@interface YTIUploadFeedbackItemSupportedContinuations : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTimedContinuationData; // @dynamic hasTimedContinuationData;
@property(nonatomic) _Bool hasUploadFeedbackRefreshContinuation; // @dynamic hasUploadFeedbackRefreshContinuation;
@property(retain, nonatomic) YTITimedContinuationData *timedContinuationData; // @dynamic timedContinuationData;
@property(retain, nonatomic) YTIUploadFeedbackRefreshContinuation *uploadFeedbackRefreshContinuation; // @dynamic uploadFeedbackRefreshContinuation;

@end

