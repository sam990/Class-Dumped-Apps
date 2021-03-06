//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWENoxusLongVideoDetailResponseModel, NSMutableArray, NSString, UICollectionView;
@protocol AWENoxusLongVideoPanelListViewDelegate;

@interface AWENoxusLongVideoPanelListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _isLanscape;
    _Bool _firstShow;
    UICollectionView *_collectionView;
    NSMutableArray *_dataArray;
    id <AWENoxusLongVideoPanelListViewDelegate> _delegate;
    AWENoxusLongVideoDetailResponseModel *_listModel;
    double _originalScrollViewOffset;
}

@property(nonatomic) double originalScrollViewOffset; // @synthesize originalScrollViewOffset=_originalScrollViewOffset;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
@property(retain, nonatomic) AWENoxusLongVideoDetailResponseModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) _Bool isLanscape; // @synthesize isLanscape=_isLanscape;
@property(nonatomic) __weak id <AWENoxusLongVideoPanelListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToFocusedCell:(long long)arg1;
- (void)updateInfo:(id)arg1 params:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

