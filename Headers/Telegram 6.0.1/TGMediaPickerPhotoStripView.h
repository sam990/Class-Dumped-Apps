//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelegramUI/TGDraggableCollectionViewDataSource-Protocol.h>
#import <TelegramUI/UICollectionViewDelegate-Protocol.h>

@class NSString, TGDraggableCollectionView, TGDraggableCollectionViewFlowLayout, TGMediaEditingContext, TGMediaPickerGallerySelectedItemsModel, TGMediaSelectionContext, UIImageView, UIVisualEffectView;

@interface TGMediaPickerPhotoStripView : UIView <TGDraggableCollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _internalHidden;
    UIView *_wrapperView;
    UIVisualEffectView *_effectView;
    UIImageView *_backgroundView;
    UIView *_maskView;
    TGDraggableCollectionView *_collectionView;
    TGDraggableCollectionViewFlowLayout *_collectionViewLayout;
    _Bool _isAnimating;
    _Bool _removable;
    TGMediaPickerGallerySelectedItemsModel *_selectedItemsModel;
    TGMediaSelectionContext *_selectionContext;
    TGMediaEditingContext *_editingContext;
    long long _interfaceOrientation;
    CDUnknownBlockType _itemSelected;
    CDUnknownBlockType _itemRemoved;
    CDUnknownBlockType _thumbnailSignalForItem;
}

@property(copy, nonatomic) CDUnknownBlockType thumbnailSignalForItem; // @synthesize thumbnailSignalForItem=_thumbnailSignalForItem;
@property(copy, nonatomic) CDUnknownBlockType itemRemoved; // @synthesize itemRemoved=_itemRemoved;
@property(copy, nonatomic) CDUnknownBlockType itemSelected; // @synthesize itemSelected=_itemSelected;
@property(nonatomic) _Bool removable; // @synthesize removable=_removable;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) TGMediaEditingContext *editingContext; // @synthesize editingContext=_editingContext;
@property(retain, nonatomic) TGMediaSelectionContext *selectionContext; // @synthesize selectionContext=_selectionContext;
@property(nonatomic) __weak TGMediaPickerGallerySelectedItemsModel *selectedItemsModel; // @synthesize selectedItemsModel=_selectedItemsModel;
- (void).cxx_destruct;
- (void)_layoutCollectionViewForOrientation:(long long)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)stopScrolling;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isInternalHidden;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)insertItemAtIndex:(long long)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

