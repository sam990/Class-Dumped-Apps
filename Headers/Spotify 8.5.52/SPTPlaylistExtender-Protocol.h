//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSURL;

@protocol SPTPlaylistExtender <NSObject>
- (void)fetchExtraTracksForPlaylistURL:(NSURL *)arg1 currentTracks:(NSArray *)arg2 numberOfResults:(unsigned long long)arg3 skipAlreadyFetchedTracks:(_Bool)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)discardCachedTracks:(NSArray *)arg1 forPlaylist:(NSURL *)arg2;
- (NSSet *)returnedTracksForPlaylistURL:(NSURL *)arg1;
- (NSArray *)cachedTracksForPlaylistURL:(NSURL *)arg1;
@end
