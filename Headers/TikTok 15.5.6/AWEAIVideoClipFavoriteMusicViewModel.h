//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate-Protocol.h"

@class AWEVideoPublishMusicSelectUserCollectionsReqeustManager, NSMutableArray, NSString;

@interface AWEAIVideoClipFavoriteMusicViewModel : NSObject <AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate>
{
    _Bool _isRefetching;
    NSMutableArray *_musicList;
    AWEVideoPublishMusicSelectUserCollectionsReqeustManager *_requestManager;
}

@property(nonatomic) _Bool isRefetching; // @synthesize isRefetching=_isRefetching;
@property(retain, nonatomic) AWEVideoPublishMusicSelectUserCollectionsReqeustManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
- (void).cxx_destruct;
- (void)retryFetchFirstPage;
- (void)fetchNextPage:(CDUnknownBlockType)arg1;
- (_Bool)hasMore;
- (_Bool)isProcessingFetchingData;
- (void)resetData;
- (id)generateMusicListWithRspModel:(id)arg1;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

