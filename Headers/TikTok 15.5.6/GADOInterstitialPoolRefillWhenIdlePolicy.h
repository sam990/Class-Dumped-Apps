//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOInterstitialPoolGroupRefillPolicy.h"

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface GADOInterstitialPoolRefillWhenIdlePolicy : GADOInterstitialPoolGroupRefillPolicy
{
    id _adRequestCountObserver;
    id _videoBufferingStartObserver;
    id _videoBufferingStopObserver;
    NSMutableSet *_bufferingVideoPlayerIdentifiers;
    NSObject<OS_dispatch_queue> *_bufferLockQueue;
}

- (void).cxx_destruct;
- (void)fillPools;
- (void)interstitialPoolDidRemoveEntry:(id)arg1;
- (void)addPool:(id)arg1;
- (void)dealloc;
- (id)init;

@end

