//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PTVReplayChunk;

@interface PTVReplayChunkPlaylist : NSObject
{
    PTVReplayChunk *_dummyChunkForSearch;
    NSArray *_chunks;
}

+ (CDUnknownBlockType)ComparatorForReplayChunks;
@property(readonly, nonatomic) NSArray *chunks; // @synthesize chunks=_chunks;
- (void).cxx_destruct;
- (void)preloadThumbnails;
- (id)closestLoadedChunkWithClosestIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfChunkClosestToVideoPosition:(double)arg1;
- (void)getPreLoadedAndBestThumbnailForVideoPosition:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fixChunksWithNoTime:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
