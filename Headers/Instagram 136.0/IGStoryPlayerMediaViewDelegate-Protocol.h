//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGFNFVideoPlayer, IGImageRequestSummary, IGImageURL, IGVideoCaptionController, NSError, NSNumber, NSString, UIView;
@protocol IGStoryPlayerMediaViewType;

@protocol IGStoryPlayerMediaViewDelegate <NSObject>
- (void)storyPlayerMediaView:(UIView<IGStoryPlayerMediaViewType> *)arg1 willLoadURL:(IGImageURL *)arg2;
- (void)storyPlayerMediaView:(UIView<IGStoryPlayerMediaViewType> *)arg1 didGenerateVideoPlaybackWarningWithError:(NSError *)arg2;
- (void)storyPlayerMediaViewDidFailToPlayback:(UIView<IGStoryPlayerMediaViewType> *)arg1 error:(NSError *)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(UIView<IGStoryPlayerMediaViewType> *)arg1 error:(NSError *)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
- (void)storyPlayerMediaViewDidPlay:(UIView<IGStoryPlayerMediaViewType> *)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(UIView<IGStoryPlayerMediaViewType> *)arg1;
- (void)storyPlayerMediaViewDidLoad:(UIView<IGStoryPlayerMediaViewType> *)arg1 loadSource:(NSString *)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
- (void)storyPlayerMediaViewDidLoadPreview:(UIView<IGStoryPlayerMediaViewType> *)arg1 progressiveJPEGScanNumber:(NSNumber *)arg2;
- (void)storyPlayerMediaView:(UIView<IGStoryPlayerMediaViewType> *)arg1 didUpdateProgress:(double)arg2 player:(IGFNFVideoPlayer *)arg3 captionController:(IGVideoCaptionController *)arg4;
- (void)storyPlayerMediaViewDidPlayToEnd:(UIView<IGStoryPlayerMediaViewType> *)arg1;
@end

