//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNTwitterAccount;

@interface TFNTwitterListList : NSObject
{
    struct {
        unsigned int loadingNext:1;
        unsigned int isAtEnd:1;
        unsigned int isReloading:1;
    } _listListFlags;
    _Bool _useCachedListData;
    TFNTwitterAccount *_account;
    NSString *_nextCursor;
    NSString *_previousCursor;
    NSArray *_lists;
}

@property(nonatomic) _Bool useCachedListData; // @synthesize useCachedListData=_useCachedListData;
@property(retain, nonatomic) NSArray *lists; // @synthesize lists=_lists;
@property(copy, nonatomic) NSString *previousCursor; // @synthesize previousCursor=_previousCursor;
@property(copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_dummyListOfType:(long long)arg1;
- (_Bool)isEmpty;
- (void)_addLists:(id)arg1;
- (void)_loadNext;
- (void)loadNext;
- (void)markAtEnd;
- (void)loadNextWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)removeList:(id)arg1;
- (void)addList:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end
