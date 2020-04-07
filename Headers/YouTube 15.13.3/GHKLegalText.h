//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/SUPLegalTextViewDelegate-Protocol.h>

@class GHKReceiverConfig, GHKURLOpener, NSAttributedString, NSString, SUPLegalTextView, SUPLegaleseLinkHandler, SUPMetricsReporter, UIView;

@interface GHKLegalText : NSObject <SUPLegalTextViewDelegate>
{
    SUPLegaleseLinkHandler *_legaleseLinkHandler;
    _Bool _openingPrivacyPolicy;
    SUPLegalTextView *_view;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKURLOpener *_URLOpener;
    UIView *_whiteoutView;
    NSAttributedString *_systemInfo;
}

+ (id)objectionRequires;
@property(copy, nonatomic) NSAttributedString *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(nonatomic) __weak UIView *whiteoutView; // @synthesize whiteoutView=_whiteoutView;
@property(retain, nonatomic) GHKURLOpener *URLOpener; // @synthesize URLOpener=_URLOpener;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(readonly, nonatomic) SUPLegalTextView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)openTermsOfService;
- (void)openSystemInfoDialog;
- (void)openPrivacyPolicy;
- (_Bool)handleLegalTextLinkTapped:(id)arg1;
- (id)initWithSystemInfo:(id)arg1 whiteoutView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
