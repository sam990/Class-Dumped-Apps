//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"

@class NSString, UIControl, YTFormattedStringLabel, YTQTMButton;

@interface YTLinkSubMenuView : UIView <YTPageStyling>
{
    YTFormattedStringLabel *_titleLabel;
    UIView *_separator;
    UIControl *_titleLabelHitTarget;
    YTQTMButton *_linkButton;
}

+ (double)contentPaddingX;
@property(retain, nonatomic) YTQTMButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) UIControl *titleLabelHitTarget; // @synthesize titleLabelHitTarget=_titleLabelHitTarget;
- (void).cxx_destruct;
- (void)titleLabelTouchDown;
- (void)titleLabelTouchUp;
- (void)resetTapLinkButtonTarget;
- (void)resetTapTitleTextTarget;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTapTitleTextTarget:(id)arg1 action:(SEL)arg2;
- (void)setTapLinkTextTarget:(id)arg1 action:(SEL)arg2;
- (void)setLinkText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
