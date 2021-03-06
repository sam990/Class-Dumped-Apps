//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEGradientStyle, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, UIColor, UIImageView, UIStackView;
@protocol GLUETheme;

@interface SPTFreeTierArtistFullBleedHeaderView : UIView
{
    _Bool _sizeChanged;
    _Bool _hasAdjustedTitleLabelFont;
    UIView *_actionButtonView;
    UIImageView *_backgroundImageView;
    UIView *_backgroundImageViewContainerView;
    GLUEGradientView *_backgroundGradientView;
    UIStackView *_labelContainerView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_navigationBarLabel;
    id <GLUETheme> _theme;
    GLUEGradientStyle *_gradientStyle;
    UIColor *_gradientColor;
    NSLayoutConstraint *_imageViewCenterYConstraint;
}

@property(nonatomic) _Bool hasAdjustedTitleLabelFont; // @synthesize hasAdjustedTitleLabelFont=_hasAdjustedTitleLabelFont;
@property(retain, nonatomic) NSLayoutConstraint *imageViewCenterYConstraint; // @synthesize imageViewCenterYConstraint=_imageViewCenterYConstraint;
@property(nonatomic) _Bool sizeChanged; // @synthesize sizeChanged=_sizeChanged;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
@property(retain, nonatomic) GLUEGradientStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUELabel *navigationBarLabel; // @synthesize navigationBarLabel=_navigationBarLabel;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) UIView *backgroundImageViewContainerView; // @synthesize backgroundImageViewContainerView=_backgroundImageViewContainerView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *actionButtonView; // @synthesize actionButtonView=_actionButtonView;
- (void).cxx_destruct;
- (double)gradientParameterForGradientFrom:(double)arg1 to:(double)arg2 cutoff:(double)arg3 parameter:(double)arg4;
- (double)alphaForGradientColorWithParameter:(double)arg1;
- (double)locationForGradientColorWithParameter:(double)arg1;
- (double)getNormalizedHeightWithCurrentHeight:(double)arg1 minHeight:(double)arg2 maxHeight:(double)arg3;
- (double)alphaForHeaderTitleWithParameter:(double)arg1 cutoff:(double)arg2;
- (double)alphaForNavigationBarTitleWithParameter:(double)arg1 cutoff:(double)arg2;
- (double)reverseAnimationParameter:(double)arg1;
@property(readonly, nonatomic) double actionButtonHeight;
- (double)maximumHeight;
- (double)minimumHeight;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (double)imageViewOffset;
- (void)setBackgroundImage:(id)arg1;
@property(copy, nonatomic) NSString *navigationBarTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (_Bool)hasMultipleWords:(id)arg1;
- (void)adjustTitleLabelFontIfNeeded;
- (void)applyGradientStyle;
- (void)applyTitleOnNavigationBarStyle;
- (void)applySubtitleStyle;
- (void)applyTitleStyle;
- (void)applyStyles;
- (void)setupConstraints;
- (void)setupNavigationBarLabel;
- (void)setupLabelStackView;
- (void)setupBackgroundView;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

