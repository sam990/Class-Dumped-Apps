//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSString, YTICommand, YTPlayerTransition;
@protocol YTLatencyTickLoggerProtocol;

@interface YTReelWatchTransition : NSObject
{
    GIMMe *_gimme;
    YTICommand *_navigationEndpoint;
    YTPlayerTransition *_playerTransition;
    NSString *_videoID;
    id <YTLatencyTickLoggerProtocol> _watchLatencyTickLogger;
}

@property(readonly, nonatomic) id <YTLatencyTickLoggerProtocol> watchLatencyTickLogger; // @synthesize watchLatencyTickLogger=_watchLatencyTickLogger;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) YTPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
@property(readonly, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)initWithNavEndpoint:(id)arg1 playerResponseOverride:(id)arg2 latencyLogger:(id)arg3;

@end
