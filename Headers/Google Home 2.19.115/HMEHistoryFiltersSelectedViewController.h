//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"

@class HMEHistoryAnalyticsLogger, NSMutableArray, NSString, UICollectionView;
@protocol HMEHistoryFiltersDelegate;

@interface HMEHistoryFiltersSelectedViewController : UIViewController <UICollectionViewDataSource>
{
    id <HMEHistoryFiltersDelegate> _delegate;
    HMEHistoryAnalyticsLogger *_analyticsLogger;
    UICollectionView *_collectionView;
    NSMutableArray *_chips;
}

@property(retain, nonatomic) NSMutableArray *chips; // @synthesize chips=_chips;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HMEHistoryAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak id <HMEHistoryFiltersDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)removeFilterForChip:(id)arg1;
- (void)setImage:(id)arg1 forChip:(id)arg2;
- (void)updateFilters:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

