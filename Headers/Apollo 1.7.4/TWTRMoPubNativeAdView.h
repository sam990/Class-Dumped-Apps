//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TwitterKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface TWTRMoPubNativeAdView : UIView <UIGestureRecognizerDelegate>
{
    UILabel *_titleTextLabel;
    UILabel *_mainTextLabel;
    UILabel *_callToActionTextLabel;
    UIImageView *_iconImageView;
    UIImageView *_mainImageView;
    UIColor *_savedCallToActionBackgroundColor;
}

@property(retain, nonatomic) UIColor *savedCallToActionBackgroundColor; // @synthesize savedCallToActionBackgroundColor=_savedCallToActionBackgroundColor;
@property(readonly, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *callToActionTextLabel; // @synthesize callToActionTextLabel=_callToActionTextLabel;
@property(readonly, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
@property(readonly, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void).cxx_destruct;
- (id)subviewsMapping;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPressCTA:(id)arg1;
- (void)prepareCTAGestureRecognizer;
- (void)layoutSubviews;
- (void)prepareCallToAction;
- (void)prepareTextContent;
- (void)prepareIcon;
- (void)prepareImageHeader;
- (void)prepareLayout;
- (_Bool)isAccessibilityElement;
- (void)setUpAccessibility;
- (id)accessibilityLabel;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
