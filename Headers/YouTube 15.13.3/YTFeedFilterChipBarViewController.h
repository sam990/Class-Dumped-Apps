//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCollectionViewController.h>

#import "YTChipCloudChipTapDelegate-Protocol.h"
#import "YTFeedFilterChipBarNavigationDelegate-Protocol.h"

@class GIMMe, NSString, YTIFeedFilterChipBarRenderer, YTISectionListRenderer;
@protocol YTFeedFilterChipBarNavigationDelegate, YTFeedFilterChipBarStatusDelegate, YTRendererController;

@interface YTFeedFilterChipBarViewController : YTInnerTubeCollectionViewController <YTChipCloudChipTapDelegate, YTFeedFilterChipBarNavigationDelegate>
{
    YTIFeedFilterChipBarRenderer *_renderer;
    YTISectionListRenderer *_originalSectionListRenderer;
    id <YTFeedFilterChipBarStatusDelegate> _statusDelegate;
    _Bool _defaultChipSelected;
    _Bool _isScrolling;
    id <YTFeedFilterChipBarNavigationDelegate> _navigationDelgate;
    id <YTRendererController> _hostCollectionViewControllerDelegate;
}

@property(nonatomic) __weak id <YTRendererController> hostCollectionViewControllerDelegate; // @synthesize hostCollectionViewControllerDelegate=_hostCollectionViewControllerDelegate;
@property(nonatomic) __weak id <YTFeedFilterChipBarNavigationDelegate> navigationDelgate; // @synthesize navigationDelgate=_navigationDelgate;
- (void).cxx_destruct;
- (void)showHintsForVisibleChips;
- (unsigned long long)defaultChipIndex:(id)arg1;
- (void)updateDefaultChipSelectedStatus:(_Bool)arg1;
- (_Bool)shouldScrollToTop;
- (void)chipBar:(id)arg1 view:(id)arg2 requestsNavigation:(id)arg3;
- (void)chipCloudCell:(id)arg1 didTapChip:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollToDefaultChip;
- (void)setOriginalSectionListRenderer:(id)arg1;
- (void)setStatusDelegate:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 UIFormatter:(id)arg3 layout:(id)arg4 controllerFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
