//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults, HUBComponentRegistry, SPTFreeTierArtistBarButtonFactory, SPTFreeTierArtistCollectionModelFactory, SPTFreeTierArtistCommandHandlerFactory, SPTFreeTierArtistContentOperationFactory;
@protocol GLUETheme, SPTAgeVerificationProvider, SPTBarButtonItemManager, SPTExplicitContentAccessManager, SPTHubsRendererFactory, SPTHugsFactory, SPTNetworkConnectivityController, SPTPermissionsOnDemandState, SPTShelves, SPTVisualRefreshIntegrationService;

@interface SPTFreeTierArtistHubManager : NSObject
{
    HUBComponentRegistry *_componentRegistry;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTFreeTierArtistContentOperationFactory *_contentOperationFactory;
    SPTFreeTierArtistCommandHandlerFactory *_commandHandlerFactory;
    SPTFreeTierArtistBarButtonFactory *_barButtonFactory;
    id <GLUETheme> _glueTheme;
    id <SPTPermissionsOnDemandState> _onDemandState;
    HUBComponentDefaults *_componentDefaults;
    SPTFreeTierArtistCollectionModelFactory *_collectionModelFactory;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTShelves> _shelves;
    id <SPTVisualRefreshIntegrationService> _visualRefreshIntegrationService;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
}

@property(readonly, nonatomic) __weak id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(nonatomic) __weak id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) __weak id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <SPTVisualRefreshIntegrationService> visualRefreshIntegrationService; // @synthesize visualRefreshIntegrationService=_visualRefreshIntegrationService;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) SPTFreeTierArtistCollectionModelFactory *collectionModelFactory; // @synthesize collectionModelFactory=_collectionModelFactory;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <SPTPermissionsOnDemandState> onDemandState; // @synthesize onDemandState=_onDemandState;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTFreeTierArtistBarButtonFactory *barButtonFactory; // @synthesize barButtonFactory=_barButtonFactory;
@property(readonly, nonatomic) SPTFreeTierArtistCommandHandlerFactory *commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTFreeTierArtistContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)createViewModelLoaderForViewURI:(id)arg1 collectionModelFactory:(id)arg2 referrerIdentifier:(id)arg3 reloadPageSignal:(id)arg4;
- (id)createReleasesViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createArtistViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createViewControllerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (_Bool)canCreateViewControllerForViewURI:(id)arg1;
- (id)initWithComponentRegistry:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 contentOperationFactory:(id)arg4 commandHandlerFactory:(id)arg5 barButtonFactory:(id)arg6 glueTheme:(id)arg7 artistHubComponentsFactory:(id)arg8 encoreArtistHubComponentsFactory:(id)arg9 onDemandState:(id)arg10 barButtonItemManager:(id)arg11 shelves:(id)arg12 visualRefreshIntegrationService:(id)arg13 networkConnectivityController:(id)arg14 explicitContentAccessService:(id)arg15 ageVerificationProvider:(id)arg16 offlineModelFactory:(id)arg17;

@end

