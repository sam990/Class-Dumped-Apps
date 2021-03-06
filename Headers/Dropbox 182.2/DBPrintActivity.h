//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFullFileActivity.h"

#import "UIPrintInteractionControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class DBReadOnlyCachedFile, NSDate, NSString, NSURL, UIWebView;

@interface DBPrintActivity : DBFullFileActivity <UIPrintInteractionControllerDelegate, UIWebViewDelegate>
{
    DBReadOnlyCachedFile *_file;
    NSURL *_path;
    UIWebView *_webView;
    NSDate *_startRenderTime;
    _Bool _printMenuVisible;
}

- (void).cxx_destruct;
- (void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
- (void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)db_presentPrintControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)db_dismiss;
- (void)db_setupAndPresentPrintController;
- (void)db_showPrintErrorDialog:(id)arg1;
- (long long)db_preferredRepr;
- (_Bool)db_startWebViewPrinting;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithFileProviders:(id)arg1 progressText:(id)arg2 logger:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

