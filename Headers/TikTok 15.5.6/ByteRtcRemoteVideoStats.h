//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ByteRtcRemoteVideoStats : NSObject
{
    _Bool _isScreen;
    float _videoLossRate;
    float _receivedKBitrate;
    NSString *_uid;
    long long _width;
    long long _height;
    long long _receivedFrameRate;
    long long _decoderOutputFrameRate;
    long long _renderOutputFrameRate;
    long long _stallCount;
    long long _stallDuration;
    long long _e2eDelay;
    long long _statsInterval;
    long long _rtt;
}

@property(nonatomic) long long rtt; // @synthesize rtt=_rtt;
@property(nonatomic) long long statsInterval; // @synthesize statsInterval=_statsInterval;
@property(nonatomic) _Bool isScreen; // @synthesize isScreen=_isScreen;
@property(nonatomic) long long e2eDelay; // @synthesize e2eDelay=_e2eDelay;
@property(nonatomic) long long stallDuration; // @synthesize stallDuration=_stallDuration;
@property(nonatomic) long long stallCount; // @synthesize stallCount=_stallCount;
@property(nonatomic) long long renderOutputFrameRate; // @synthesize renderOutputFrameRate=_renderOutputFrameRate;
@property(nonatomic) long long decoderOutputFrameRate; // @synthesize decoderOutputFrameRate=_decoderOutputFrameRate;
@property(nonatomic) long long receivedFrameRate; // @synthesize receivedFrameRate=_receivedFrameRate;
@property(nonatomic) float receivedKBitrate; // @synthesize receivedKBitrate=_receivedKBitrate;
@property(nonatomic) float videoLossRate; // @synthesize videoLossRate=_videoLossRate;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

