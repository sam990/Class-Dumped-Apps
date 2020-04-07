//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary, NSString;
@protocol YTReelItemWatchFetcherDelegate;

@interface YTReelItemWatchFetcher : NSObject
{
    NSString *_playlistID;
    NSString *_playerParams;
    NSMutableDictionary *_watchResponseCache;
    NSMutableDictionary *_currentFetches;
    GIMMe *_gimme;
    id <YTReelItemWatchFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <YTReelItemWatchFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)completeFetchWithClipIndex:(unsigned long long)arg1 isPrefetch:(_Bool)arg2 response:(id)arg3 error:(id)arg4;
- (id)playbackContext;
- (id)watchRequestForClipAtIndex:(unsigned long long)arg1 disablePlayerResponse:(_Bool)arg2 withEndpoint:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)fetchWatchResponseForClipAtIndex:(unsigned long long)arg1 withEndpoint:(id)arg2 isPrefetch:(_Bool)arg3 disablePlayerResponse:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithPlaylistID:(id)arg1 playerParams:(id)arg2;

@end
