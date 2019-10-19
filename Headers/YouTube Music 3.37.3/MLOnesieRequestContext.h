//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLPlayerStickySettings, MLQOEPingController, NSString, YTIIosPlaybackOnesieConfig;
@protocol MLViewportSizeProvider, YTLatencyTickLoggerProtocol;

@interface MLOnesieRequestContext : NSObject
{
    _Bool _bypassOnesie;
    int _visibility;
    YTIIosPlaybackOnesieConfig *_config;
    NSString *_CPN;
    NSString *_videoID;
    MLQOEPingController *_QOEController;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    id <YTLatencyTickLoggerProtocol> _latencyLogger;
    MLPlayerStickySettings *_stickySettings;
}

@property(nonatomic) _Bool bypassOnesie; // @synthesize bypassOnesie=_bypassOnesie;
@property(readonly, nonatomic) MLPlayerStickySettings *stickySettings; // @synthesize stickySettings=_stickySettings;
@property(readonly, nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) id <YTLatencyTickLoggerProtocol> latencyLogger; // @synthesize latencyLogger=_latencyLogger;
@property(readonly, nonatomic) id <MLViewportSizeProvider> viewportSizeProvider; // @synthesize viewportSizeProvider=_viewportSizeProvider;
@property(readonly, nonatomic) MLQOEPingController *QOEController; // @synthesize QOEController=_QOEController;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(readonly, nonatomic) YTIIosPlaybackOnesieConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1 CPN:(id)arg2 videoID:(id)arg3 QOEController:(id)arg4 viewportSizeProvider:(id)arg5 latencyLogger:(id)arg6 visibility:(int)arg7 stickySettings:(id)arg8;

@end
