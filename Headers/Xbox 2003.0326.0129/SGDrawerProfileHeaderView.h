//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SGGamerPicImageView, UILabel, XBXGamerProfile, XBXGradientView;

@interface SGDrawerProfileHeaderView : UIView
{
    XBXGamerProfile *_gamerProfile;
    UILabel *_gamerTagLabel;
    UILabel *_gamerScoreLabel;
    UILabel *_gamerScoreIconLabel;
    SGGamerPicImageView *_asyncImageView;
    XBXGradientView *_backgroundView;
}

@property(retain, nonatomic) XBXGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SGGamerPicImageView *asyncImageView; // @synthesize asyncImageView=_asyncImageView;
@property(retain, nonatomic) UILabel *gamerScoreIconLabel; // @synthesize gamerScoreIconLabel=_gamerScoreIconLabel;
@property(retain, nonatomic) UILabel *gamerScoreLabel; // @synthesize gamerScoreLabel=_gamerScoreLabel;
@property(retain, nonatomic) UILabel *gamerTagLabel; // @synthesize gamerTagLabel=_gamerTagLabel;
@property(retain, nonatomic) XBXGamerProfile *gamerProfile; // @synthesize gamerProfile=_gamerProfile;
- (void).cxx_destruct;
- (void)setHeaderView:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)deselectRow;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)accessibilityFrame;
@property(nonatomic) double voiceOverFrameWidth;

@end

