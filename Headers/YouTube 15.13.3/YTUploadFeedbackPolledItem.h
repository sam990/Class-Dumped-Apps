//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTUploadFeedbackID;

@interface YTUploadFeedbackPolledItem : NSObject
{
    unsigned int _pollDelayMs;
    YTUploadFeedbackID *_feedbackID;
    NSString *_continuation;
}

@property(readonly, nonatomic) unsigned int pollDelayMs; // @synthesize pollDelayMs=_pollDelayMs;
@property(readonly, nonatomic) NSString *continuation; // @synthesize continuation=_continuation;
@property(readonly, nonatomic) YTUploadFeedbackID *feedbackID; // @synthesize feedbackID=_feedbackID;
- (void).cxx_destruct;
- (id)initWithFeedbackID:(id)arg1 refreshContinuation:(id)arg2;
- (id)initWithFeedbackID:(id)arg1 continuation:(id)arg2 pollDelayMs:(unsigned int)arg3;

@end
