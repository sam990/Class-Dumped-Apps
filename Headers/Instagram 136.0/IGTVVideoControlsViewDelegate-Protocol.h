//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGTVVideoControlsView;

@protocol IGTVVideoControlsViewDelegate <NSObject>
- (void)videoControlsViewDidPressExitLandscape:(IGTVVideoControlsView *)arg1;
- (void)videoControlsViewDidPressPlayPause:(IGTVVideoControlsView *)arg1;
- (void)videoControlsViewProgressScrubbingEnded:(IGTVVideoControlsView *)arg1;
- (void)videoControlsViewProgressScrubbingChanged:(IGTVVideoControlsView *)arg1;
- (void)videoControlsViewProgressScrubbingBegan:(IGTVVideoControlsView *)arg1;
@end

