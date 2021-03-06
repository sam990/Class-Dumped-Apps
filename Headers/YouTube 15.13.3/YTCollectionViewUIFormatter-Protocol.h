//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionViewCell, UIColor;
@protocol YTSectionControllerProtocol;

@protocol YTCollectionViewUIFormatter <NSObject>

@optional
- (UIColor *)backgroundColor;
- (struct UIEdgeInsets)contentInset;
- (struct CGSize)referenceSizeForFooterWithSize:(struct CGSize)arg1 sectionIndex:(unsigned long long)arg2 sectionController:(id <YTSectionControllerProtocol>)arg3 numberOfSections:(unsigned long long)arg4;
- (struct CGSize)referenceSizeForHeaderWithSize:(struct CGSize)arg1 sectionIndex:(unsigned long long)arg2 sectionController:(id <YTSectionControllerProtocol>)arg3 numberOfSections:(unsigned long long)arg4;
- (struct UIEdgeInsets)insetForSectionAtIndex:(unsigned long long)arg1 sectionController:(id <YTSectionControllerProtocol>)arg2 numberOfSections:(unsigned long long)arg3;
- (void)updateSupplementaryItem:(UICollectionReusableView *)arg1 kind:(NSString *)arg2 sectionIndex:(unsigned long long)arg3 sectionController:(id <YTSectionControllerProtocol>)arg4 numberOfSections:(unsigned long long)arg5;
- (void)updateCell:(UICollectionViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2 sectionController:(id <YTSectionControllerProtocol>)arg3 numberofSections:(unsigned long long)arg4;
- (struct CGSize)collectionViewSizeWithSize:(struct CGSize)arg1;
@end

