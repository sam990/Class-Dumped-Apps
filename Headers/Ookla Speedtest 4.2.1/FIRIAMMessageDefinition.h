//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABTExperimentPayload, FIRIAMMessageRenderData, NSArray, NSDictionary;

@interface FIRIAMMessageDefinition : NSObject
{
    _Bool _isTestMessage;
    FIRIAMMessageRenderData *_renderData;
    double _startTime;
    double _endTime;
    NSArray *_renderTriggers;
    NSDictionary *_appData;
    ABTExperimentPayload *_experimentPayload;
}

@property(readonly, nonatomic) ABTExperimentPayload *experimentPayload; // @synthesize experimentPayload=_experimentPayload;
@property(readonly, nonatomic) NSDictionary *appData; // @synthesize appData=_appData;
@property(readonly, nonatomic) _Bool isTestMessage; // @synthesize isTestMessage=_isTestMessage;
@property(readonly, nonatomic) NSArray *renderTriggers; // @synthesize renderTriggers=_renderTriggers;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) FIRIAMMessageRenderData *renderData; // @synthesize renderData=_renderData;
- (void).cxx_destruct;
- (_Bool)messageHasStarted;
- (_Bool)messageRenderedOnAnalyticsEvent:(id)arg1;
- (_Bool)messageRenderedOnTrigger:(long long)arg1;
- (_Bool)messageHasExpired;
- (id)initTestMessageWithRenderData:(id)arg1 experimentPayload:(id)arg2;
- (id)initWithRenderData:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 triggerDefinition:(id)arg4;
- (id)initWithRenderData:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 triggerDefinition:(id)arg4 appData:(id)arg5 experimentPayload:(id)arg6 isTestMessage:(_Bool)arg7;

@end

