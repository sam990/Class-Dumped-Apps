//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, MLPlayerStickySettings, YTPlayerPrebufferConfig, YTPlayerPrefetchService, YTPlayerTransition;
@protocol YTStopwatch;

@interface YTAutoplayPrefetchController : NSObject
{
    YTPlayerTransition *_autoplayTransition;
    YTPlayerPrefetchService *_prefetchService;
    MLPlayerStickySettings *_mediaStickySettings;
    unsigned long long _prefetchAttempts;
    id <YTStopwatch> _stopwatchSinceLastFailure;
    GIMMe *_gimme;
    unsigned long long _maxRetries;
    double _minWallTimeBetweenRetries;
    YTPlayerPrebufferConfig *_prebufferConfig;
}

@property(retain, nonatomic) YTPlayerPrebufferConfig *prebufferConfig; // @synthesize prebufferConfig=_prebufferConfig;
@property(nonatomic) double minWallTimeBetweenRetries; // @synthesize minWallTimeBetweenRetries=_minWallTimeBetweenRetries;
@property(nonatomic) unsigned long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)addStopWatchFailureBlockToPrefetchTask:(id)arg1;
- (void)prefetchWithTimeToVideoEnd:(double)arg1;
- (id)playbackPrefetchHintConfigForTransition:(id)arg1;
- (_Bool)shouldPrefetchWithTimeToVideoEnd:(double)arg1;
- (void)setMediaStickySettings:(id)arg1;
- (void)currentContentVideoMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)setAutoplayTransition:(id)arg1;
- (id)init;

@end
