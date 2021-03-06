//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGFeedVideoStateManager : NSObject
{
    NSMutableDictionary *_states;
    NSMutableDictionary *_startTimes;
}

- (void).cxx_destruct;
- (void)_setStartTime:(double)arg1 forVideo:(id)arg2;
- (double)startTimeForVideo:(id)arg1;
- (void)resetStartTimeForVideo:(id)arg1;
- (void)updateStartTimeToCurrentTimeForVideo:(id)arg1;
- (_Bool)videoShouldRestartOnPlay:(id)arg1;
- (_Bool)videoSupportsVideoStitching:(id)arg1;
- (id)videoViewForVideo:(id)arg1;
- (id)playerForKey:(struct NSNumber *)arg1;
- (id)playerForVideo:(id)arg1;
- (struct NSNumber *)keyForVideo:(id)arg1;
- (id)videoForKey:(struct NSNumber *)arg1;
- (id)allManagedVideoKeys;
- (void)removeManagedObjectsForKey:(struct NSNumber *)arg1;
- (void)removeManagedObjectsForVideo:(id)arg1;
- (void)managePlayer:(id)arg1 videoView:(id)arg2 forVideo:(id)arg3 supportsVideoStitching:(_Bool)arg4 restartAfterTime:(id)arg5;
- (id)init;

@end

