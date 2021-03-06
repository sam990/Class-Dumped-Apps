//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGActionableConfirmationToastSectionControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGActionableConfirmationToastPersistentListViewControllerDelegate;

@interface IGActionableConfirmationToastPersistentListViewController : IGViewController <IGListAdapterDataSource, IGActionableConfirmationToastSectionControllerDelegate>
{
    IGUserSession *_userSession;
    NSArray *_configs;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    id <IGActionableConfirmationToastPersistentListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGActionableConfirmationToastPersistentListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setConfigs:(id)arg1;
- (void)actionableConfirmationToastPersistentListItemSectionControllerDelegateDidTapRightButton:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

