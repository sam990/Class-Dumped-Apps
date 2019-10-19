//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXPlaybackDescriptorProvider-Protocol.h"
#import "MDXSessionObserver-Protocol.h"
#import "YTMAutomixControllerObserverProtocol-Protocol.h"
#import "YTMMusicAppMetadataObserverProtocol-Protocol.h"
#import "YTMOfflinePlaylistMonitorDelegate-Protocol.h"

@class GIMMe, MDXPlaybackDescriptor, MDXSessionManager, NSMutableArray, NSNumber, NSString, YTICommand, YTIPlaylistPanelRenderer, YTIPlaylistPanelVideoRenderer, YTMAutomixController, YTMMusicAppMetadata, YTMMusicQueueItem, YTMObserverManager, YTMOfflinePlaylistMonitor, YTMPlaylistContinuationsController, YTMRestorableQueueState, YTMSettings, YTPlaybackLockScreenController;
@protocol YTEventLogger, YTResponder;

@interface YTMQueueController : NSObject <MDXPlaybackDescriptorProvider, YTMAutomixControllerObserverProtocol, YTMMusicAppMetadataObserverProtocol, YTMOfflinePlaylistMonitorDelegate, MDXSessionObserver>
{
    YTPlaybackLockScreenController *_lockScreenController;
    YTMObserverManager *_observerManager;
    YTMOfflinePlaylistMonitor *_offlinePlaylistMonitor;
    YTMPlaylistContinuationsController *_continuationsController;
    unsigned long long _numPrefetchedContinuations;
    NSString *_currentPlaylistID;
    NSString *_playlistDescription;
    double _nowPlayingVideoMediaTime;
    unsigned long long _loopMode;
    NSMutableArray *_queueItems;
    NSMutableArray *_hiddenLookaheadQueueItems;
    YTMAutomixController *_automixController;
    _Bool _autoplayOnLoad;
    YTICommand *_currentNavEndpoint;
    MDXSessionManager *_MDXSessionManager;
    NSNumber *_mostRecentlyReportedPlaybackQueueCount;
    NSNumber *_mostRecentlyReportedPlaybackQueueIndex;
    long long _consecutiveFailedPlaybacks;
    id <YTEventLogger> _eventLogger;
    YTMSettings *_settings;
    YTMMusicAppMetadata *_musicAppMetadata;
    long long _mdxSessionAutoplayMode;
    _Bool _autoExtendPlaybackQueueEnabled;
    _Bool _trackingParamsOverrideDisabled;
    _Bool _initialUserContentModeATVPreferred;
    _Bool _disableNavEndpointDispatchDelay;
    GIMMe *_gimme;
    id <YTResponder> _parentResponder;
    YTIPlaylistPanelRenderer *_playlistPanel;
    unsigned long long _nowPlayingIndex;
    unsigned long long _userContentMode;
}

+ (unsigned long long)defaultNumItemsToLookAheadForIsIPad:(_Bool)arg1 isLandscape:(_Bool)arg2;
+ (unsigned long long)numItemsToRevealForIsRadioPlaylist:(_Bool)arg1 isIPad:(_Bool)arg2 isLandscape:(_Bool)arg3 numItemsToShow:(unsigned long long)arg4 nowPlayingIndex:(unsigned long long)arg5 numItemsInPlaylist:(unsigned long long)arg6;
@property(nonatomic, getter=shouldDisableNavEndpointDispatchDelay) _Bool disableNavEndpointDispatchDelay; // @synthesize disableNavEndpointDispatchDelay=_disableNavEndpointDispatchDelay;
@property(nonatomic) unsigned long long loopMode; // @synthesize loopMode=_loopMode;
@property(readonly, nonatomic) unsigned long long userContentMode; // @synthesize userContentMode=_userContentMode;
@property(nonatomic) _Bool initialUserContentModeATVPreferred; // @synthesize initialUserContentModeATVPreferred=_initialUserContentModeATVPreferred;
@property(nonatomic) unsigned long long nowPlayingIndex; // @synthesize nowPlayingIndex=_nowPlayingIndex;
@property(readonly, nonatomic) YTIPlaylistPanelRenderer *playlistPanel; // @synthesize playlistPanel=_playlistPanel;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool trackingParamsOverrideDisabled; // @synthesize trackingParamsOverrideDisabled=_trackingParamsOverrideDisabled;
@property(readonly, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(nonatomic, getter=isAutoExtendPlaybackQueueEnabled) _Bool autoExtendPlaybackQueueEnabled; // @synthesize autoExtendPlaybackQueueEnabled=_autoExtendPlaybackQueueEnabled;
- (void).cxx_destruct;
- (id)offlinePlaylistMonitor;
- (void)orientationDidChange:(id)arg1;
- (void)handleAutoplayForUnplayableVideoID:(id)arg1;
- (void)handleQueueModification:(id)arg1;
- (_Bool)canMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)appendQueueItem:(id)arg1;
- (void)appendVideo:(id)arg1;
- (void)removeVideoAtIndex:(unsigned long long)arg1;
- (void)replaceVideoAtIndex:(unsigned long long)arg1 withVideo:(id)arg2;
- (long long)numItemsToReveal;
- (void)revealMoreItemsIfNeeded;
- (void)processPreviousContinuationResponse:(id)arg1;
- (void)fetchPreviousItems;
- (void)processNextContinuationResponse:(id)arg1;
- (void)fetchNextItems;
- (void)updateMDXPlaybackOrder;
- (void)updateLockScreenTrackIndexAndCount;
- (void)updateLockScreen;
- (_Bool)isCurrentNavEndpointAutoplay;
- (void)actuallyDispatchNavigationEndpoint:(id)arg1;
- (void)dispatchNavigationEndpoint:(id)arg1;
- (id)queueItemAtIndex:(unsigned long long)arg1;
- (id)videoForUserContentModeAtIndex:(unsigned long long)arg1;
- (id)videoAtIndex:(unsigned long long)arg1;
- (unsigned long long)addQueueItems:(id)arg1 numItemsToReveal:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)createAutomixControllerForCommand:(id)arg1;
- (void)createAutomixControllerFromAutomixPreviewVideoRenderer:(id)arg1;
- (void)addItemsFromPlaylistPanel:(id)arg1 response:(id)arg2 atIndex:(unsigned long long)arg3 notifyObservers:(_Bool)arg4;
- (void)insertPlaylistPanelVideoRenderers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replacePlaylistFromPlaylistPanel:(id)arg1;
- (id)upcomingMusicQueueItemsEnumeratorWithStartIndex:(unsigned long long)arg1;
- (id)upcomingMusicQueueItemsEnumerator;
- (id)autoPlayTransitionForIndex:(unsigned long long)arg1;
- (id)upcomingPlayerTransition;
- (id)upcomingAutoplayTransitionsEnumeratorWithStartIndex:(unsigned long long)arg1;
- (id)upcomingAutoplayTransitionsEnumerator;
- (void)removeVideoID:(id)arg1;
- (unsigned long long)nextVideoIndexAfterIndex:(unsigned long long)arg1 withAutoplay:(_Bool)arg2;
- (unsigned long long)nextVideoIndexWithAutoplay:(_Bool)arg1;
- (void)logGenericEventForUserContentMode:(unsigned long long)arg1 userRequested:(_Bool)arg2;
- (void)updateUserContentModeForVideoAtIndex:(unsigned long long)arg1 forceATVPreferred:(_Bool)arg2;
- (id)navEndpointAtIndex:(unsigned long long)arg1 withAutoplay:(_Bool)arg2;
- (id)nextNavEndpointWithAutoplay:(_Bool)arg1;
- (void)musicAppMetadataDidChange:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)offlinePlaylistMonitor:(id)arg1 didUpdateVideoID:(id)arg2 playlistIDs:(id)arg3 renderer:(id)arg4;
- (void)offlinePlaylistMonitor:(id)arg1 didRemoveVideoID:(id)arg2 fromPlaylistID:(id)arg3;
- (void)offlinePlaylistMonitor:(id)arg1 didRemoveVideoID:(id)arg2;
- (unsigned long long)indexOfVideoWithSetVideoID:(id)arg1 orVideoID:(id)arg2;
- (id)indicesOfVideoID:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)contentVideoMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (_Bool)hasLoopMode;
- (_Bool)hasShuffleMode;
- (void)updateShuffleOrder;
- (void)playPrevious;
- (void)advanceToNextWithAutoplay:(_Bool)arg1 isPlaybackControllerInternalTransition:(_Bool)arg2 unplayableVideoID:(id)arg3;
- (void)playNextWithAutoplay:(_Bool)arg1 unplayableVideoID:(id)arg2;
- (id)nextVideoWithAutoplay:(_Bool)arg1;
- (_Bool)hasPreviousVideo;
- (_Bool)hasNextVideo;
- (_Bool)hasAutoplayVideo;
@property(readonly, nonatomic) YTIPlaylistPanelVideoRenderer *nowPlayingVideo;
@property(readonly, nonatomic) _Bool isMDXRemoteQueue;
@property(readonly, nonatomic) unsigned long long automixItemCount;
@property(readonly, nonatomic, getter=isAutomixSupported) _Bool automixSupported;
@property(readonly, nonatomic) _Bool isLoopEnabled;
@property(readonly, nonatomic) unsigned long long indexOffset;
@property(readonly, nonatomic) _Bool isOfflinePlaylist;
@property(readonly, nonatomic) _Bool isRadioPlaylist;
@property(readonly, nonatomic, getter=isPlaylistPanelLoaded) _Bool playlistPanelLoaded;
- (void)automixController:(id)arg1 didRemoveRenderersAtIndexes:(id)arg2;
- (void)automixController:(id)arg1 didInsertRenderersAtIndexes:(id)arg2 response:(id)arg3;
- (void)automixController:(id)arg1 didEncounterError:(id)arg2;
@property(readonly, nonatomic) MDXPlaybackDescriptor *playbackDescriptor;
- (void)MDXSession:(id)arg1 autoplayModeDidChange:(long long)arg2;
- (void)playbackControllerDidFailWithError:(id)arg1;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(id)arg1;
- (void)prefetchContinuations;
- (void)removeQueueControllerObserver:(id)arg1;
- (void)addQueueControllerObserver:(id)arg1;
- (void)playItemAtIndex:(unsigned long long)arg1 autoPlaySource:(int)arg2 isPlaybackControllerInternalTransition:(_Bool)arg3 atStartTime:(double)arg4;
- (void)playItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousVideoIndex;
- (unsigned long long)nextVideoIndex;
@property(readonly, nonatomic) YTMMusicQueueItem *nowPlayingMusicQueueItem;
- (void)triggerPendingAutoplay;
- (void)toggleUserContentModeAtCurrentPlaybackTime:(double)arg1;
- (void)loadPlaylistPanel:(id)arg1;
@property(readonly, nonatomic) _Bool consecutiveFailedPlaybacksBelowAcceptanceThreshold;
- (_Bool)shouldAutoplayForFailedPlayback;
- (id)queueItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long queueCount;
@property(readonly, nonatomic) YTMRestorableQueueState *restorableQueueState;
- (void)commonInit;
- (id)initWithRestorableQueueState:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
