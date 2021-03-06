//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectInboxViewModelDataCollecting-Protocol.h>

@class IGDirectCache, IGDirectInboxConfig, IGDirectInboxQPCache, IGDirectInboxService, IGDirectInboxSubscriptionService, IGDirectInboxViewModelDataCollectionSubscriptionBuilder, IGDirectPendingInboxService, IGDirectTimeThrottler, IGDirectVisualMessageReplayService, IGDirectVisualMessageViewerSessionPlaybackTracker, IGPostCreationManager, IGPresenceManager, IGReelSeenStateStore, IGReelStore, IGSearchBarConfig, IGUserSession, IGVideoCallStatusStore, NSString, THStatusService;
@protocol IGDirectDataSubscriptionToken, IGDirectInboxCellSelectStateCoordinating, IGDirectInboxViewModelDataCollectingDelegate, IGDirectTypingStatusReceiving, IGUserLauncherSetProviding;

@interface IGDirectInboxViewModelSubscriptionDataCollector : NSObject <IGDirectInboxViewModelDataCollecting>
{
    id <IGDirectInboxViewModelDataCollectingDelegate> _delegate;
    id <IGDirectDataSubscriptionToken> _subscriptionToken;
    IGUserSession *_userSession;
    IGDirectInboxConfig *_inboxConfig;
    IGDirectInboxService *_inboxService;
    IGDirectPendingInboxService *_pendingInboxService;
    id <IGDirectTypingStatusReceiving> _typingStatusReceiver;
    IGDirectCache *_directCache;
    IGPresenceManager *_presenceManager;
    THStatusService *_threadsAppStatusService;
    IGSearchBarConfig *_searchBarConfig;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    IGDirectVisualMessageReplayService *_visualMessageReplayService;
    IGDirectInboxQPCache *_qpCache;
    id <IGDirectInboxCellSelectStateCoordinating> _cellSelectStateCoordinator;
    IGVideoCallStatusStore *_videoCallStatusStore;
    IGReelStore *_reelStore;
    IGReelSeenStateStore *_seenStateStore;
    IGDirectTimeThrottler *_throttler;
    IGPostCreationManager *_postCreationManager;
    IGDirectVisualMessageViewerSessionPlaybackTracker *_visualMessagePlaybackTracker;
    IGDirectInboxSubscriptionService *_inboxSubscriptionService;
    IGDirectInboxViewModelDataCollectionSubscriptionBuilder *_subscriptionBuilder;
}

- (void).cxx_destruct;
- (void)_errorOccured:(id)arg1;
- (void)_subscriptionUpdated:(id)arg1;
- (void)stop;
- (void)startWithFolder:(id)arg1 filterType:(long long)arg2 viewContext:(id)arg3 delegate:(id)arg4;
- (id)initWithUserSession:(id)arg1 inboxConfig:(id)arg2 inboxService:(id)arg3 pendingInboxService:(id)arg4 typingStatusReceiver:(id)arg5 presenceManager:(id)arg6 threadsAppStatusService:(id)arg7 searchBarConfig:(id)arg8 directCache:(id)arg9 qpCache:(id)arg10 cellSelectStateCoordinator:(id)arg11 experimentProvider:(id)arg12 launcherSetProvider:(id)arg13 videoCallStatusStore:(id)arg14 inboxSubscriptionService:(id)arg15 visualMessageReplayService:(id)arg16 visualMessagePlaybackTracker:(id)arg17 reelStore:(id)arg18 seenStateStore:(id)arg19 postCreationManager:(id)arg20 viewModelGenerator:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

