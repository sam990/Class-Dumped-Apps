//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString, TVDIAnalyticsScribeMediaEventType, TVDIAnalyticsScribePlayerState, TVDIAnalyticsScribePlayingMediaState, TVDIAnalyticsScribeSessionState;

@interface TVDIAnalyticsScribeClientMediaEvent : NSObject <TBase, NSCoding>
{
    _Bool _mediaClientEventTypeIsSet;
    _Bool _sessionStateIsSet;
    _Bool _playingMediaStateIsSet;
    _Bool _playerStateIsSet;
    TVDIAnalyticsScribeMediaEventType *_mediaClientEventType;
    TVDIAnalyticsScribeSessionState *_sessionState;
    TVDIAnalyticsScribePlayingMediaState *_playingMediaState;
    TVDIAnalyticsScribePlayerState *_playerState;
}

+ (id)instanceWithMediaClientEventType:(id)arg1 sessionState:(id)arg2 playingMediaState:(id)arg3 playerState:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool playerStateIsSet; // @synthesize playerStateIsSet=_playerStateIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) _Bool playingMediaStateIsSet; // @synthesize playingMediaStateIsSet=_playingMediaStateIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayingMediaState *playingMediaState; // @synthesize playingMediaState=_playingMediaState;
@property(readonly, nonatomic) _Bool sessionStateIsSet; // @synthesize sessionStateIsSet=_sessionStateIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) _Bool mediaClientEventTypeIsSet; // @synthesize mediaClientEventTypeIsSet=_mediaClientEventTypeIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeMediaEventType *mediaClientEventType; // @synthesize mediaClientEventType=_mediaClientEventType;
- (id)validateNonOptionalFields;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaClientEventType:(id)arg1 sessionState:(id)arg2 playingMediaState:(id)arg3 playerState:(id)arg4;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

