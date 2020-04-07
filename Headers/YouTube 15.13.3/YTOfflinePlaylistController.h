//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTOfflineImageControllerObserver-Protocol.h>
#import <Module_Framework/YTOfflinePlaylistSyncControllerDelegate-Protocol.h>
#import <Module_Framework/YTOfflineVideoControllerObserver-Protocol.h>

@class GIMMe, NSHashTable, NSString, YTOfflineDataService, YTOfflineImageController, YTOfflinePlaylistSyncController, YTOfflineVideoController;

@interface YTOfflinePlaylistController : NSObject <YTOfflineImageControllerObserver, YTOfflineVideoControllerObserver, YTOfflinePlaylistSyncControllerDelegate>
{
    YTOfflineDataService *_offlineDataService;
    YTOfflineVideoController *_offlineVideoController;
    YTOfflineImageController *_offlineImageController;
    NSHashTable *_observers;
    GIMMe *_gimme;
    YTOfflinePlaylistSyncController *_offlinePlaylistSyncController;
}

+ (int)statusWithVideos:(id)arg1 completedVideoCount:(unsigned long long *)arg2;
@property(retain, nonatomic) YTOfflinePlaylistSyncController *offlinePlaylistSyncController; // @synthesize offlinePlaylistSyncController=_offlinePlaylistSyncController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)mergePlaylistOfflineResponse:(id)arg1 currentPlaylist:(id)arg2 playlistDataMergeBlock:(CDUnknownBlockType)arg3;
- (void)mergePlaylistWithID:(id)arg1 currentPlaylist:(id)arg2 maximumDownloadQuality:(int)arg3 clickTrackingParams:(id)arg4 playlistDataMergeBlock:(CDUnknownBlockType)arg5 responseBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (void)notifyDidDeleteVideoToPlaylistID:(id)arg1;
- (void)notifyDidAddVideoToPlaylistID:(id)arg1;
- (void)notifyPlaylistWithPlaylistID:(id)arg1 playlistStatus:(int)arg2 completedVideoCount:(unsigned long long)arg3 totalVideoCount:(unsigned long long)arg4;
- (void)notifyThumbnailDidSaveWithPlaylistID:(id)arg1;
- (void)notifyPlaylistWhenVideoDidChange:(id)arg1;
- (void)notifyDidDeleteAllOfflinePlaylists:(id)arg1;
- (void)notifyDidDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (void)notifyPlaylistDidDeleteWithPlaylistID:(id)arg1;
- (void)notifyVideosDidCompleteWithPlaylistID:(id)arg1;
- (void)notifyVideosDidProgressWithPlaylistID:(id)arg1 completedVideos:(unsigned long long)arg2 totalVideos:(unsigned long long)arg3;
- (void)notifyDidPauseWithPlaylistID:(id)arg1;
- (void)notifyDidDeleteVideoID:(id)arg1 fromPlaylistID:(id)arg2;
- (void)saveInnerTubePlaylistFromResponse:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)didSaveOfflineImageWithFilename:(id)arg1 videoIDs:(id)arg2 playlistIDs:(id)arg3 videoListIDs:(id)arg4;
- (void)didUpdateMetadataForVideoID:(id)arg1;
- (void)didSaveThumbnailWithVideoID:(id)arg1;
- (void)didFailToSaveOfflineVideoWithID:(id)arg1;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidPauseWithVideoID:(id)arg1;
- (void)downloadDidFailWithVideoID:(id)arg1 error:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidCancelWithVideoID:(id)arg1;
- (void)downloadDidStartWithVideoID:(id)arg1;
- (void)didUpdateVideosFromStatuses:(id)arg1 toStatuses:(id)arg2;
- (void)didDeletePlaylistWithPlaylistID:(id)arg1;
- (void)didStartDownloadWithPlaylistID:(id)arg1;
- (void)didFailToSaveMetadataWithPlaylistID:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (void)willSaveMetadataWithPlaylistID:(id)arg1;
- (void)syncPlaylistsWithPlaylistArray:(id)arg1 playlistsAllowingMediaDownload:(id)arg2 maximumDownloadQuality:(int)arg3 timeoutInterval:(double)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)checkPlaylistUpToDateStatusWithID:(id)arg1 clickTrackingParams:(id)arg2 timeoutInterval:(double)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)syncPlaylistMetadataByPlaylistID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)performSyncForPlaylists:(id)arg1 nextDateBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)performSyncForAllPlaylistsWithNextDateBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)setPlaylistSyncExcludedPlaylistID:(id)arg1;
- (id)playlistSyncExcludedPlaylistID;
- (void)migrateOfflinePlaylistDataForPlaylistId:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchOfflinePlaylistNeedingInnerTubeMigrationWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)getAllUserIDsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)searchPlaylistsWithString:(id)arg1 searchTypes:(int)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchHasOfflinePlaylistsOnDeviceWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchVideosWithPlaylistID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistCountWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchPlaylistWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistsWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 idPrefix:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)fetchPlaylistsWithOffset:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)fetchPlaylistStatusWithID:(id)arg1 clickTrackingParams:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)enableMediaStreamSyncByPlaylistID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deleteVideo:(id)arg1 fromPlaylist:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)deleteAllWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)deletePlaylistsForUserID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)deletePlaylistWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)updateDateLastSync:(id)arg1 playlistID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)mergePlaylistWithID:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 playlistDataMergeBlock:(CDUnknownBlockType)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)savePlaylistWithID:(id)arg1 maximumDownloadQuality:(int)arg2 clickTrackingParams:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)removeOfflinePlaylistControllerObserver:(id)arg1;
- (void)addOfflinePlaylistControllerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
