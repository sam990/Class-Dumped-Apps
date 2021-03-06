//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTPlayerTrack;
@protocol SPTNowPlayingFeedbackManagerObserver;

@protocol SPTNowPlayingFeedbackManager <NSObject>
@property(readonly, nonatomic, getter=isFinite) _Bool finite;
- (void)undoPositiveSongFeedbackForTrack:(SPTPlayerTrack *)arg1 contextURL:(NSURL *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)undoNegativeArtistFeedbackForTrack:(SPTPlayerTrack *)arg1 contextURL:(NSURL *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)undoNegativeSongFeedbackForTrack:(SPTPlayerTrack *)arg1 contextURL:(NSURL *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)removeObserver:(id <SPTNowPlayingFeedbackManagerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingFeedbackManagerObserver>)arg1;
@end

