//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGImageView, IGStoryGradientRingView;

@interface IGStoryViewerMusicSheetSongArtButton : IGBouncyButton
{
    _Bool _ringViewVisible;
    IGImageView *_artImageView;
    IGStoryGradientRingView *_ringView;
}

@property(nonatomic) _Bool ringViewVisible; // @synthesize ringViewVisible=_ringViewVisible;
@property(readonly, nonatomic) IGStoryGradientRingView *ringView; // @synthesize ringView=_ringView;
@property(readonly, nonatomic) IGImageView *artImageView; // @synthesize artImageView=_artImageView;
- (void).cxx_destruct;
- (void)setRingViewVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

