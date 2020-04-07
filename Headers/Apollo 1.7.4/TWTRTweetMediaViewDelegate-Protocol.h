//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterKit/NSObject-Protocol.h>

@class TWTRTweetMediaEntity, TWTRTweetMediaView, TWTRVideoPlaybackConfiguration, UIViewController;

@protocol TWTRTweetMediaViewDelegate <NSObject>

@optional
- (void)tweetMediaView:(TWTRTweetMediaView *)arg1 didChangePlaybackState:(long long)arg2;
- (void)tweetMediaView:(TWTRTweetMediaView *)arg1 didPresentVideoPlayerForMediaEntity:(TWTRTweetMediaEntity *)arg2;
- (void)tweetMediaView:(TWTRTweetMediaView *)arg1 didPresentImageViewerForMediaEntity:(TWTRTweetMediaEntity *)arg2;
- (void)mediaViewDidSelectNonEmbeddableVideo:(TWTRTweetMediaView *)arg1;
- (UIViewController *)viewControllerToPresentFromTweetMediaView:(TWTRTweetMediaView *)arg1;
- (_Bool)tweetMediaView:(TWTRTweetMediaView *)arg1 shouldPresentVideoForConfiguration:(TWTRVideoPlaybackConfiguration *)arg2;
- (_Bool)tweetMediaView:(TWTRTweetMediaView *)arg1 shouldPresentImageForMediaEntity:(TWTRTweetMediaEntity *)arg2;
@end
