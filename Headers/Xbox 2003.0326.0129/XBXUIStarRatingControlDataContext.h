//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

@interface XBXUIStarRatingControlDataContext : XBXDataContext
{
    _Bool _didRate;
    _Bool _allowRating;
    int _ratingCount;
    double _userRating;
    double _rating;
}

+ (id)createWithRatingAndCount:(double)arg1 ratingCount:(int)arg2;
+ (id)createWithRating:(double)arg1;
@property(nonatomic) int ratingCount; // @synthesize ratingCount=_ratingCount;
@property(nonatomic) _Bool allowRating; // @synthesize allowRating=_allowRating;
@property(nonatomic) _Bool didRate; // @synthesize didRate=_didRate;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) double userRating; // @synthesize userRating=_userRating;
- (void)updateRating:(double)arg1;

@end

