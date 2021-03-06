//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGlassContainerView.h>

#import "YTSuggestedActionViewDelegate-Protocol.h"

@class NSString, YTISuggestedActionRenderer, YTSuggestedActionView;
@protocol YTSuggestedActionsViewDelegate;

@interface YTSuggestedActionsView : YTGlassContainerView <YTSuggestedActionViewDelegate>
{
    YTISuggestedActionRenderer *_currentSuggestedActionRenderer;
    int _playerViewLayout;
    double _playerBarBottomOffset;
    YTSuggestedActionView *_suggestedActionView;
    id <YTSuggestedActionsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTSuggestedActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTSuggestedActionView *suggestedActionView; // @synthesize suggestedActionView=_suggestedActionView;
- (void).cxx_destruct;
- (void)didTapDismissForSuggestedActionView:(id)arg1;
- (void)didTapSuggestedActionView:(id)arg1;
- (void)setPlayerBarBottomOffset:(double)arg1;
- (void)layoutSubviews;
- (void)setPlayerViewLayout:(int)arg1;
- (void)dismissSuggestedAction;
- (void)showSuggestedActionWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

