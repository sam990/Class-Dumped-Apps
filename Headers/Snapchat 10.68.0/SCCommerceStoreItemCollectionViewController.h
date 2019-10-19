//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCCommerceCatalogPaginationErrorCollectionViewCellDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCommercePaginationProvider, SCCommerceSession, SCCommerceStoreActionHandler, SCCommerceStoreCategory, SCCommerceStoreCategorySession, SCCompositeNetworkImageModel, SCLoadingIndicatorView, SCScanCardButton, SCUserSession, UICollectionView, UILabel;
@protocol SCCommerceCatalogPagingDataCoordinator, SCCommercePaginationProviding, SCCommerceStoreItemCollectionViewControllerDelegate, SCCompositeNetworkImageDownloading;

@interface SCCommerceStoreItemCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCEventListener, SCCommerceCatalogPaginationErrorCollectionViewCellDelegate>
{
    double _cellWidth;
    double _cellHeight;
    double _cellPadding;
    double _heroImageWidth;
    double _heroImageHeight;
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    id <SCCommerceCatalogPagingDataCoordinator> _catalogPagingDataCoordinator;
    id <SCCommercePaginationProviding> _paginationProvider;
    SCCommerceStoreActionHandler *_actionHandler;
    _Bool _isSetup;
    _Bool _isPaginationEnabled;
    SCCommerceStoreCategory *_category;
    SCCommerceStoreCategorySession *_storeCategorySession;
    id <SCCommerceStoreItemCollectionViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    NSArray *_productList;
    SCLoadingIndicatorView *_loadingIndicator;
    UILabel *_errorLabel;
    SCScanCardButton *_retryButton;
    unsigned long long _heroImageCount;
    unsigned long long _pagingCellType;
    NSDictionary *_imageModels;
    SCCompositeNetworkImageModel *_heroCellNetworkImageModel;
}

@property(retain, nonatomic) SCCommercePaginationProvider *paginationProvider; // @synthesize paginationProvider=_paginationProvider;
@property(retain, nonatomic) SCCompositeNetworkImageModel *heroCellNetworkImageModel; // @synthesize heroCellNetworkImageModel=_heroCellNetworkImageModel;
@property(retain, nonatomic) NSDictionary *imageModels; // @synthesize imageModels=_imageModels;
@property(nonatomic) unsigned long long pagingCellType; // @synthesize pagingCellType=_pagingCellType;
@property(nonatomic) unsigned long long heroImageCount; // @synthesize heroImageCount=_heroImageCount;
@property(retain, nonatomic) SCScanCardButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) NSArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SCCommerceStoreItemCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCCommerceStoreCategorySession *storeCategorySession; // @synthesize storeCategorySession=_storeCategorySession;
@property(readonly, nonatomic) SCCommerceStoreCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)clearCacheContent:(id)arg1 shouldClearBitmojiCache:(_Bool)arg2;
- (void)_reloadImageViewModelsForItemsWithShouldClearBitmojiCache:(_Bool)arg1;
- (void)_reloadImageViewModels;
- (void)_setupCoordinators:(id)arg1;
- (id)commercePartner;
- (void)_handleProductCellTapAtIndexPath:(id)arg1;
- (void)_handleHeroImageTapAtIndexPath:(id)arg1;
- (unsigned long long)_cellTypeForIndexPath:(id)arg1;
- (void)_didTapRetry;
- (unsigned long long)_metricsColumnForIndexPath:(id)arg1;
- (unsigned long long)_metricsRowForIndexPath:(id)arg1;
- (void)_setupToLoadProducts;
- (void)_removeLoadingCellWithRemovedIndices:(id)arg1;
- (void)_insertItemsIntoCollectionViewWithAddedIndices:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePageItemsLoadingFailedWithChangedIndices:(id)arg1;
- (void)_handlePageFinalItemsLoadedWithRemovedIndices:(id)arg1;
- (void)_handlePageItemsLoadedWithAddedIndices:(id)arg1;
- (void)_handleInitialItemsLoaded;
- (void)_loadItemsForPage:(id)arg1 actionIdentifier:(id)arg2;
- (void)_loadProductsWithPaging;
- (void)_loadProducts;
- (void)didTapRetryForSCCommerceCatalogPaginationErrorCollectionViewCell:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_errorCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_loadingCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_paginationEnabledProductCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_storeItemCollectionViewCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_catalogItemCollectionViewCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_productCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_paginationEnabledHeroImageCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_heroImageCellForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)loadProducts;
- (void)_hideErrorMessage;
- (void)_showErrorWithMessage:(id)arg1;
- (void)_hideLoadingViewWithErrorMessage:(id)arg1;
- (void)_showLoadingView;
- (void)_setupCollectionView;
- (void)scrollToTop;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStoreCategory:(id)arg1 commerceStoreCategorySession:(id)arg2 userSession:(id)arg3 imageDownloader:(id)arg4 catalogPagingDataCoordinator:(id)arg5 paginationProvider:(id)arg6 actionHandler:(id)arg7 isPaginationEnabled:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
