//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

@class TFNButton, UIBarButtonItem;

@interface T1CreateAndEditSphereViewController : TFNFormViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: createButton
    // Error parsing type: , name: account
    // Error parsing type: , name: state
    // Error parsing type: , name: addedUsers
    // Error parsing type: , name: removedUsers
    // Error parsing type: , name: mutationsManager
    // Error parsing type: , name: conversionsHelper
    // Error parsing type: , name: bannerImageView
    // Error parsing type: , name: bannerIconImageView
    // Error parsing type: , name: sphereImageBannerPickFlowController
    // Error parsing type: , name: bannerUpdateState
    // Error parsing type: , name: spheresFeatureSwitches
}

- (void).cxx_destruct;
- (void)didTapBannerWithSender:(id)arg1;
- (void)didTapSaveWithSender:(id)arg1;
- (void)didTapDoneWithSender:(id)arg1;
- (void)didTapCancelWithSender:(id)arg1;
- (void)submitForm;
@property(nonatomic, readonly) TFNButton *submitButton;
@property(nonatomic, readonly) UIBarButtonItem *doneBarButtonItem;
@property(nonatomic, readonly) _Bool includesSubmitButtonAsItem;
@property(nonatomic, readonly) long long tfn_preferredToolbarVisibility;
@property(nonatomic, readonly) _Bool addsDoneBarButtonButtonItemToNavigationBar;
- (id)initWithForm:(id)arg1 appearance:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithList:(id)arg1 bannerMediaURL:(id)arg2 account:(id)arg3;

@end

