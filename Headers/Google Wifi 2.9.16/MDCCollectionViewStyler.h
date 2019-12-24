//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCCollectionViewStyling-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIColor;
@protocol MDCCollectionViewStylingDelegate;

@interface MDCCollectionViewStyler : NSObject <MDCCollectionViewStyling>
{
    _Bool _shouldInvalidateLayout;
    _Bool _shouldHideSeparators;
    _Bool _allowsItemInlay;
    _Bool _allowsMultipleItemInlays;
    _Bool _shouldAnimateCellsOnAppearance;
    _Bool _willAnimateCellsOnAppearance;
    UICollectionView *_collectionView;
    id <MDCCollectionViewStylingDelegate> _delegate;
    UIColor *_cellBackgroundColor;
    unsigned long long _cellLayoutType;
    long long _gridColumnCount;
    double _gridPadding;
    unsigned long long _cellStyle;
    double _cardBorderRadius;
    UIColor *_separatorColor;
    double _separatorLineHeight;
    double _animateCellsOnAppearancePadding;
    double _animateCellsOnAppearanceDuration;
    NSMutableDictionary *_cellBackgroundCaches;
    NSMutableSet *_inlaidIndexPathSet;
    struct UIEdgeInsets _separatorInset;
}

@property(retain, nonatomic) NSMutableSet *inlaidIndexPathSet; // @synthesize inlaidIndexPathSet=_inlaidIndexPathSet;
@property(readonly, nonatomic) NSMutableDictionary *cellBackgroundCaches; // @synthesize cellBackgroundCaches=_cellBackgroundCaches;
@property(readonly, nonatomic) double animateCellsOnAppearanceDuration; // @synthesize animateCellsOnAppearanceDuration=_animateCellsOnAppearanceDuration;
@property(readonly, nonatomic) double animateCellsOnAppearancePadding; // @synthesize animateCellsOnAppearancePadding=_animateCellsOnAppearancePadding;
@property(readonly, nonatomic) _Bool willAnimateCellsOnAppearance; // @synthesize willAnimateCellsOnAppearance=_willAnimateCellsOnAppearance;
@property(nonatomic) _Bool shouldAnimateCellsOnAppearance; // @synthesize shouldAnimateCellsOnAppearance=_shouldAnimateCellsOnAppearance;
@property(nonatomic) _Bool allowsMultipleItemInlays; // @synthesize allowsMultipleItemInlays=_allowsMultipleItemInlays;
@property(nonatomic) _Bool allowsItemInlay; // @synthesize allowsItemInlay=_allowsItemInlay;
@property(nonatomic) _Bool shouldHideSeparators; // @synthesize shouldHideSeparators=_shouldHideSeparators;
@property(nonatomic) double separatorLineHeight; // @synthesize separatorLineHeight=_separatorLineHeight;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double cardBorderRadius; // @synthesize cardBorderRadius=_cardBorderRadius;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) double gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) long long gridColumnCount; // @synthesize gridColumnCount=_gridColumnCount;
@property(nonatomic) unsigned long long cellLayoutType; // @synthesize cellLayoutType=_cellLayoutType;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(nonatomic) _Bool shouldInvalidateLayout; // @synthesize shouldInvalidateLayout=_shouldInvalidateLayout;
@property(nonatomic) __weak id <MDCCollectionViewStylingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)applyBorderPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isTop:(_Bool)arg3 isBottom:(_Bool)arg4 isCard:(_Bool)arg5 borderRadius:(double)arg6;
- (void)applyBackgroundPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isTop:(_Bool)arg3 isBottom:(_Bool)arg4 isCard:(_Bool)arg5 borderRadius:(double)arg6;
- (id)resizableImage:(id)arg1;
- (double)minPixelOffset;
- (id)backgroundImageForCellLayoutAttributes:(id)arg1;
- (_Bool)drawShadowForCellWithIsCardStye:(_Bool)arg1 isGroupStyle:(_Bool)arg2 isHighlighted:(_Bool)arg3;
- (_Bool)shouldInvalidateLayoutForStyleChange;
- (void)invalidateLayoutForStyleChange;
- (void)updateLayoutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateLayoutAnimated:(_Bool)arg1;
- (void)resetIndexPathsForInlaidItems;
- (void)removeInlayFromAllItemsAnimated:(_Bool)arg1;
- (void)applyInlayToAllItemsAnimated:(_Bool)arg1;
- (void)removeInlayFromItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)applyInlayToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isItemInlaidAtIndexPath:(id)arg1;
- (id)indexPathsForInlaidItems;
- (unsigned long long)cellStyleAtSectionIndex:(long long)arg1;
- (void)setCellStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)backgroundImageViewOutsetsForCellWithAttribute:(id)arg1;
- (_Bool)shouldHideSeparatorForCellLayoutAttributes:(id)arg1;
- (id)cellBackgroundCache;
- (unsigned long long)backgroundCacheKeyForCardStyle:(_Bool)arg1 isGroupedStyle:(_Bool)arg2 isTop:(_Bool)arg3 isBottom:(_Bool)arg4 isHighlighted:(_Bool)arg5;
- (void)beginCellAppearanceAnimation;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
