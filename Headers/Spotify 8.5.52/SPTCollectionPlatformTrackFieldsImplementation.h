//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformTrackFields-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface SPTCollectionPlatformTrackFieldsImplementation : NSObject <SPTCollectionPlatformTrackFields>
{
    _Bool _inCollection;
    _Bool _isBanned;
    _Bool _isExplicit;
    _Bool _is19PlusOnly;
    _Bool _isLocalTrack;
    _Bool _isPlayable;
    _Bool _isLocallyPlayable;
    _Bool _isPlayStatePlayable;
    _Bool _isPremiumOnly;
    NSString *_name;
    NSURL *_URL;
    NSDate *_addTime;
    unsigned long long _discNumber;
    unsigned long long _trackNumber;
    NSArray *_artists;
    NSString *_albumName;
    NSString *_albumArtistName;
    NSURL *_albumArtistURL;
    NSURL *_albumURL;
    NSDictionary *_albumCovers;
    unsigned long long _offlineState;
    unsigned long long _playStateRestriction;
    NSString *_previewId;
}

@property(copy, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(nonatomic) _Bool isPremiumOnly; // @synthesize isPremiumOnly=_isPremiumOnly;
@property(nonatomic) _Bool isPlayStatePlayable; // @synthesize isPlayStatePlayable=_isPlayStatePlayable;
@property(nonatomic) _Bool isLocallyPlayable; // @synthesize isLocallyPlayable=_isLocallyPlayable;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) _Bool isLocalTrack; // @synthesize isLocalTrack=_isLocalTrack;
@property(nonatomic) _Bool is19PlusOnly; // @synthesize is19PlusOnly=_is19PlusOnly;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned=_isBanned;
@property(nonatomic) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(nonatomic) unsigned long long playStateRestriction; // @synthesize playStateRestriction=_playStateRestriction;
@property(nonatomic) unsigned long long offlineState; // @synthesize offlineState=_offlineState;
@property(copy, nonatomic) NSDictionary *albumCovers; // @synthesize albumCovers=_albumCovers;
@property(retain, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(retain, nonatomic) NSURL *albumArtistURL; // @synthesize albumArtistURL=_albumArtistURL;
@property(copy, nonatomic) NSString *albumArtistName; // @synthesize albumArtistName=_albumArtistName;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(nonatomic) unsigned long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) unsigned long long discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) NSDate *addTime; // @synthesize addTime=_addTime;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
