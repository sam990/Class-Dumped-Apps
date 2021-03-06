//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FBAdWatchAndActionTopPanelCoverView : UIView
{
    UIImageView *_logoImageView;
    UILabel *_titleView;
    UILabel *_subtitleView;
}

@property(nonatomic) __weak UILabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(nonatomic) __weak UILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubtitleViewWithSubtitle:(id)arg1;
- (void)setupTitleViewWithTitle:(id)arg1;
- (void)setupLogoViewWithAdImage:(id)arg1;
- (void)setupViewsWithLogoImage:(id)arg1 mainTitle:(id)arg2 subtitle:(id)arg3;
- (id)initWithLogo:(id)arg1 mainTitle:(id)arg2 subtitle:(id)arg3;
- (id)init;

@end

