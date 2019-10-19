//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicPlaylistsModelDelegate-Protocol.h"
#import "SPTYourLibraryMusicPlaylistsViewModel-Protocol.h"

@class NSArray, NSString, SPTYourLibraryMusicLogger;
@protocol SPTFreeTierCreatePlaylistController, SPTLinkDispatcher, SPTPlaylistPlatformPlaylistSynchroniser, SPTSortingFilteringUIFactory, SPTYourLibraryMusicPlaylistsModel, SPTYourLibraryMusicPlaylistsModelEntity, SPTYourLibraryMusicPlaylistsViewModelDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicPlaylistFolderViewModelImplementation : NSObject <SPTYourLibraryMusicPlaylistsViewModel, SPTYourLibraryMusicPlaylistsModelDelegate>
{
    _Bool _didLogScrollIndexSelected;
    id <SPTYourLibraryMusicPlaylistsViewModelDelegate> delegate;
    NSString *textFilter;
    id <SPTYourLibraryMusicPlaylistsModel> _model;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPlaylistPlatformPlaylistSynchroniser> _playlistSynchroniser;
    id <SPTFreeTierCreatePlaylistController> _createPlaylistController;
    SPTYourLibraryMusicLogger *_logger;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTYourLibraryMusicPlaylistsModelEntity> _modelEntity;
    id <SPTSortingFilteringUIFactory> _sortingFilteringPickerFactory;
}

@property(nonatomic) _Bool didLogScrollIndexSelected; // @synthesize didLogScrollIndexSelected=_didLogScrollIndexSelected;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringPickerFactory; // @synthesize sortingFilteringPickerFactory=_sortingFilteringPickerFactory;
@property(retain, nonatomic) id <SPTYourLibraryMusicPlaylistsModelEntity> modelEntity; // @synthesize modelEntity=_modelEntity;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTYourLibraryMusicLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTFreeTierCreatePlaylistController> createPlaylistController; // @synthesize createPlaylistController=_createPlaylistController;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistSynchroniser> playlistSynchroniser; // @synthesize playlistSynchroniser=_playlistSynchroniser;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTYourLibraryMusicPlaylistsModel> model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter;
@property(nonatomic) __weak id <SPTYourLibraryMusicPlaylistsViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)playlistsModel:(id)arg1 error:(id)arg2;
- (void)playlistsModel:(id)arg1 didUpdateEntity:(id)arg2;
- (id)modelItemEntityAtIndexPath:(id)arg1;
- (id)playlistEntityForRowAtIndexPath:(id)arg1;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (void)logSectionIndexSelected;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (id)sortingAndFilteringPickerViewController;
- (void)searchWillEnd;
- (void)searchWillBegan;
- (void)endObservingRowAtIndexPath:(id)arg1;
- (void)beginObservingRowAtIndexPath:(id)arg1;
- (id)indexPathForScrollSectionIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (void)createPlaylistActionInInfoView:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long countOfSections;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (id)itemViewModelAtIndexPath:(id)arg1;
- (id)sectionViewModelForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *title;
- (_Bool)hasMoreInSection:(unsigned long long)arg1;
- (void)loadMoreInSection:(unsigned long long)arg1;
- (void)viewWillAppear;
- (void)loadViewModel;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) NSArray *activeFilterTitles;
@property(readonly, nonatomic) unsigned long long filteredContentState;
@property(readonly, nonatomic, getter=isSortingAndFilteringEnabled) _Bool sortingAndFilteringEnabled;
- (id)initWithModel:(id)arg1 linkDispatcher:(id)arg2 playlistSynchroniser:(id)arg3 createPlaylistController:(id)arg4 logger:(id)arg5 testManager:(id)arg6 sortingFilteringPickerFactory:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
