//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTExpandablePromosheetDelegate-Protocol.h>

@class NSString, YTQTMButton;
@protocol YTPromosheetContainerViewAccessibilityDelegate;

@interface YTPromosheetContainerView : UIView <YTExpandablePromosheetDelegate>
{
    UIView *_shadowView;
    UIView *_circleView;
    UIView *_containerView;
    YTQTMButton *_expandArrow;
    _Bool _shouldLeadAlignPromosheets;
    _Bool _promosheetDisplayed;
    UIView *_promosheet;
    double _bottomOffset;
    double _horizontalOffset;
    id <YTPromosheetContainerViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic, getter=isPromosheetDisplayed) _Bool promosheetDisplayed; // @synthesize promosheetDisplayed=_promosheetDisplayed;
@property(nonatomic) _Bool shouldLeadAlignPromosheets; // @synthesize shouldLeadAlignPromosheets=_shouldLeadAlignPromosheets;
@property(nonatomic) __weak id <YTPromosheetContainerViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property(retain, nonatomic) UIView *promosheet; // @synthesize promosheet=_promosheet;
- (void).cxx_destruct;
- (void)notifyPromosheetIfTouchedOutside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animatePromosheetDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (void)animatePromosheetPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowExpandButton;
- (void)shrinkPromosheet;
- (void)expandPromosheet;
- (void)updateAccessibilityElements;
- (_Bool)accessibilityPerformEscape;
- (void)expandPromosheetWithPanGesture:(id)arg1;
- (void)didTapCollapsedView;
- (void)layoutSubviews;
- (void)setPromosheet:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)promoSheetShadowRadius;
- (double)promosheetCornerRadius;
- (double)promosheetShadowVerticalOffset;
- (double)promosheetMarginBottom;
- (double)promosheetMarginHorizontal;
- (double)maxPromosheetWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
