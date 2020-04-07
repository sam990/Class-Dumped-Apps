//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTReelItemWatchFetcherDelegate-Protocol.h"

@class GIMMe, NSDate, NSHashTable, NSMutableDictionary, NSString, YTICommand, YTReelItemWatchFetcher, YTReelPlayerResponder, YTReelWatchLikesController, YTSubscribeSwitchController;
@protocol YTReelResumeDataStoreProtocol;

@interface YTReelModel : NSObject <YTReelItemWatchFetcherDelegate>
{
    NSDate *_loadDate;
    NSObject<YTReelResumeDataStoreProtocol> *_resumeDataStore;
    YTReelItemWatchFetcher *_itemWatchFetcher;
    NSHashTable *_observers;
    NSMutableDictionary *_indexToClipMap;
    GIMMe *_gimme;
    unsigned long long _numClips;
    YTICommand *_command;
    YTReelWatchLikesController *_watchLikesController;
    YTSubscribeSwitchController *_subscribeSwitchController;
    YTReelPlayerResponder *_reelPlayerResponder;
    NSString *_onesieVideoID;
}

@property(retain, nonatomic) NSString *onesieVideoID; // @synthesize onesieVideoID=_onesieVideoID;
@property(retain, nonatomic) YTReelPlayerResponder *reelPlayerResponder; // @synthesize reelPlayerResponder=_reelPlayerResponder;
@property(retain, nonatomic) YTSubscribeSwitchController *subscribeSwitchController; // @synthesize subscribeSwitchController=_subscribeSwitchController;
@property(retain, nonatomic) YTReelWatchLikesController *watchLikesController; // @synthesize watchLikesController=_watchLikesController;
@property(readonly, nonatomic) YTICommand *command; // @synthesize command=_command;
@property(readonly, nonatomic) unsigned long long numClips; // @synthesize numClips=_numClips;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)setEndpoint:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)getEndpointAtIndex:(unsigned long long)arg1;
- (id)getClipAtIndex:(unsigned long long)arg1;
- (void)seedEndpointFromOldIndex:(unsigned long long)arg1 toNewIndex:(unsigned long long)arg2;
- (void)checkForModelChangeWithClipIndex:(unsigned long long *)arg1 progressRenderer:(id)arg2;
- (void)reelItemWatchFetcher:(id)arg1 didReceiveResponse:(id)arg2 forClipAtIndex:(unsigned long long)arg3;
- (void)removeReelModelObserver:(id)arg1;
- (void)addReelModelObserver:(id)arg1;
- (void)setLastWatchedClipIndex:(unsigned long long)arg1;
- (void)fetchThumbnailForClipAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchWatchResponseForClipAtIndex:(unsigned long long)arg1 isPrefetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)endpointForClipAtIndex:(unsigned long long)arg1;
- (void)removeEndpointForClipAtIndex:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) int style;
@property(readonly, nonatomic, getter=isVerticalLayout) _Bool verticalLayout;
@property(readonly, nonatomic, getter=isShortVideo) _Bool shortVideo;
@property(readonly, nonatomic) unsigned long long startIndex;
- (id)initWithCommand:(id)arg1 loadDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
