//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierPlaylistHeaderConfiguration-Protocol.h"

@class GLUEEntityRowStyle, NSArray;
@protocol SPTFreeTierEntityOfflineViewModel, SPTFreeTierPlaylistCellProviderDelegate, SPTFreeTierPlaylistContextMenuPresenter, SPTFreeTierPlaylistHeaderProvider, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistPlayModel;

@protocol SPTFreeTierPlaylistConfiguration <SPTFreeTierPlaylistHeaderConfiguration>
@property(nonatomic) _Bool excludeAllEpisodes;
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> cellProviderDelegate;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel;
@property(readonly, nonatomic) id <SPTFreeTierEntityOfflineViewModel> offlineViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistContextMenuPresenter> contextMenuPresenter;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayModel> playModel;
@property(readonly, copy, nonatomic) NSArray *cellProviders;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistHeaderProvider> headerProvider;
@property(readonly, copy, nonatomic) GLUEEntityRowStyle *rowStyle;
@property(readonly, nonatomic) _Bool useBarButtons;
@property(readonly, nonatomic) long long headerType;
@end

