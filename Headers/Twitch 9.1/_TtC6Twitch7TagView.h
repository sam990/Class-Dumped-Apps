//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWThemeableView.h>

@class NSArray, TWAnalyticsPropertyBag;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch7TagView : TWThemeableView
{
    // Error parsing type: , name: tags
    // Error parsing type: , name: shouldAnimateNextTagUpdate
    // Error parsing type: , name: analyticsProperties
    // Error parsing type: , name: style
    // Error parsing type: , name: delegate
    // Error parsing type: , name: verticalMarginTop
    // Error parsing type: , name: verticalMarginBottom
    // Error parsing type: , name: containerScrollView
    // Error parsing type: , name: buttons
    // Error parsing type: , name: totalWidth
    // Error parsing type: , name: buttonPool
    // Error parsing type: , name: $__lazy_storage_$_intrinsicHeight
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 themeManager:(id)arg2;
- (void)buttonWasTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithThemeManager:(id)arg1 topMargin:(double)arg2 bottomMargin:(double)arg3;
@property(nonatomic, retain) TWAnalyticsPropertyBag *analyticsProperties; // @synthesize analyticsProperties;
@property(nonatomic, copy) NSArray *tags;

@end

