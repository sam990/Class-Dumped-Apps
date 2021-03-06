//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEBaseCell.h"

@class UIImageView, UILabel, UIStackView;

@interface HMESettingsListBannerView : HMEBaseCell
{
    long long _bannerViewStyle;
    UIImageView *_leadingIconImageView;
    UILabel *_textLabel;
    UIImageView *_trailingIconImageView;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIImageView *trailingIconImageView; // @synthesize trailingIconImageView=_trailingIconImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *leadingIconImageView; // @synthesize leadingIconImageView=_leadingIconImageView;
@property(readonly, nonatomic) long long bannerViewStyle; // @synthesize bannerViewStyle=_bannerViewStyle;
- (void).cxx_destruct;
- (void)setupAccessibility;
- (void)setupUnsupportedCameraStyleWithFrame:(struct CGRect)arg1;
- (void)setupBannerWithFrame:(struct CGRect)arg1 bannerViewStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

