//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightOfflineTrackingSectionController.h"

#import "YTMLightweightOfflineCellStatusSectionObserver-Protocol.h"

@class NSString, YTIOfflineItemSectionRenderer, YTImageService, YTMAutoOfflineController, YTMLightweightMusicRemixOfflineMixtapeCell, YTMLightweightOfflineCellStatusController, YTMOfflineItemSectionHeaderView, YTMSettings, YTUserDefaults;
@protocol YTResponder;

@interface YTMLightweightOfflineSectionController : YTMLightweightOfflineTrackingSectionController <YTMLightweightOfflineCellStatusSectionObserver>
{
    YTMAutoOfflineController *_autoOfflineController;
    YTMOfflineItemSectionHeaderView *_headerView;
    YTImageService *_imageService;
    YTUserDefaults *_userDefaults;
    YTIOfflineItemSectionRenderer *_offlineItemSectionRenderer;
    YTMSettings *_settings;
    YTMLightweightMusicRemixOfflineMixtapeCell *_remixOfflineMixtapeCell;
    YTMLightweightOfflineCellStatusController *_cellStatusController;
    id <YTResponder> _parentResponder;
}

- (id)parentResponder;
- (void).cxx_destruct;
- (void)didUpdateFreeStorageAvailable:(unsigned long long)arg1;
- (void)setHintLastShownDate:(id)arg1;
- (id)hintLastShownDate;
- (void)didRemoveOfflineItemEntry:(id)arg1;
- (void)lightweightCellNeedsResize:(id)arg1;
- (void)lightweightCellDidDeleteOfflineContent:(id)arg1;
- (void)lightweightCell:(id)arg1 didEnableOfflineMixtapeWithSongCount:(unsigned long long)arg2;
- (void)removeRendererAtIndex:(unsigned long long)arg1;
- (void)didEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1;
- (id)headerContentView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 cellFactory:(id)arg3 sectionRenderer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
