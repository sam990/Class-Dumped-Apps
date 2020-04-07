//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTPlayerPrebufferController;

@interface YTSingleVideoControllerFactory : NSObject
{
    YTPlayerPrebufferController *_prebufferController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)createVideoControllerWithInterstitial:(id)arg1 replayPolicy:(int)arg2 playbackPlacement:(int)arg3 contentPlaybackData:(id)arg4;
- (id)singleVideoControllerWithInterstitial:(id)arg1 replayPolicy:(int)arg2 playbackPlacement:(int)arg3 contentPlaybackData:(id)arg4;
- (id)singleVideoControllerWithPlaybackData:(id)arg1 initialTime:(id)arg2;
- (id)singleVideoControllerWithSingleVideo:(id)arg1;
- (id)init;

@end
