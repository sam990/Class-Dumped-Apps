//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessagePresenter-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSDictionary, NSString, SPTInAppMessageNoteOverlayController, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTBannerPresentationManager, SPTCarDetector, SPTCrashReporter, SPTFreeTierTooltipConditionalPresenter, SPTInAppMessageSDKMessageViewModel, SPTOfflineModeState, SPTSlateManager, SPTSnackbarConditionalPresenter, SPTTooltipPresentationManager;

@interface SPTInAppMessageNotePresentationController : NSObject <SPTOfflineModeStateObserver, SPTInAppMessagePresenter>
{
    _Bool _offline;
    SPTInAppMessageNoteOverlayController *_noteOverlayController;
    id <SPTInAppMessageSDKMessageViewModel> _messageViewModel;
    id <SPTSlateManager> _slateManager;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTTooltipPresentationManager> _tooltipPresentationManager;
    id <SPTFreeTierTooltipConditionalPresenter> _freeTierTooltipPresenter;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTInAppMessageServiceLogger *_serviceLogger;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTCarDetector> _carDetector;
    id <SPTCrashReporter> _crashReporter;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTAuthController> _authController;
    NSDictionary *_cancelationInfo;
    NSString *_matchedPattern;
    NSString *_triggerType;
}

@property(copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(copy, nonatomic) NSString *matchedPattern; // @synthesize matchedPattern=_matchedPattern;
@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(readonly, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(readonly, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(readonly, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> freeTierTooltipPresenter; // @synthesize freeTierTooltipPresenter=_freeTierTooltipPresenter;
@property(readonly, nonatomic) id <SPTTooltipPresentationManager> tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(readonly, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) id <SPTInAppMessageSDKMessageViewModel> messageViewModel; // @synthesize messageViewModel=_messageViewModel;
@property(readonly, nonatomic) SPTInAppMessageNoteOverlayController *noteOverlayController; // @synthesize noteOverlayController=_noteOverlayController;
- (void).cxx_destruct;
- (void)cancelNoteMessagePresentation:(id)arg1;
- (_Bool)canPresentNote;
- (void)logMessageDiscardedWithReason:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dismiss;
- (void)presentInAppMessageView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithNoteOverlayController:(id)arg1 messageViewModel:(id)arg2 matchedPattern:(id)arg3 triggerType:(id)arg4 slateManager:(id)arg5 bannerPresentationManager:(id)arg6 tooltipPresentationManager:(id)arg7 freeTierTooltipPresenter:(id)arg8 snackbarPresenter:(id)arg9 offlineModeState:(id)arg10 nowPlayingManagerRegistry:(id)arg11 carDetector:(id)arg12 serviceLogger:(id)arg13 crashReporter:(id)arg14 authController:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
