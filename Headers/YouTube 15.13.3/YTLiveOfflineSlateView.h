//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGlassContainerView.h>

#import <Module_Framework/YTResponder-Protocol.h>

@class NSString, UIView, YTLiveOfflineSlateFooterView;
@protocol YTResponder;

@interface YTLiveOfflineSlateView : YTGlassContainerView <YTResponder>
{
    UIView *_expandedView;
    YTLiveOfflineSlateFooterView *_footerView;
    int _offlineSlateStyle;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)hideButtons;
- (void)setOfflineSlateStyle:(int)arg1;
- (void)setReplayButtonAndHideSetReminderButton:(id)arg1;
- (void)setSetReminderButtonAndHideReplayButton:(id)arg1;
- (void)setCountdownSeconds:(double)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

