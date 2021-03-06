//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTCollectionPlatform, SPTCollectionPlatformDataLoaderRequestToken;

@interface SPTFreeTierArtistLikedSongsModel : NSObject
{
    unsigned long long _likedTrackCount;
    NSURL *_collectionArtistUri;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformDataLoaderRequestToken> _trackToken;
    NSURL *_artistUri;
}

@property(readonly, nonatomic) NSURL *artistUri; // @synthesize artistUri=_artistUri;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> trackToken; // @synthesize trackToken=_trackToken;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) NSURL *collectionArtistUri; // @synthesize collectionArtistUri=_collectionArtistUri;
@property(nonatomic) unsigned long long likedTrackCount; // @synthesize likedTrackCount=_likedTrackCount;
- (void).cxx_destruct;
- (unsigned long long)getLikedTrackCount:(id)arg1;
- (void)fetchLikedTracks:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCollectionPlatform:(id)arg1 artistUri:(id)arg2 username:(id)arg3;

@end

