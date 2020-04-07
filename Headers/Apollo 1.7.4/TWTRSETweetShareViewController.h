//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TWTRSESheetPresentationManager, TWTRSETweetComposerViewController, TWTRSETweetShareConfiguration, TWTRSETweetShareNavigationController;

@interface TWTRSETweetShareViewController : UIViewController
{
    TWTRSETweetShareConfiguration *_configuration;
    TWTRSETweetShareNavigationController *_navigationController;
    TWTRSETweetComposerViewController *_composerViewController;
    TWTRSESheetPresentationManager *_sheetPresentationManager;
}

@property(readonly, nonatomic) TWTRSESheetPresentationManager *sheetPresentationManager; // @synthesize sheetPresentationManager=_sheetPresentationManager;
@property(readonly, nonatomic) TWTRSETweetComposerViewController *composerViewController; // @synthesize composerViewController=_composerViewController;
@property(readonly, nonatomic) TWTRSETweetShareNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) TWTRSETweetShareConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_tseui_scribeAction:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
