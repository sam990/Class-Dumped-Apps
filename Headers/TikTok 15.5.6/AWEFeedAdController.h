//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeResponseModel, NSMutableSet, NSTimer, YYTextWeakProxy;
@protocol AWEHttpTask;

@interface AWEFeedAdController : NSObject
{
    CDUnknownBlockType _contextProvider;
    CDUnknownBlockType _didReload;
    double _timeIntervalLowerBoundForLongTimeNoAd;
    double _timeIntervalUpperBoundForTooSoonToShowAnotherAd;
    double _timeIntervalLowerBoundForNextRequest;
    long long _currentAwemeIndex;
    double _lastAdReadTime;
    double _lastRequestTime;
    NSTimer *_adReadTimer;
    NSTimer *_requestTimer;
    YYTextWeakProxy *_timerProxy;
    id <AWEHttpTask> _networkTask;
    long long _backmostReadIndex;
    NSMutableSet *_awemeIDsRequestedOn;
    AWEAwemeResponseModel *_recentFeedResponse;
}

+ (void)preprocessAwemes:(id)arg1;
+ (void)preprocessAweme:(id)arg1;
+ (void)awemeReceived:(id)arg1;
@property(retain, nonatomic) AWEAwemeResponseModel *recentFeedResponse; // @synthesize recentFeedResponse=_recentFeedResponse;
@property(retain, nonatomic) NSMutableSet *awemeIDsRequestedOn; // @synthesize awemeIDsRequestedOn=_awemeIDsRequestedOn;
@property(nonatomic) long long backmostReadIndex; // @synthesize backmostReadIndex=_backmostReadIndex;
@property(retain, nonatomic) id <AWEHttpTask> networkTask; // @synthesize networkTask=_networkTask;
@property(retain, nonatomic) YYTextWeakProxy *timerProxy; // @synthesize timerProxy=_timerProxy;
@property(retain, nonatomic) NSTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) NSTimer *adReadTimer; // @synthesize adReadTimer=_adReadTimer;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) double lastAdReadTime; // @synthesize lastAdReadTime=_lastAdReadTime;
@property(nonatomic) long long currentAwemeIndex; // @synthesize currentAwemeIndex=_currentAwemeIndex;
@property(readonly, nonatomic) double timeIntervalLowerBoundForNextRequest; // @synthesize timeIntervalLowerBoundForNextRequest=_timeIntervalLowerBoundForNextRequest;
@property(readonly, nonatomic) double timeIntervalUpperBoundForTooSoonToShowAnotherAd; // @synthesize timeIntervalUpperBoundForTooSoonToShowAnotherAd=_timeIntervalUpperBoundForTooSoonToShowAnotherAd;
@property(readonly, nonatomic) double timeIntervalLowerBoundForLongTimeNoAd; // @synthesize timeIntervalLowerBoundForLongTimeNoAd=_timeIntervalLowerBoundForLongTimeNoAd;
@property(copy, nonatomic) CDUnknownBlockType didReload; // @synthesize didReload=_didReload;
@property(copy, nonatomic) CDUnknownBlockType contextProvider; // @synthesize contextProvider=_contextProvider;
- (void).cxx_destruct;
- (void)trackAdReloadWithRemovedAwemes:(id)arg1 insertedAwemes:(id)arg2 success:(_Bool)arg3 info:(id)arg4 isNetowrkError:(_Bool)arg5 requestID:(id)arg6;
- (void)trackAdDeletionWithRemovedAwemes:(id)arg1 insertedAwemes:(id)arg2;
- (void)reloadWithContext:(id)arg1;
- (void)tryReloadWithContext:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)setFeedResponse:(id)arg1;
- (void)updateRequestTime;
- (void)updateAdReadTime;
- (void)_updateCurrentAwemeIndex:(long long)arg1;
- (void)updateCurrentAwemeIndex:(long long)arg1;
- (void)reset;
- (id)init;

@end

