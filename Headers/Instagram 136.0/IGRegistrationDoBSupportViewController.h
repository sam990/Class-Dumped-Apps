//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGRegistrationDoBSupportContainerViewDelegate-Protocol.h>

@class IGRegistrationDoBSupportContainerView, IGRegistrationLogger, NSString;

@interface IGRegistrationDoBSupportViewController : IGViewController <IGRegistrationDoBSupportContainerViewDelegate>
{
    IGRegistrationDoBSupportContainerView *_containerView;
    IGRegistrationLogger *_logger;
}

- (void).cxx_destruct;
- (void)_closeButtonTapped;
- (void)dobSupportContainerViewDidTapInfoLink:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

