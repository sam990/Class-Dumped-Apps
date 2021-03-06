//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIDownloadSessionDelegate-Protocol.h"
#import "NfOfflineContentManagerDelegate-Protocol.h"

@class NFUIDownloadSession, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface NFUIDownloadModel : NSObject <NfOfflineContentManagerDelegate, NFUIDownloadSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NFUIDownloadSession *_downloadSession;
    NSMutableDictionary *_downloads;
    NSOperationQueue *_synchronizeOperationQueue;
    NSMutableSet *_removedIds;
}

+ (id)dictionaryWithObjectsInSet:(id)arg1 removedFromDictionary:(id)arg2;
+ (id)dictionaryOfIdsFromDownloads:(id)arg1 addedToDictionary:(id)arg2;
+ (void)loadFromDiskWithWatchableIdContextMap:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableSet *removedIds; // @synthesize removedIds=_removedIds;
@property(retain, nonatomic) NSOperationQueue *synchronizeOperationQueue; // @synthesize synchronizeOperationQueue=_synchronizeOperationQueue;
@property(retain, nonatomic) NSMutableDictionary *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) NFUIDownloadSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (void)refreshDownloadBookmarkDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)nflxDownload:(id)arg1 updatedLicense:(id)arg2;
- (void)nflxDownload:(id)arg1 updatedProgress:(double)arg2;
- (void)nflxDownload:(id)arg1 resumed:(id)arg2;
- (void)nflxDownload:(id)arg1 suspended:(id)arg2;
- (void)nflxDownload:(id)arg1 ended:(id)arg2;
- (void)nflxDownload:(id)arg1 opened:(id)arg2;
- (id)observerForDownloadsAssociatedWithIds:(id)arg1 andExistingWatchableIds:(id)arg2;
- (id)observerForDownloadWithId:(id)arg1;
- (id)downloadWithId:(id)arg1;
- (_Bool)isADownloadCurrentlyInProgress;
- (unsigned long long)downloadedViewablesCount;
- (void)cleanupReadStateForRemovedDownloads;
- (void)markAllDownloadsAsRead;
- (id)diskUsageForAllDownloads;
- (id)currentSession;
- (void)removeDownloadsWithIds:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)initiateDownloadWithId:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)unload;
- (void)downloadSessionEnded:(id)arg1 gracefully:(_Bool)arg2;
- (void)downloadSessionUpdated:(id)arg1;
- (void)downloadSessionStarted:(id)arg1 restored:(_Bool)arg2;
- (id)unsafeRemoveDownloadsWithIds:(id)arg1;
- (void)unsafeInitiateDownloadWithId:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)synchronizeChangesToDisk;
- (void)synchronizeChangesToDiskNow;
- (id)unsafeLoadFromDiskWithWatchableIdContextMapSync:(id)arg1;
- (void)createDownloadSessionIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

