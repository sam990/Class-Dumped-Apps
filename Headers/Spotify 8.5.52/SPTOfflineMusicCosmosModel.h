//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineAdditionalSortingDelegate-Protocol.h"
#import "SPTOfflineContentModel-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTOfflineMusicModelEntity;
@protocol SPTCollectionPlatformConfiguration, SPTCollectionPlatformDataLoader, SPTCosmosDictionaryDataLoader, SPTCosmosDictionaryDataLoaderRequestToken, SPTLocalSettings, SPTOfflineAdditionalSorting, SPTOfflineContentModelDelegate, SPTOfflineTestManager, SPTPlaylistPlatformPlaylistDataLoader, SPTProductState;

@interface SPTOfflineMusicCosmosModel : NSObject <SPTOfflineAdditionalSortingDelegate, SPTOfflineContentModel>
{
    _Bool _loaded;
    id <SPTOfflineContentModelDelegate> delegate;
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTOfflineTestManager> _testManager;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTOfflineAdditionalSorting> _additionalSorting;
    SPTOfflineMusicModelEntity *_currentEntity;
    NSArray *_offlineResponseItems;
    NSDictionary *_decoratedItems;
    id <SPTCosmosDictionaryDataLoaderRequestToken> _requestToken;
}

+ (id)requestURL;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoaderRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(copy, nonatomic) NSDictionary *decoratedItems; // @synthesize decoratedItems=_decoratedItems;
@property(copy, nonatomic) NSArray *offlineResponseItems; // @synthesize offlineResponseItems=_offlineResponseItems;
@property(retain, nonatomic) SPTOfflineMusicModelEntity *currentEntity; // @synthesize currentEntity=_currentEntity;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) id <SPTOfflineAdditionalSorting> additionalSorting; // @synthesize additionalSorting=_additionalSorting;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTOfflineTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
@property(nonatomic) __weak id <SPTOfflineContentModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)additionalSortingReadyToSort:(id)arg1;
- (void)additionalSorting:(id)arg1 error:(id)arg2;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)storeEntity:(id)arg1;
- (void)loadLocallyStoredEntity;
- (_Bool)allItemsDecorated;
- (_Bool)shouldWaitForAdditionalSorting;
- (void)updateModelEntity;
- (void)decorcateAlbumURL:(id)arg1;
- (void)decoratePlaylistURL:(id)arg1;
- (void)decorateResponse:(id)arg1;
- (void)tearDown;
- (void)loadModel;
- (id)initWithCosmosDictionaryDataLoader:(id)arg1 playlistDataLoader:(id)arg2 collectionDataLoader:(id)arg3 collectionConfiguration:(id)arg4 testManager:(id)arg5 productState:(id)arg6 localSettings:(id)arg7 additionalSorting:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
