//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MOPUBFullscreenPlayerViewControllerDelegate-Protocol.h"
#import "MOPUBPlayerViewControllerDelegate-Protocol.h"
#import "MPNativeAdRenderer-Protocol.h"
#import "MPNativeAdRendererImageHandlerDelegate-Protocol.h"

@class MOPUBNativeVideoAdAdapter, MOPUBNativeVideoAdConfigValues, MOPUBNativeVideoImpressionAgent, MOPUBPlayerViewController, MPNativeAdRendererImageHandler, MPTimer, MPVASTTracking, MPVideoConfig, NSString, UIView;
@protocol MPNativeAdAdapter, MPNativeAdRendering;

@interface MOPUBNativeVideoAdRenderer : NSObject <MPNativeAdRenderer, MOPUBPlayerViewControllerDelegate, MOPUBFullscreenPlayerViewControllerDelegate, MPNativeAdRendererImageHandlerDelegate>
{
    _Bool _adViewInViewHierarchy;
    _Bool _trackingImpressionFired;
    CDUnknownBlockType _viewSizeHandler;
    UIView<MPNativeAdRendering> *_adView;
    MOPUBNativeVideoAdAdapter<MPNativeAdAdapter> *_adapter;
    Class _renderingViewClass;
    MPNativeAdRendererImageHandler *_rendererImageHandler;
    MOPUBPlayerViewController *_videoController;
    MPTimer *_autoPlayTimer;
    MPVideoConfig *_videoConfig;
    MPVASTTracking *_vastTracking;
    MOPUBNativeVideoAdConfigValues *_nativeVideoAdConfig;
    MOPUBNativeVideoImpressionAgent *_trackingAgent;
}

+ (id)rendererConfigurationWithRendererSettings:(id)arg1;
@property(nonatomic) _Bool trackingImpressionFired; // @synthesize trackingImpressionFired=_trackingImpressionFired;
@property(retain, nonatomic) MOPUBNativeVideoImpressionAgent *trackingAgent; // @synthesize trackingAgent=_trackingAgent;
@property(retain, nonatomic) MOPUBNativeVideoAdConfigValues *nativeVideoAdConfig; // @synthesize nativeVideoAdConfig=_nativeVideoAdConfig;
@property(retain, nonatomic) MPVASTTracking *vastTracking; // @synthesize vastTracking=_vastTracking;
@property(retain, nonatomic) MPVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) MPTimer *autoPlayTimer; // @synthesize autoPlayTimer=_autoPlayTimer;
@property(nonatomic) __weak MOPUBPlayerViewController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) MPNativeAdRendererImageHandler *rendererImageHandler; // @synthesize rendererImageHandler=_rendererImageHandler;
@property(retain, nonatomic) Class renderingViewClass; // @synthesize renderingViewClass=_renderingViewClass;
@property(nonatomic) _Bool adViewInViewHierarchy; // @synthesize adViewInViewHierarchy=_adViewInViewHierarchy;
@property(retain, nonatomic) MOPUBNativeVideoAdAdapter<MPNativeAdAdapter> *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) UIView<MPNativeAdRendering> *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) CDUnknownBlockType viewSizeHandler; // @synthesize viewSizeHandler=_viewSizeHandler;
- (void).cxx_destruct;
- (void)setupVideoView;
- (void)initAdView;
- (void)enterFullscreen:(id)arg1;
- (_Bool)nativeAdViewInViewHierarchy;
- (void)nativeAdTapped;
- (void)fullscreenPlayerWillLeaveApplication:(id)arg1;
- (void)ctaTapped:(id)arg1;
- (void)playerDidProgressToTime:(double)arg1;
- (void)willEnterFullscreen:(id)arg1;
- (void)tick:(id)arg1;
- (void)adViewWillMoveToSuperview:(id)arg1;
- (void)DAAIconTapped;
- (_Bool)shouldLoadMediaView;
- (id)retrieveViewWithAdapter:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithRendererSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
