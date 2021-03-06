//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXMediaItem.h"

@class NSArray, NSDate, NSString;

@interface XBXMovie : XBXMediaItem
{
    int _reviewScore;
    NSDate *_releaseDate;
    NSString *_duration;
    NSString *_parentalRating;
    NSString *_previewUrl;
    NSString *_studio;
    NSArray *_reviews;
    NSArray *_providers;
    NSArray *_genres;
    NSArray *_roles;
    NSArray *_actors;
    NSArray *_writers;
    NSArray *_airings;
}

@property(retain, nonatomic) NSArray *airings; // @synthesize airings=_airings;
@property(retain, nonatomic) NSArray *writers; // @synthesize writers=_writers;
@property(retain, nonatomic) NSArray *actors; // @synthesize actors=_actors;
@property(retain, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) NSArray *reviews; // @synthesize reviews=_reviews;
@property(nonatomic) int reviewScore; // @synthesize reviewScore=_reviewScore;
@property(copy, nonatomic) NSString *studio; // @synthesize studio=_studio;
@property(copy, nonatomic) NSString *previewUrl; // @synthesize previewUrl=_previewUrl;
@property(copy, nonatomic) NSString *parentalRating; // @synthesize parentalRating=_parentalRating;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getProvidersIfApplicable;

@end

