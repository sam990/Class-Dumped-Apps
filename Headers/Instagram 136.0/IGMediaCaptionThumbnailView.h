//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIView;

@interface IGMediaCaptionThumbnailView : UIImageView
{
    UIView *_playGlyphView;
    UIImageView *_playGlyphImageView;
    _Bool _showPlayGlyph;
    _Bool _pendingShowPlayGlyph;
    UIImageView *_sidecarImageView;
}

- (void).cxx_destruct;
- (void)_showPlayGlyph:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)showGlyphForMediaType:(long long)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

