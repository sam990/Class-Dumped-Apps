//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TwitterAVCore/TAVPlaybackObserver-Protocol.h>

@class CADisplayLink, UILabel;
@protocol TAVPlayerView;

@interface TAVPlayerViewDebugOverlay : UIView <TAVPlaybackObserver>
{
    _Bool _needsUpdate;
    id <TAVPlayerView> _playerView;
    UILabel *_summaryLabel;
    UILabel *_rpoLabel;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) UILabel *rpoLabel; // @synthesize rpoLabel=_rpoLabel;
@property(readonly, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(nonatomic) __weak id <TAVPlayerView> playerView; // @synthesize playerView=_playerView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observerDidAttachToPlayer:(id)arg1;
- (void)observerDidDetachFromPlayer:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)private_updateSummaryLabel;
- (void)private_updateRPOLabel;
- (void)private_updateIfNeeded;
- (void)private_displayLinkTick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

