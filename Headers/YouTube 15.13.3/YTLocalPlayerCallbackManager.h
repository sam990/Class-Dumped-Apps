//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTPlayerCallbackManager-Protocol.h>
#import <Module_Framework/YTSingleVideoCurrentTimeSideEffectfulObserver-Protocol.h>

@class NSString, YTIntervalTree;
@protocol YTSingleVideoObservable;

@interface YTLocalPlayerCallbackManager : NSObject <YTSingleVideoCurrentTimeSideEffectfulObserver, YTPlayerCallbackManager>
{
    YTIntervalTree *_intervalTree;
    double _lastPosition;
    id <YTSingleVideoObservable> _activeVideo;
}

@property(retain, nonatomic) id <YTSingleVideoObservable> activeVideo; // @synthesize activeVideo=_activeVideo;
- (void).cxx_destruct;
- (void)enumerateCallbacksAtTime:(id)arg1;
- (void)potentiallyMutatedSingleVideo:(id)arg1 currentVideoTimeDidChange:(id)arg2;
- (void)removePlayerCallback:(id)arg1;
- (void)addPlayerCallback:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
