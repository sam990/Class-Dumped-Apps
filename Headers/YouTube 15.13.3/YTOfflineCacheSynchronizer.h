//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTOfflinePlaylistControllerObserver-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"

@class GIMMe, NSString, YTUserDefaults;

@interface YTOfflineCacheSynchronizer : NSObject <YTOfflinePlaylistControllerObserver, YTOfflineVideoControllerObserver>
{
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateBundleIdCache;
- (void)updateOfflineContentFlag;
- (void)didDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (void)didDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (void)synchronize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
