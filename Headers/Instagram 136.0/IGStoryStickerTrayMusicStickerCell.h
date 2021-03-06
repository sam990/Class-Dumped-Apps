//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, IGStoryMusicAnimatedAudioIndicatorBars_DEPRECATED, UIImageView, UILabel, UIView;

@interface IGStoryStickerTrayMusicStickerCell : UICollectionViewCell
{
    CAShapeLayer *_backdropLayer;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientWrapperView;
    UIView *_gradientMaskView;
    UIImageView *_musicIconImageView;
    IGStoryMusicAnimatedAudioIndicatorBars_DEPRECATED *_audioIndicatorBars;
    UILabel *_label;
    _Bool _showMusicIcon;
    _Bool _showAudioIndicatorBars;
}

@property(nonatomic, getter=isShowingAudioIndicatorBars) _Bool showAudioIndicatorBars; // @synthesize showAudioIndicatorBars=_showAudioIndicatorBars;
@property(nonatomic, getter=isShowingMusicIcon) _Bool showMusicIcon; // @synthesize showMusicIcon=_showMusicIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

