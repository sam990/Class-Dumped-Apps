//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWThemeableView.h>

#import "TWBroadcastArchivePlayerInteractionDelegate-Protocol.h"
#import "TWBroadcastTextViewInteractionProtocol-Protocol.h"

@class NSObject, NSString, TWBroadcastArchivePlayerView, TWBroadcastTextView, TWPaddedLabel, TWPostBroadcastArchiveHeaderView, _TtC9TwitchKit4User, _TtC9TwitchKit5Video;
@protocol TWPostBroadcastArchiveViewInteractionDelegate;

__attribute__((visibility("hidden")))
@interface TWPostBroadcastArchiveView : TWThemeableView <TWBroadcastTextViewInteractionProtocol, TWBroadcastArchivePlayerInteractionDelegate>
{
    _TtC9TwitchKit5Video *_video;
    _TtC9TwitchKit4User *_user;
    TWPostBroadcastArchiveHeaderView *_headerView;
    TWBroadcastTextView *_titleView;
    TWPaddedLabel *_gameLabel;
    TWBroadcastArchivePlayerView *_archivePlayerView;
    NSObject<TWPostBroadcastArchiveViewInteractionDelegate> *_interactionDelegate;
}

- (void).cxx_destruct;
- (void)applyTheme:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)pointInsideTitleView:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSString *archiveTitle;
@property(nonatomic) CDStruct_1b6d18a9 position;
- (void)pause;
- (void)play;
- (void)broadcastArchivePlayerView:(id)arg1 didSeekToPosition:(CDStruct_1b6d18a9)arg2;
- (void)broadcastArchivePlayerViewDidTapPlayPauseButton:(id)arg1;
- (void)broadcastTextViewDidBeginEditing:(id)arg1;
- (void)broadcastTextView:(id)arg1 didChangeTitleTo:(id)arg2;
- (void)broadcastTextView:(id)arg1 didChangeContentHeight:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithVideo:(id)arg1 videoPlayerView:(id)arg2 user:(id)arg3 interactionDelegate:(id)arg4 themeManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

