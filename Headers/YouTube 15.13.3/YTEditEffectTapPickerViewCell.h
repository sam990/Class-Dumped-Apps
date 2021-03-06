//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GIMMe, QTMActivityIndicator, UIImageView, UIView, UIVisualEffectView, YTFormattedStringLabel, YTIFormattedString;

@interface YTEditEffectTapPickerViewCell : UICollectionViewCell
{
    YTFormattedStringLabel *_effectNameLabel;
    UIView *_thumbnailContainerView;
    QTMActivityIndicator *_activityIndicator;
    UIImageView *_configureIcon;
    UIVisualEffectView *_blurCover;
    _Bool _shouldShowDisplayTitle;
    _Bool _showLoading;
    _Bool _showConfigurationIconOnSelection;
    GIMMe *_gimme;
    YTIFormattedString *_displayTitle;
    UIImageView *_thumbnailImageView;
}

+ (struct CGSize)thumbnailSize;
+ (struct CGSize)cellSizeWithLabel:(_Bool)arg1;
@property(nonatomic) _Bool showConfigurationIconOnSelection; // @synthesize showConfigurationIconOnSelection=_showConfigurationIconOnSelection;
@property(nonatomic) _Bool showLoading; // @synthesize showLoading=_showLoading;
@property(readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) _Bool shouldShowDisplayTitle; // @synthesize shouldShowDisplayTitle=_shouldShowDisplayTitle;
@property(retain, nonatomic) YTIFormattedString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateConfigurationIconForSelectedState:(_Bool)arg1;
- (void)maybeCreateActivityIndicator;
- (void)setUpEffectNameLabel;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect)labelFrame;
- (struct CGRect)thumbnailContainerFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

