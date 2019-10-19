//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCGalleryLagunaWifiControllerEventListener-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, SCDataObjectContext, SCGalleryLagunaMetadataProvider, SCQueuePerformer, SCUserSession;
@protocol OS_dispatch_semaphore, SCGalleryLagunaContentDataSourceDelegate, SCUserPreferenceTimeProvider;

@interface SCGalleryLagunaContentDataSource : NSObject <SCCloudSyncStatusListener, SCSpectaclesEventListener, SCTraceEnabled, SCGalleryLagunaWifiControllerEventListener>
{
    _Bool _isSetup;
    _Bool _isSetupOnCloudSyncReady;
    NSArray *_entries;
    SCUserSession *_userSession;
    SCDataObjectContext *_dataObjectContext;
    id <SCUserPreferenceTimeProvider> _userPreferenceTimeProvider;
    NSDictionary *_contentsForImportProcessing;
    NSDictionary *_contentMap;
    NSDictionary *_contentMapToEntryId;
    NSMutableDictionary *_mediaIdToSnapId;
    NSObject<OS_dispatch_semaphore> *_contentForSnapSemaphore;
    NSDictionary *_contentForSnap;
    NSMutableDictionary *_contentAnnouncer;
    SCQueuePerformer *_performer;
    NSMutableSet *_hasSyncedContent;
    NSMutableDictionary *_observeGraph;
    NSMutableDictionary *_entryMap;
    NSMutableDictionary *_entryObserveContext;
    SCGalleryLagunaMetadataProvider *_lagunaMetadataProvider;
    NSSet *_latestTransferredContentIds;
    unsigned long long _cloudSyncStatus;
    NSMutableDictionary *_contentIdToDateAddedMap;
    NSMutableDictionary *_contentIdToSnapPlaceholderMap;
    _Bool _isFixingMixedSnaps;
    NSArray *_entryPlaceholders;
    id <SCGalleryLagunaContentDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryLagunaContentDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *entryPlaceholders; // @synthesize entryPlaceholders=_entryPlaceholders;
- (void).cxx_destruct;
- (void)_initializeLagunaMetadataProviderIfNeeded;
- (id)_lagunaMetadataProvider;
- (void)_logDirectSnapCreate:(id)arg1;
- (void)_appendSpectaclesContent:(id)arg1 toDayStoryId:(id)arg2;
- (void)_performObserveCallbacksForChangedEntryIds:(id)arg1 changedKeys:(id)arg2;
- (void)_performObserveCallbacksForEntry:(id)arg1 entryId:(id)arg2 changedKeys:(id)arg3;
- (void)_observeDataContextChangesForEntry:(id)arg1;
- (void)_handleContentUpdate:(id)arg1 contentComponent:(unsigned long long)arg2 updateType:(unsigned long long)arg3;
- (id)latestTransferredContentIds;
- (void)_updateLatestTransferredContentIds;
- (void)markCanonicalMediaSynced:(id)arg1;
- (void)galleryLagunaWifiControllerDidUpdateState:(long long)arg1 device:(id)arg2;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesDeviceDidUpdateContentList:(id)arg1;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (id)_galleryDataObjectContext;
- (void)_fixMixedMultisnapIfNeeded;
- (_Bool)_mixWithLagunaContentIfNeeded;
- (void)_markSyncedForContentsIfNeeded:(id)arg1 persistedSnaps:(id)arg2;
- (double)_localDayOfEraWithDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3;
- (_Bool)_infiniteDurationForSpectaclesContent:(id)arg1;
- (float)_mediaDurationForLagunaContent:(id)arg1;
- (int)_sojuMediaTypeForLagunaContent:(id)arg1;
- (int)_sojuMediaFormatForLagunaContent:(id)arg1;
- (id)_snapPlaceholderForLagunaContent:(id)arg1;
- (_Bool)_isCloudSyncStatusSynced;
- (void)_setupOnCloudSyncReady;
- (void)_processLagunaContentChange;
- (void)_setupIfNeeded;
- (id)entryPlaceholdersForLagunaContentWithExistingEntries:(id)arg1;
- (void)unobserve:(id)arg1 entryId:(id)arg2;
- (id)observe:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (id)fetchLagunaEntryForSnap:(id)arg1;
- (id)_fetchLagunaEntriesForContentIds:(id)arg1;
- (id)fetchLagunaContentSnapsForEntryHighlighted:(id)arg1;
- (unsigned long long)countOfLagunaContentSnapsForEntryHighlighted:(id)arg1;
- (unsigned long long)countOfLagunaContentSnapsForEntry:(id)arg1;
- (unsigned long long)countOfBoomboxIneligibleSnaps:(id)arg1;
- (_Bool)isEntryEligibleForBoombox:(id)arg1;
- (id)fetchLagunaContentSnapsForEntry:(id)arg1;
- (id)locationForTransferringSpectaclesSnap:(id)arg1;
- (id)_fetchLagunaContentSnapsForEntry:(id)arg1;
- (id)contentLoaderForSnap:(id)arg1;
- (id)recentlyAddedMediaIds;
- (_Bool)entryShouldUseLagunaContentDataSource:(id)arg1;
- (void)setupIfNeeded;
- (id)initWithUserSession:(id)arg1 userPreferenceTimeProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
