//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSNumber, NSString;

@interface AWEEffectArtistDataController : AWEListDataController
{
    long long _count;
    NSNumber *_cursor;
    NSString *_userID;
}

@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (_Bool)canLoadMore;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserID:(id)arg1;

@end
