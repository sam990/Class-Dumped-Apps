//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTOfflinePlaylistEntityGeneratorProtocol-Protocol.h"

@class GIMMe, NSString;
@protocol YTEntityStore, YTOfflineEntityGeneratorDelegate;

@interface YTOfflinePlaylistChannelEntityGenerator : NSObject <YTOfflinePlaylistEntityGeneratorProtocol>
{
    id <YTOfflineEntityGeneratorDelegate> _delegate;
    id <YTEntityStore> _entityStore;
    GIMMe *_gimme;
}

+ (id)entityKeyForChannelID:(id)arg1;
+ (id)entityType;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)didDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (void)didDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (void)downloadDidPauseWithPlaylistID:(id)arg1;
- (void)downloadDidProgressWithPlaylistID:(id)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didFailToSaveOfflinePlaylistWithID:(id)arg1;
- (void)downloadDidCompleteWithPlaylist:(id)arg1;
- (void)downloadDidStartWithPlaylist:(id)arg1;
- (void)didSaveMetadataWithPlaylist:(id)arg1;
- (void)updateEntityForChannelWithPlaylist:(id)arg1;
- (id)channelEntityForPlaylist:(id)arg1;
- (id)generateInitialEntitiesForPlaylists:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
