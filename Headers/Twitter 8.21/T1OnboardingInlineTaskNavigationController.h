//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1OnboardingNavigationStack-Protocol.h>
#import <T1Twitter/T1TimelinesHostedViewController-Protocol.h>

@class NSArray, NSString, T1OnboardingFlowController, T1OnboardingPresenter, UIViewController;
@protocol TFNLayoutMetricsSizing;

@interface T1OnboardingInlineTaskNavigationController : TFNViewController <T1OnboardingNavigationStack, T1TimelinesHostedViewController>
{
    T1OnboardingFlowController *_flowController;
    T1OnboardingPresenter *_presenter;
    UIViewController<TFNLayoutMetricsSizing> *_viewController;
    NSString *_hostedItemIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hostedItemIdentifier; // @synthesize hostedItemIdentifier=_hostedItemIdentifier;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (_Bool)shouldPushViewController:(id)arg1 fromPresentationType:(long long)arg2 toPresentationType:(long long)arg3;
- (void)private_performAsyncCompletion:(CDUnknownBlockType)arg1;
- (id)popToRootAndPushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)popToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)replaceTopViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(readonly, nonatomic) NSArray *viewControllers;
- (void)private_addViewControllerView;
- (void)viewDidLoad;
- (id)initWithInlineTask:(id)arg1 service:(id)arg2 account:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

