//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/UITableViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDelegate-Protocol.h>

@class IGBottomButtonsView, IGMonetizationProductOnboardingIntroductionViewHeaderView, IGMonetizationProductOnboardingIntroductionViewModel, NSString, UITableView;
@protocol IGMonetizationProductOnboardingIntroductionViewDelegate;

@interface IGMonetizationProductOnboardingIntroductionView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    IGMonetizationProductOnboardingIntroductionViewHeaderView *_headerview;
    IGBottomButtonsView *_bottomButtons;
    id <IGMonetizationProductOnboardingIntroductionViewDelegate> _delegate;
    IGMonetizationProductOnboardingIntroductionViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_didTapLearnMoreButtonURL;
- (void)_didTapCTAButton;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

