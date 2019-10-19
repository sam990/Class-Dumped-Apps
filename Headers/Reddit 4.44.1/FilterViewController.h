//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class ImageProcessor, NSArray, NSIndexPath, NSString, UICollectionView;
@protocol FilterViewControllerDelegate;

@interface FilterViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <FilterViewControllerDelegate> _delegate;
    NSIndexPath *_selectedIndexPath;
    ImageProcessor *_imageProcessor;
    NSArray *_imageFilterTypes;
    UICollectionView *_filteredImagesCollectionView;
}

+ (id)nameForFilterType:(long long)arg1;
@property(retain, nonatomic) UICollectionView *filteredImagesCollectionView; // @synthesize filteredImagesCollectionView=_filteredImagesCollectionView;
@property(copy, nonatomic) NSArray *imageFilterTypes; // @synthesize imageFilterTypes=_imageFilterTypes;
@property(retain, nonatomic) ImageProcessor *imageProcessor; // @synthesize imageProcessor=_imageProcessor;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak id <FilterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureViewAppearance;
- (void)preselectNoneCell;
- (void)setupFilteredImagesCollectionView;
- (void)setupImageFilterTypes;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
