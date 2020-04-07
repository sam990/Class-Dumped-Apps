//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoFeaturePlayerFactory-Protocol.h"

@class BMBetamaxPlayerFactory, NSString, SPSession, SPTRequestAccounting;
@protocol BMLogger, SPTAbbaFeatureFlags, SPTAudioPlayerMediaClockService, SPTNetworkConnectivityController;

@interface SPTVideoFeaturePlayerFactoryImpl : NSObject <SPTVideoFeaturePlayerFactory>
{
    BMBetamaxPlayerFactory *_playerFactory;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <BMLogger> _logger;
    SPSession *_loginSession;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPTRequestAccounting *_requestAccounting;
    id <SPTAudioPlayerMediaClockService> _audioPlayerMediaClockService;
}

@property(nonatomic) __weak id <SPTAudioPlayerMediaClockService> audioPlayerMediaClockService; // @synthesize audioPlayerMediaClockService=_audioPlayerMediaClockService;
@property(retain, nonatomic) SPTRequestAccounting *requestAccounting; // @synthesize requestAccounting=_requestAccounting;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak SPSession *loginSession; // @synthesize loginSession=_loginSession;
@property(retain, nonatomic) id <BMLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) BMBetamaxPlayerFactory *playerFactory; // @synthesize playerFactory=_playerFactory;
- (void).cxx_destruct;
- (id)provideSubtitleFactory;
- (id)providePlaybackRequestFactory;
- (id)playerConfigurationWithPreventDisplaySleepDuringVideoPlayback:(_Bool)arg1;
- (id)loggerDataProviderForIdentifier:(id)arg1;
- (id)cacheWithOptions:(id)arg1;
- (id)defaultObserverFactoriesWithLoggerDataProvider:(id)arg1;
- (id)createVideoPlayerWithFeatureIdentifier:(id)arg1 eventObserverFactories:(id)arg2 surfaceManager:(id)arg3 videoCacheOptions:(id)arg4 withRoyaltyMediaEnabled:(_Bool)arg5 preventDisplaySleepDuringVideoPlayback:(_Bool)arg6;
- (id)createVideoPlayerWithFeatureIdentifier:(id)arg1 eventObserverFactories:(id)arg2 surface:(id)arg3 videoCacheOptions:(id)arg4 withRoyaltyMediaEnabled:(_Bool)arg5 preventDisplaySleepDuringVideoPlayback:(_Bool)arg6;
- (id)initWithPlayerFactory:(id)arg1 featureFlags:(id)arg2 logger:(id)arg3 loginSession:(id)arg4 networkConnectivityController:(id)arg5 requestAccounting:(id)arg6 audioPlayerMediaClockService:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
