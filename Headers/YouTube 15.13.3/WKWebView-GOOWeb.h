//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import <Module_Framework/GOOWebView-Protocol.h>
#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAMegalogsContext, NSArray, NSNumber, NSString, NSURL, UIScrollView;

@interface WKWebView (GOOWeb) <GOOWebView, GWAMegalogsSupportingComponent>
- (void)stopProgressMonitoring;
- (void)setupProgressMonitoring;
@property(readonly, nonatomic) NSString *displayTitle;
@property(nonatomic) _Bool displaysHostAsTitle;
@property(nonatomic) _Bool monitorsProgress;
- (void)setWebViewDelegate:(id)arg1;
- (void)prepareMegalogsContexts;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasOnlySecureContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@end
