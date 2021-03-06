//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGProfileChainingSectionControllerDelegate-Protocol.h>

@class IGListAdapter, IGProfileChainingModel, IGUserSession, NSString, UICollectionView;

@interface IGFeedItemAYMFCell : UICollectionViewCell <IGListAdapterDataSource, IGProfileChainingSectionControllerDelegate>
{
    UICollectionView *_collectionView;
    IGProfileChainingModel *_model;
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    NSString *_module;
}

+ (double)heightForCellWithWidth:(double)arg1 profileChainingModel:(id)arg2 userSession:(id)arg3;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)chainingSectionControllerDidTapCloseButton:(id)arg1;
- (void)chainingSectionControllerDidDismissLocalDiscovery:(id)arg1;
- (void)_setupCollectionView;
- (void)layoutSubviews;
- (void)configureWithModel:(id)arg1 userSession:(id)arg2 viewController:(id)arg3 module:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

