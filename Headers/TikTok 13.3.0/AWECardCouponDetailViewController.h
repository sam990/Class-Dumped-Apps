//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWECardCouponDetailStatusCollectionViewCell, AWECouponDetailModel, NSArray, NSString, UICollectionView;

@interface AWECardCouponDetailViewController : UIViewController <BTDRouterViewControllerProtocol, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSString *_couponID;
    NSString *_codeID;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_poiID;
    UICollectionView *_collectionView;
    AWECouponDetailModel *_couponDetailModel;
    AWECardCouponDetailStatusCollectionViewCell *_detailCell;
    NSArray *_actions;
}

+ (void)__awe__codeRunnerRun_97;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak AWECardCouponDetailStatusCollectionViewCell *detailCell; // @synthesize detailCell=_detailCell;
@property(retain, nonatomic) AWECouponDetailModel *couponDetailModel; // @synthesize couponDetailModel=_couponDetailModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *codeID; // @synthesize codeID=_codeID;
@property(copy, nonatomic) NSString *couponID; // @synthesize couponID=_couponID;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)handleCouponValidate:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)_reloadView;
- (void)_refreshData;
- (void)_loadActions;
- (void)_setupUI;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
