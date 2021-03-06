//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSURL, YTApiaryResourceParser, YTHotConfig, YTInnerTubeRequestor, YTPlayerRequestFactory;
@protocol YTFetcherService, YTPlayerServiceConfig;

@interface YTPlayerService : NSObject
{
    YTApiaryResourceParser *_resourceParser;
    YTPlayerRequestFactory *_requestFactory;
    YTInnerTubeRequestor *_requestor;
    id <YTPlayerServiceConfig> _config;
    YTHotConfig *_hotConfig;
    id <YTFetcherService> _prewarmFetcherService;
    double _lastPrewarmConnectionTime;
    NSURL *_prewarmHTTPConnectionURL;
    long long _prewarmHTTPConnectionCount;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)handleActionsFromPlayerResponse:(id)arg1;
- (void)prewarmHTTPConnections;
- (void)makePrefetchPlayerRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)makePlaybackRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makePlayerRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

