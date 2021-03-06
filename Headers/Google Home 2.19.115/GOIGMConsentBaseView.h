//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOIGMModalView.h"

#import "CALayerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class CAGradientLayer, MDCActivityIndicator, NSString, NSURL, UIButton, UIView, WKWebView;
@protocol GOIGMViewErrorHandler, SSOIdentity, SSOService;

@interface GOIGMConsentBaseView : GOIGMModalView <WKNavigationDelegate, UIScrollViewDelegate, CALayerDelegate>
{
    NSURL *_consentURL;
    id <SSOService> _ssoService;
    id <SSOIdentity> _identity;
    NSString *_approveButtonTitle;
    SEL _approveButtonAction;
    NSString *_denyButtonTitle;
    SEL _denyButtonAction;
    id <GOIGMViewErrorHandler> _errorHandler;
    _Bool _initialWebViewURLLoaded;
    _Bool _webViewReachedBottomAtLeastOnce;
    WKWebView *_webView;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    MDCActivityIndicator *_activityIndicator;
    UIButton *_approveButton;
    UIView *_bottomView;
}

- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (_Bool)webViewScrolledToBottom;
- (void)calculateWebViewContentHeightWithCompletion:(CDUnknownBlockType)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)updateGradientView;
- (void)resizeDialog;
- (void)addBottomView;
- (void)addActivityIndicator;
- (void)addConsentWebView;
- (void)positionOnScreen;
- (id)initWithConsentURL:(id)arg1 ssoService:(id)arg2 identity:(id)arg3 approveButtonTitle:(id)arg4 approvaButtonAction:(SEL)arg5 denyButtonTitle:(id)arg6 denyButtonAction:(SEL)arg7 errorHandler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

