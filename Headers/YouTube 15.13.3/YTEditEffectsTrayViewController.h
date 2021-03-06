//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <Module_Framework/YTEditEffectDataSourceDelegate-Protocol.h>
#import <Module_Framework/YTEditFeatureTab-Protocol.h>
#import <Module_Framework/YTEditSheetControllerContent-Protocol.h>
#import <Module_Framework/YTEditSheetControllerHeaderConfiguration-Protocol.h>

@class GIMMe, NSArray, NSMutableSet, NSString, QTMActivityIndicator, UIView, YTEditEffectThumbnailSource;
@protocol YTEditEffect, YTEditEffectDataSource, YTEditEffectThumbnailProvider, YTEditEffectsTraySelectionDelegate, YTEditSheetControllerState;

@interface YTEditEffectsTrayViewController : UICollectionViewController <YTEditEffectDataSourceDelegate, YTEditSheetControllerHeaderConfiguration, YTEditSheetControllerContent, YTEditFeatureTab>
{
    long long _displayStyle;
    NSMutableSet *_readyEffectIDs;
    YTEditEffectThumbnailSource *_thumbnailSource;
    QTMActivityIndicator *_loadingIndicator;
    struct CGPoint _lastContentOffset;
    _Bool _loading;
    UIView *_containerView;
    GIMMe *_gimme;
    id <YTEditEffectDataSource> _effectDataSource;
    id <YTEditEffectsTraySelectionDelegate> _selectionDelegate;
    id <YTEditEffectThumbnailProvider> _thumbnailProvider;
}

+ (id)newCollectionViewLayout;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id <YTEditEffectThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(nonatomic) __weak id <YTEditEffectsTraySelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(retain, nonatomic) id <YTEditEffectDataSource> effectDataSource; // @synthesize effectDataSource=_effectDataSource;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)tabAccessibilityIdentifier;
@property(readonly, nonatomic) NSArray *interactionLoggingButtons;
- (long long)featurePresentationStyle;
- (double)desiredViewHeight;
- (id)title;
- (id)imageSelected:(_Bool)arg1;
@property(nonatomic) _Bool shouldAutorotate; // @dynamic shouldAutorotate;
@property(readonly, nonatomic) int veType; // @dynamic veType;
- (void)featureWillPresent:(_Bool)arg1;
- (long long)closeStyle;
- (id)style;
- (id)contentHeaderConfiguration;
- (double)preferredContentHeight;
- (_Bool)showsScrim;
- (id)contentScrollView;
- (void)setAccessibilityHighlightToSelectedCell;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)effectDataSource:(id)arg1 effectLoadFailed:(id)arg2 error:(id)arg3;
- (void)effectDataSource:(id)arg1 effectDidLoad:(id)arg2;
- (void)effectDataSourceEffectListDidChange:(id)arg1;
- (void)updateViewedStatusForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateSelectionStateForVisibleCellsAnimated:(_Bool)arg1;
- (void)updateSelectedStateForCell:(id)arg1 atIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)updateAcessibilityForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateThumbnailsForVisibleCells;
- (void)updateThumbnailForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateDisplayTitleForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateCellSelectionStateForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateCellConfigurabilityStateForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)modelForYTEditEffectsTrayCellViewedStatusProtocolAtIndexPath:(id)arg1;
- (id)modelForYTEditEffectsTrayCellSelectionStyleProtocolAtIndexPath:(id)arg1;
- (id)modelForYTEditEffectDisplayTitleProtocolAtIndexPath:(id)arg1;
- (id)modelForYTEditEffectsTrayCellDisplaysConfigurationStateProtocolAtIndexPath:(id)arg1;
- (id)modelForYTEditEffectsTrayCellAccessibiltyProtocolAtIndexPath:(id)arg1;
- (_Bool)isIndexPathSelected:(id)arg1;
- (void)loadEffectIfNeeded:(id)arg1;
- (void)setUpLoadingIndicator;
- (void)configureCollectionView;
- (void)updateBackgroundColor;
- (void)setSelectedEffectID:(id)arg1;
@property(readonly, nonatomic) id <YTEditEffect> selectedEffect;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)init;
- (id)initWithDisplayStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <YTEditSheetControllerState> stateDelegate;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleRect;

@end

