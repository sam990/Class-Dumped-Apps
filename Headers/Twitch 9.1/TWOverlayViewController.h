//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TWOverlayViewControllerContentHeaderView, UITapGestureRecognizer, UIViewController;
@protocol TWOverlayContentViewControllerProtocol, TWOverlayViewControllerInteractionProtocol;

__attribute__((visibility("hidden")))
@interface TWOverlayViewController : TWBaseViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    id <TWOverlayViewControllerInteractionProtocol> _interactionDelegate;
    TWOverlayViewControllerContentHeaderView *_contentHeaderView;
    UITapGestureRecognizer *_tapGesture;
    UIViewController<TWOverlayContentViewControllerProtocol> *_contentViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController<TWOverlayContentViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)applyTheme:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapReceived:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setContentOnScreen;
- (void)setContentOffscreen;
- (void)setContentSize;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)initWithInteractionDelegate:(id)arg1 themeManager:(id)arg2 contentViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

