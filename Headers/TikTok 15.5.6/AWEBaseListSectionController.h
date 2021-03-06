//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "AWEBaseListSectionContext-Protocol.h"
#import "AWEBaseListSectionControllerOverride-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGListSupplementaryViewSource-Protocol.h"

@class AWEBaseListSectionViewModel, NSString;
@protocol AWEListSectionControllerDelegate;

@interface AWEBaseListSectionController : IGListSectionController <AWEBaseListSectionContext, IGListSupplementaryViewSource, IGListDisplayDelegate, AWEBaseListSectionControllerOverride>
{
    AWEBaseListSectionViewModel *_viewModel;
    id <AWEListSectionControllerDelegate> _sectionDelegate;
    CDUnknownBlockType _canUpdateLayout;
}

+ (void)setSeparatorModel:(id)arg1;
+ (id)separatorModel;
+ (Class)sectionViewModelClass;
+ (void)setupDefaultSeparatorHeight:(double)arg1 separatorInsets:(struct AWEListKitSeparatorInsets)arg2 separatorColor:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType canUpdateLayout; // @synthesize canUpdateLayout=_canUpdateLayout;
@property(nonatomic) __weak id <AWEListSectionControllerDelegate> sectionDelegate; // @synthesize sectionDelegate=_sectionDelegate;
@property(retain, nonatomic) AWEBaseListSectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)modelsArray;
- (id)separatorColor;
- (struct AWEListKitSeparatorInsets)separatorInsets;
- (double)separatorHeight;
- (void)sectionDidEndDisplayingCell:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (void)sectionWillDisplayCell:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (void)configSupplementaryFooterView:(id)arg1;
- (struct CGSize)sizeForFooterWithCollectionViewSize:(struct CGSize)arg1;
- (Class)footerViewClass;
- (void)configSupplementaryHeaderView:(id)arg1;
- (struct CGSize)sizeForHeaderWithCollectionViewSize:(struct CGSize)arg1;
- (Class)headerViewClass;
- (id)cellLayoutObjectForModel:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1 model:(id)arg2;
- (void)didBindSectionViewModel;
- (void)configCell:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 model:(id)arg2 collectionViewSize:(struct CGSize)arg3;
- (Class)cellClassForModel:(id)arg1 index:(long long)arg2;
- (Class)cellClass;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;
@property(nonatomic) _Bool showSeparator;
- (void)scrollToItemAtIndex:(long long)arg1 scrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)updateLayout:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteItemsWithBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertItemsWithBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadIndexes:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reload:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)modelAtIndex:(long long)arg1;
- (id)visibleIndexPaths;
- (id)visibleCells;
- (id)cellAtIndex:(long long)arg1;
- (id)layoutObjectForModel:(id)arg1;
- (void)deleteSectionItemsWithBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertSectionItemsWithBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadSectionAtIndexes:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadSection:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

