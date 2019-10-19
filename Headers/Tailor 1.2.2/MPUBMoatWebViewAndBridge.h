//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class MPUBMoatWKWebViewBridge, NSString, WKWebView;

@interface MPUBMoatWebViewAndBridge : NSObject <WKNavigationDelegate>
{
    _Bool _amCleanedUp;
    WKWebView *_webView;
    MPUBMoatWKWebViewBridge *_webBridge;
    NSString *_moatTrackerName;
}

@property _Bool amCleanedUp; // @synthesize amCleanedUp=_amCleanedUp;
@property(retain) NSString *moatTrackerName; // @synthesize moatTrackerName=_moatTrackerName;
@property(retain) MPUBMoatWKWebViewBridge *webBridge; // @synthesize webBridge=_webBridge;
@property(retain) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)destroy;
- (void)changeAttachmentView:(id)arg1;
- (void)vivifyVideoWebViewWithPartnerCode:(id)arg1 withAdIds:(id)arg2 withPlayerDims:(struct CGRect)arg3 withAttachmentView:(id)arg4 withTracker:(id)arg5;
- (void)vivifyDisplayWebViewWithPartnerCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
