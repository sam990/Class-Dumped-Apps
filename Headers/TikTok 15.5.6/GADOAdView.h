//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADOVideoPlayerDelegate-Protocol.h"
#import "GADOWebKitWebViewMRAIDDelegate-Protocol.h"
#import "GADOWebViewContentSizeDelegate-Protocol.h"
#import "GADOWebViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADOAd, GADOAdViewActiveViewReporter, GADOAdViewState, GADOAdViewVideoController, GADOClearcutLogger, GADOPrecacheGMSGHandler, GADOVideoConfiguration, GADOVideoPlayer, GADOWebView, GADOWebViewConfiguration, NSMutableDictionary, NSOperationQueue, NSString, NSURL, UIGestureRecognizer, UIScrollView, UIViewController;
@protocol GADOAdViewDelegate, GADORewardBasedVideoAdGMSGHandlerDelegate, GADOVideoRendering;

@interface GADOAdView : UIView <GADOVideoPlayerDelegate, UIGestureRecognizerDelegate, GADOWebViewDelegate, GADOWebViewContentSizeDelegate, GADOWebKitWebViewMRAIDDelegate, UIAlertViewDelegate>
{
    GADOWebView *_webView;
    NSURL *_URL;
    GADOAdViewState *_savedState;
    NSOperationQueue *_eventQueue;
    UIGestureRecognizer *_touchGestureRecognizer;
    UIGestureRecognizer *_debugGestureRecognizer;
    _Bool _reportedStartLoadEarly;
    _Bool _isInterstitialAdView;
    _Bool _isFluidAdView;
    UIView *_webViewBackgroundPlaceholder;
    _Bool _touched;
    _Bool _showDebug;
    _Bool _hasLoadedAtLeastOnce;
    _Bool _attachedToPlacement;
    _Bool _visible;
    _Bool _isMediaView;
    UIViewController *_viewController;
    NSString *_adDebugDialogString;
    long long _orientation;
    GADOAdViewActiveViewReporter *_activeViewReporter;
    id <GADOAdViewDelegate> _delegate;
    GADOAd *_ad;
    GADOClearcutLogger *_logger;
    UIView *_testAdLabel;
    GADOWebViewConfiguration *_configuration;
    GADOVideoConfiguration *_videoConfiguration;
    GADOPrecacheGMSGHandler *_precacheGMSGHandler;
    NSMutableDictionary *_cachedStoreKitProducts;
    GADOAdViewVideoController *_videoController;
    GADOVideoPlayer *_videoPlayer;
    UIView<GADOVideoRendering> *_videoPlayerView;
    id <GADORewardBasedVideoAdGMSGHandlerDelegate> _rewardBasedVideoAdGMSGHandlerDelegate;
    struct CGSize _adResponseSize;
    struct CGRect _cachedVideoPlayerFrame;
}

@property(nonatomic) __weak id <GADORewardBasedVideoAdGMSGHandlerDelegate> rewardBasedVideoAdGMSGHandlerDelegate; // @synthesize rewardBasedVideoAdGMSGHandlerDelegate=_rewardBasedVideoAdGMSGHandlerDelegate;
@property(nonatomic) struct CGRect cachedVideoPlayerFrame; // @synthesize cachedVideoPlayerFrame=_cachedVideoPlayerFrame;
@property(retain, nonatomic) UIView<GADOVideoRendering> *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) GADOVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) GADOAdViewVideoController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) NSMutableDictionary *cachedStoreKitProducts; // @synthesize cachedStoreKitProducts=_cachedStoreKitProducts;
@property(retain, nonatomic) GADOPrecacheGMSGHandler *precacheGMSGHandler; // @synthesize precacheGMSGHandler=_precacheGMSGHandler;
@property(retain, nonatomic) GADOVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(nonatomic) _Bool isMediaView; // @synthesize isMediaView=_isMediaView;
@property(readonly, nonatomic) GADOWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIView *testAdLabel; // @synthesize testAdLabel=_testAdLabel;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) GADOClearcutLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) GADOAd *ad; // @synthesize ad=_ad;
@property(readonly, nonatomic) _Bool attachedToPlacement; // @synthesize attachedToPlacement=_attachedToPlacement;
@property(readonly, nonatomic) _Bool hasLoadedAtLeastOnce; // @synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce;
@property(nonatomic) __weak id <GADOAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GADOAdViewActiveViewReporter *activeViewReporter; // @synthesize activeViewReporter=_activeViewReporter;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGSize adResponseSize; // @synthesize adResponseSize=_adResponseSize;
@property(nonatomic) _Bool showDebug; // @synthesize showDebug=_showDebug;
@property(copy, nonatomic) NSString *adDebugDialogString; // @synthesize adDebugDialogString=_adDebugDialogString;
@property(nonatomic) _Bool touched; // @synthesize touched=_touched;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)postJSNotification:(id)arg1 userInfo:(id)arg2;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)isOpaque;
- (void)setOpaque:(_Bool)arg1;
@property(readonly, retain, nonatomic) UIScrollView *scrollView;
- (void)webView:(id)arg1 didChangeScrollViewContentSize:(struct CGSize)arg2;
- (void)webViewProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithTitle:(id)arg2 defaultText:(id)arg3 prompt:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithTitle:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithTitle:(id)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canOpenWebViewAlertPanelWithViewController:(id)arg1 opener:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)updateWebViewFrameWithCompletionBlock:(CDUnknownBlockType)arg1;
- (double)contentSizeDelay;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)MRAIDJavaScriptURLStringForWebView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)reload;
- (void)stopLoading;
- (void)goForward;
- (void)goBack;
- (void)loadRequest:(id)arg1;
- (void)didMoveToPlacement:(id)arg1;
- (void)didRotateToOrientation:(long long)arg1;
- (void)forceRotateHTMLToOrientation:(long long)arg1;
- (void)setHTMLWindowOrientation:(long long)arg1 shouldDispatchOrientationChangeEvent:(_Bool)arg2;
- (void)dispatchSDKEvent:(id)arg1 parameters:(id)arg2;
- (void)willLoadHTML;
- (void)restoreState;
- (void)saveState;
- (id)webView;
- (void)executeJavaScriptAsynchronouslyFromString:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)contentSize;
- (void)handleGesture:(id)arg1;
- (void)reset;
- (void)addGestureRecognizers;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)setIsFluidAdView:(_Bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)layerContainsOpenGLLayer:(id)arg1;
- (void)deallocateAdViewIfInterstitial;
- (void)reportRequestsForAd:(id)arg1;
- (void)configureAsBannerAdView;
- (void)configureAsInterstitialAdView;
- (id)opener;
- (void)willMoveToWindow:(id)arg1;
- (void)updateWebViewSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)videoRenderingSucceeded;
- (void)videoRenderingStarted;
- (void)openGLVideoRenderingSucceeded;
- (void)openGLVideoRenderingFailedWithError:(id)arg1;
- (void)openGLVideoRenderingStarted;
- (void)videoLoadSucceededWithURL:(id)arg1;
- (void)videoLoadStartedWithURL:(id)arg1;
- (void)adRenderingStarted;
- (void)createdVideoPlayer:(id)arg1;
- (void)player:(id)arg1 didLoadURL:(id)arg2 withAVPlayer:(id)arg3;
- (void)createNonSphericalViewForPlayer:(id)arg1;
- (void)removeVideoPlayerView;
- (void)createViewForPlayer:(id)arg1;
- (void)optimizeVideoPlayback;
- (void)pauseVideo;
- (void)showVideo;
- (void)hideVideo;
- (void)setVideoPlayerFrame:(struct CGRect)arg1;
- (void)setUpVideoPlayerWithURL:(id)arg1 resourceCache:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

