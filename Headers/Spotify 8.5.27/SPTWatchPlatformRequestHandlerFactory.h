//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHermesController, SPTWatchConnectivityDataLoader, SPTWatchConnectivitySession, SPTWatchPlatformTestManager;
@protocol GLUEImageLoader, SPTCollectionPlatform, SPTExternalIntegrationContentController, SPTExternalIntegrationPlaybackController, SPTGaiaConnectAPI, SPTLogCenter, SPTPodcastSpeedControlManager, SPTUICompletionNotifier, SPTVolumeAPI, SPTWatchConnectivityMessageHandlerRegistry;

@interface SPTWatchPlatformRequestHandlerFactory : NSObject
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTGaiaConnectAPI> _connectManager;
    id <GLUEImageLoader> _glueImageLoader;
    SPTWatchConnectivitySession *_watchConnectivitySession;
    id <SPTVolumeAPI> _volumeController;
    id <SPTPodcastSpeedControlManager> _podcastSpeedControlManager;
    id <SPTLogCenter> _logCenter;
    id <SPTExternalIntegrationContentController> _contentController;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
    id <SPTWatchConnectivityMessageHandlerRegistry> _messageHandlerRegistry;
    SPTWatchPlatformTestManager *_testManager;
    SPTHermesController *_hermesController;
}

@property(readonly, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
@property(readonly, nonatomic) __weak SPTWatchPlatformTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityMessageHandlerRegistry> messageHandlerRegistry; // @synthesize messageHandlerRegistry=_messageHandlerRegistry;
@property(readonly, nonatomic) __weak id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentController> contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) __weak id <SPTPodcastSpeedControlManager> podcastSpeedControlManager; // @synthesize podcastSpeedControlManager=_podcastSpeedControlManager;
@property(readonly, nonatomic) id <SPTVolumeAPI> volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) __weak SPTWatchConnectivitySession *watchConnectivitySession; // @synthesize watchConnectivitySession=_watchConnectivitySession;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) __weak id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)createRequestHandlers;
- (id)initWithDataLoader:(id)arg1 collectionPlatform:(id)arg2 playbackController:(id)arg3 connectManager:(id)arg4 glueImageLoader:(id)arg5 watchConnectivitySession:(id)arg6 volumeController:(id)arg7 podcastSpeedControlManager:(id)arg8 logCenter:(id)arg9 contentController:(id)arg10 UICompletionNotifier:(id)arg11 messageHandlerRegistry:(id)arg12 testManager:(id)arg13 hermesController:(id)arg14;

@end
