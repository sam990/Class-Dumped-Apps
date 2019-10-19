//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataBrokerDataProviderProtocol-Protocol.h"
#import "DeepLinkControllerDelegateProtocol-Protocol.h"
#import "NFUIDownloadObserverDelegate-Protocol.h"
#import "StreamLimitDelegate-Protocol.h"

@class NFUIStatusBarOverlay, NSString, RootViewController, StreamLimitViewController, UIViewController;
@protocol DataBrokerDataProviderProtocol, NFUIDownloadObserverProtocol, _TtP8ArgoCore15ACFSubscription_;

@interface NeroFallbackAppFlowController : NSObject <StreamLimitDelegate, NFUIDownloadObserverDelegate, DataBrokerDataProviderProtocol, DeepLinkControllerDelegateProtocol>
{
    _Bool _networkErrorOnStartup;
    id <DataBrokerDataProviderProtocol> _delegate;
    NFUIStatusBarOverlay *_statusBarOverlay;
    StreamLimitViewController *_streamLimitViewController;
    CDUnknownBlockType _streamLimitViewControllerCompletion;
    id <_TtP8ArgoCore15ACFSubscription_> _loadCoreUserOperation;
    UIViewController *_introCardViewController;
    id <NFUIDownloadObserverProtocol> _deeplinkDownloadObserver;
}

@property(retain, nonatomic) id <NFUIDownloadObserverProtocol> deeplinkDownloadObserver; // @synthesize deeplinkDownloadObserver=_deeplinkDownloadObserver;
@property(retain, nonatomic) UIViewController *introCardViewController; // @synthesize introCardViewController=_introCardViewController;
@property(retain, nonatomic) id <_TtP8ArgoCore15ACFSubscription_> loadCoreUserOperation; // @synthesize loadCoreUserOperation=_loadCoreUserOperation;
@property(copy, nonatomic) CDUnknownBlockType streamLimitViewControllerCompletion; // @synthesize streamLimitViewControllerCompletion=_streamLimitViewControllerCompletion;
@property(retain, nonatomic) StreamLimitViewController *streamLimitViewController; // @synthesize streamLimitViewController=_streamLimitViewController;
@property(retain, nonatomic) NFUIStatusBarOverlay *statusBarOverlay; // @synthesize statusBarOverlay=_statusBarOverlay;
@property(nonatomic) _Bool networkErrorOnStartup; // @synthesize networkErrorOnStartup=_networkErrorOnStartup;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)objectContext;
- (void)toggleKidsProfile;
- (id)switchProfileOperation:(id)arg1 profile:(id)arg2;
- (void)handleProfileSelectionError:(id)arg1 sourceId:(id)arg2;
- (void)presentIntroCard:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)hasSeenIntroCardWithIdentifier:(id)arg1;
- (void)dismissNoInternetStatus;
- (void)showNoInternetStatus;
- (void)handleNetworkInterfaceChange:(id)arg1;
- (void)unauthorizedPlatformEvent:(id)arg1;
- (void)unauthorizedLoaderEvent:(id)arg1;
- (void)refreshUI;
- (void)handleNFPreferredLocaleDidChangeNotification:(id)arg1;
- (void)setLanguageForUI:(id)arg1;
- (void)refreshSpotlight;
- (id)attemptSwitchToOwnerIfPossible:(id)arg1 isFromStartup:(_Bool)arg2;
- (void)loadExperienceAfterStartup:(_Bool)arg1;
- (void)downloadObserver:(id)arg1 observedDownload:(id)arg2 stateChange:(unsigned long long)arg3 fromState:(unsigned long long)arg4;
- (void)handleAction:(id)arg1 forPlaybackRequest:(id)arg2 playbackSource:(id)arg3;
- (void)invokeDeepLinkActionExtrasFeed:(id)arg1;
- (void)invokeDeepLink:(id)arg1;
- (void)invokeDeepLinkActionHelp:(id)arg1;
- (void)invokeDeepLinkActionMessage:(id)arg1;
- (void)invokeDeepLinkActionExtras:(id)arg1;
- (void)invokeDeepLinkActionClips:(id)arg1;
- (void)invokeDeepLinkActionDownload:(id)arg1;
- (void)invokeDeepLinkActionContinue:(id)arg1;
- (void)invokeDeepLinkActionList:(id)arg1;
- (void)invokeDeepLinkActionProfiles:(id)arg1;
- (void)invokeDeepLinkActionAdd:(id)arg1;
- (void)invokeDeepLinkActionRating:(id)arg1;
- (void)showMoreTab;
- (void)invokeDeepLinkActionSearch:(id)arg1;
- (void)invokeDeepLinkActionPlaybackSampling:(id)arg1;
- (void)invokeDeepLinkActionBrowse:(id)arg1;
- (void)invokeDeepLinkActionTitle:(id)arg1;
- (void)prepareToInvokeDeepLink:(id)arg1;
- (void)deepLinkController:(id)arg1 handleAction:(id)arg2;
- (void)logoutUI;
- (void)logout;
- (void)annotateURLWithAutologinToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)openMobileSafariWithURL:(id)arg1 withAutoLoginToken:(_Bool)arg2;
- (void)openMobileSafariChangePlan;
- (void)openMobileSafariForgotPIN;
- (void)openMobileSafariVerifyAge:(id)arg1;
- (void)openMobileSafariAccountSettings;
- (_Bool)isLinkingToMobileSafariAllowedForDialogs;
- (_Bool)isDisplayingAccountOnWebMessageEnabled;
- (_Bool)isLinkingToMobileSafariAllowedForPayment;
- (void)fetchDoubleBoundTokens:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)encodeNFToken:(id)arg1;
- (void)fetchAutoLoginTokenEncoded:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)hideMdxPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMdxPlayer:(id)arg1 expanded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAppLoadingView;
- (void)presentAppLoadingView;
- (void)presentSurvey:(id)arg1;
- (void)presentHTTPErrorAlertController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1;
- (void)presentAlertController:(id)arg1;
- (void)presentMessagingViewController:(id)arg1;
- (void)streamLimitViewController:(id)arg1 didDismissWithOption:(long long)arg2;
- (void)streamLimitViewController:(id)arg1 didLoadWithModel:(id)arg2;
- (void)presentStreamLimitDialogWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPlayer:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPlayer:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPlayer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSearchWithTerm:(id)arg1 deepLink:(_Bool)arg2;
- (void)showFilteredLolomoByListContext:(id)arg1 listTrackId:(id)arg2 deepLink:(_Bool)arg3;
- (void)presentAppHelp:(_Bool)arg1;
- (void)showNotificationPage:(id)arg1 deeplink:(_Bool)arg2;
- (void)showAppAccountSettings:(_Bool)arg1;
- (void)showAppSettings:(_Bool)arg1;
- (void)showGalleryByListContext:(id)arg1 deepLink:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showLolomoWithRequest:(id)arg1 deepLink:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showMyList:(_Bool)arg1;
- (void)showHome:(_Bool)arg1;
- (void)showAvailableForDownload:(_Bool)arg1;
- (void)showMyDownloads:(_Bool)arg1 deepLink:(_Bool)arg2;
- (void)presentBrowseOrProfilesGateIgnoreDevice:(_Bool)arg1;
- (_Bool)isMemberUIPresented;
- (void)presentMemberUIWithReset:(_Bool)arg1;
- (void)presentBrowseOrProfilesGate;
- (void)showSignUp;
- (void)showSignUp:(id)arg1 video:(id)arg2;
- (void)showSignUpWithNetflixId:(id)arg1 secureNetflixId:(id)arg2;
- (void)showSignUpWithNetflixId:(id)arg1 secureNetflixId:(id)arg2 path:(id)arg3 video:(id)arg4;
- (void)showSignUpWithCookieStore:(id)arg1 video:(id)arg2;
- (void)showSignUpWithAutoLogin:(id)arg1 path:(id)arg2;
- (void)showSignUpOrLogin;
- (void)showSignUpOrLogin:(id)arg1;
- (void)returnToWelcome;
- (void)showAddProfileModally;
- (void)showManageProfilesModally;
- (void)showProfilesGateModally:(id)arg1;
- (void)showProfilesGateOnly:(id)arg1;
- (void)showNewDisplayPageWithVideoId:(id)arg1 trackId:(id)arg2;
- (void)showDisplayPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showModalPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDebugInfo;
- (void)showViewControllerAboveAppVC:(id)arg1 presentationDelegate:(id)arg2 cancelButtonEnabled:(_Bool)arg3;
- (void)showViewControllerAboveAppVC:(id)arg1 cancelButtonEnabled:(_Bool)arg2;
- (void)setOnlyViewController:(id)arg1;
@property(readonly, nonatomic) __weak RootViewController *rootViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
