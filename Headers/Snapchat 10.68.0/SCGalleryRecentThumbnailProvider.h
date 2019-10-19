//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMergedGalleryDataSourceListener-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, NSURL, SCQueuePerformer, SCUserSession;
@protocol SCGalleryEntry, SCGallerySnap, SCObserving;

@interface SCGalleryRecentThumbnailProvider : NSObject <SCMergedGalleryDataSourceListener>
{
    NSMapTable *_observersTable;
    NSURL *_rootURL;
    SCQueuePerformer *_performer;
    id <SCGalleryEntry> _latestEntry;
    id <SCGallerySnap> _latestSnap;
    id <SCObserving> _entryObserveContext;
    SCUserSession *_userSession;
    NSArray *_thumbnailSizes;
    NSArray *_cornerRadii;
    NSMutableArray *_recentThumbnails;
}

@property(retain, nonatomic) NSMutableArray *recentThumbnails; // @synthesize recentThumbnails=_recentThumbnails;
@property(readonly, nonatomic) NSArray *cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(readonly, nonatomic) NSArray *thumbnailSizes; // @synthesize thumbnailSizes=_thumbnailSizes;
- (void).cxx_destruct;
- (void)_loadRecentThumbnail;
- (void)_cleanupAndReloadRecentThumbnail;
- (void)_updateRecentThumbnailImage:(id)arg1 snap:(id)arg2 index:(long long)arg3;
- (void)_generateGalleryThumbnailsWithLatestSnap:(id)arg1;
- (void)_generateGalleryThumbnailsWithLatestEntry:(id)arg1;
- (id)_recentThumbnailPathAtIndex:(long long)arg1;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 thumbnailSizes:(id)arg2 cornerRadii:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
