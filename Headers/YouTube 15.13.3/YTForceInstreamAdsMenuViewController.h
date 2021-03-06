//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTAdsSettingsBaseViewController.h>

@class GIMMe, NSMutableArray, UIView, YTAdsSettingsPickerView, YTAdsSettingsSectionController, YTCollectionViewController, YTIForceAdParameters, YTScrollsToTopCoordinator;

@interface YTForceInstreamAdsMenuViewController : YTAdsSettingsBaseViewController
{
    NSMutableArray *_adBreaks;
    NSMutableArray *_videoAds;
    UIView *_pickerView;
    YTAdsSettingsPickerView *_innerPickerView;
    YTAdsSettingsSectionController *_addInstreamSection;
    YTCollectionViewController *_collectionViewController;
    YTIForceAdParameters *_forceAdParameters;
    YTScrollsToTopCoordinator *_scrollsToTopCoordinator;
    _Bool _useBackButton;
}

- (void).cxx_destruct;
- (void)didPressClose;
- (void)resetPickerView;
- (id)pickerItemWithOptions:(id)arg1;
- (void)picked;
- (id)instreamAdBreakSectionWithVideoAd:(id)arg1;
- (id)instreamAdBreakSection;
- (id)addInstreamItem;
- (void)reloadData;
- (void)presentPickerWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)dismissKeyboard;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithScrollsToTopCoordinator:(id)arg1 parentResponder:(id)arg2 useBackButton:(_Bool)arg3;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

