//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBCoalescingBlockExecutor, DBLegacyAnalyticsLogger, DBLegacyCollectionManager, NSDate, NSString;
@protocol DBAccountUnlinkHandler, OS_dispatch_queue;

@interface DBSyncManager : NSObject
{
    NSObject<OS_dispatch_queue> *syncManagerQueue;
    _Bool isFirstLoad;
    _Bool metadataSyncInProgress;
    _Bool shouldReloadOnSyncComplete;
    NSString *_userId;
    DBLegacyAnalyticsLogger *_analyticsLogger;
    id <DBAccountUnlinkHandler> _accountUnlinkHandler;
    DBCoalescingBlockExecutor *_serverUpdateBlockExecutor;
    _Bool _pageBackwards;
    DBLegacyCollectionManager *_collectionManager;
    long long _currentPageNumber;
    NSDate *_pageStartDate;
    NSDate *_pageEndDate;
    unsigned long long _queryInvalidatingCounter;
}

@property(nonatomic) unsigned long long queryInvalidatingCounter; // @synthesize queryInvalidatingCounter=_queryInvalidatingCounter;
@property(retain, nonatomic) NSDate *pageEndDate; // @synthesize pageEndDate=_pageEndDate;
@property(retain, nonatomic) NSDate *pageStartDate; // @synthesize pageStartDate=_pageStartDate;
@property(nonatomic) long long currentPageNumber; // @synthesize currentPageNumber=_currentPageNumber;
@property(nonatomic) _Bool pageBackwards; // @synthesize pageBackwards=_pageBackwards;
@property(readonly, nonatomic) DBLegacyCollectionManager *collectionManager; // @synthesize collectionManager=_collectionManager;
- (void).cxx_destruct;
- (_Bool)deletePhotoItems:(id)arg1 error:(id *)arg2;
- (void)reloadCurrentPageFromServer;
- (void)loadPreviousPage;
- (void)loadNextPage;
- (void)reloadCurrentPage;
- (void)queryDatabaseForAllPhotosMetadataAndInvalidateOldRequests:(_Bool)arg1;
- (unsigned long long)totalPhotoCountFromBuckets:(id)arg1;
- (id)syncManagerQueue;
- (_Bool)updatePageBoundariesWithBuckets:(id)arg1 direction:(int)arg2;
- (_Bool)updatePageBoundariesBackwardsWithBuckets:(id)arg1;
- (void)shutDown;
- (_Bool)isSyncing;
- (void)postResults:(id)arg1 count:(unsigned long long)arg2 hasMore:(_Bool)arg3 inDirection:(int)arg4 error:(id)arg5;
- (void)updateSyncStatus;
- (void)stopPollingForUpdates;
- (void)pollForUpdatesOnAllPhotos;
- (id)initWithUserId:(id)arg1 accountUnlinkHandler:(id)arg2 commonAccount:(id)arg3 commonEnv:(id)arg4 filesCacheRoot:(id)arg5 backgroundTaskFactory:(id)arg6;

@end

