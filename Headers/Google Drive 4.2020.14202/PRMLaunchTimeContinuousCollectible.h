//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/PRMContinuousCollectible.h>

@class PRMLaunchTimeInstantCollectible;

@interface PRMLaunchTimeContinuousCollectible : PRMContinuousCollectible
{
    _Bool _scheduled;
    _Bool _started;
    PRMLaunchTimeInstantCollectible *_launchTimeInstantCollectible;
}

- (void).cxx_destruct;
- (void)collectOnScheduleEventContext:(id)arg1;
- (id)metricsSystemHealthMessageWithEventContext:(id)arg1;
- (id)metricsProperties;
- (void)stopCollecting;
- (void)startCollecting;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end

