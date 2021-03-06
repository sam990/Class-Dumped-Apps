//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageBarControllerDelegate-Protocol.h"
#import "SPTMetaViewControllerObserver-Protocol.h"
#import "SPTNowPlayingManager-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "SPTNowPlayingTestManagerObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSMapTable, NSNotificationCenter, NSString, NSTimer, SPTNowPlayingModel, UIViewController;
@protocol NSObject, SPTAdsManager, SPTLocalSettings, SPTMetaViewController, SPTNowPlayingTestManager, SPTPlayer;

@interface SPTNowPlayingManagerImplementation : NSObject <SPTPlayerObserver, MessageBarControllerDelegate, SPTMetaViewControllerObserver, SPTNowPlayingModelObserver, SPTNowPlayingTestManagerObserver, SPTNowPlayingManager, SPTURISubtypeHandler>
{
    SPTNowPlayingModel *_model;
    id <SPTMetaViewController> _metaViewController;
    id <SPTPlayer> _player;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTLocalSettings> _localSettings;
    NSTimer *_metadataTimer;
    NSMapTable *_observers;
    NSNotificationCenter *_notificationCenter;
    id <NSObject> _applicationActiveObserver;
    id <NSObject> _barShownObserver;
    id <SPTAdsManager> _adsManager;
}

@property(retain, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) id <NSObject> barShownObserver; // @synthesize barShownObserver=_barShownObserver;
@property(retain, nonatomic) id <NSObject> applicationActiveObserver; // @synthesize applicationActiveObserver=_applicationActiveObserver;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *metadataTimer; // @synthesize metadataTimer=_metadataTimer;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)nowPlayingModel:(id)arg1 toggleModeDidChange:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)metaViewControllerWillShowNowPlaying:(id)arg1;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (void)metadataTimerFired:(id)arg1;
- (void)messageBarControllerDefaultAction:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (void)setCurrentToggleMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)currentToggleMode;
@property(readonly, nonatomic) UIViewController *nowPlayingViewController;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNPVShownIfNeeded;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool shouldHideBar;
@property(nonatomic) _Bool barHidden;
- (void)setBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fireMetadataTimerIfNeeded;
- (void)invalidate;
- (_Bool)shouldBounceBar;
- (void)addNotificationsObserversIfNeeded;
- (void)nowPlayingTestManagerDidEnableBarImprovements:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 metaViewController:(id)arg2 player:(id)arg3 messageBarController:(id)arg4 testManager:(id)arg5 localSettings:(id)arg6 notificationCenter:(id)arg7 adsManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

