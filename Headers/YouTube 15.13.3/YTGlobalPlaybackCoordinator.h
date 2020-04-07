//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable;

@interface YTGlobalPlaybackCoordinator : NSObject
{
    GIMMe *_gimme;
    NSHashTable *_playbackGroups;
}

@property(retain, nonatomic) NSHashTable *playbackGroups; // @synthesize playbackGroups=_playbackGroups;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)releaseReusablePlayerInstance:(id)arg1;
- (id)getReusablePlayerForPlaybackGroup:(id)arg1 forResourcesUnit:(id)arg2;
- (void)notifyConditionsDidChangeForPlaybackGroup:(id)arg1;
- (void)unregisterPlaybackGroup:(id)arg1;
- (void)registerPlaybackGroup:(id)arg1;
- (id)init;

@end
