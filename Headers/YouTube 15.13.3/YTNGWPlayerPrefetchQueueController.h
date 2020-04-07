//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHotConfigObserver-Protocol.h"
#import "YTNGWatchQueueObserver-Protocol.h"
#import "YTPlayerPrefetchQueueProtocol-Protocol.h"

@class GIMMe, NSString, YTHotConfig, YTPlayerPrefetchQueueController;

@interface YTNGWPlayerPrefetchQueueController : NSObject <YTHotConfigObserver, YTPlayerPrefetchQueueProtocol, YTNGWatchQueueObserver>
{
    YTHotConfig *_hotConfig;
    YTPlayerPrefetchQueueController *_playerPrefetchQueueController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updatePlayerPrefetchQueueControllerConfig;
- (void)hotConfigDidChange:(id)arg1;
- (void)playbackControllerContentMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)setMediaStickySettings:(id)arg1;
- (void)clearQueue;
- (void)userDidSwipePrevious;
- (void)userDidSwipeNext;
- (void)updateQueue:(id)arg1 currentIndex:(long long)arg2;
- (void)currentContentVideoMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
