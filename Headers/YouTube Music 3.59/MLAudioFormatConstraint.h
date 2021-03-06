//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLAudioFormatConstraint-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"

@class MLAudioQualityConfig, NSString, YTIAudioTrack, YTReachabilityController;

@interface MLAudioFormatConstraint : NSObject <MLAudioFormatConstraint, YTReachabilityObserver>
{
    YTReachabilityController *_reachability;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _onWiFi
    MLAudioQualityConfig *_audioQualityConfig;
    YTIAudioTrack *_audioTrack;
    long long _formatSelectionReason;
}

@property(readonly, nonatomic) long long formatSelectionReason; // @synthesize formatSelectionReason=_formatSelectionReason;
@property(readonly, nonatomic) YTIAudioTrack *audioTrack; // @synthesize audioTrack=_audioTrack;
@property(readonly, nonatomic) MLAudioQualityConfig *audioQualityConfig; // @synthesize audioQualityConfig=_audioQualityConfig;
- (void).cxx_destruct;
- (void)reachabilityDidChange;
- (id)filterFormats:(id)arg1;
@property(readonly, nonatomic) _Bool disableTrack;
- (id)initWithAudioTrack:(id)arg1 audioQualityConfig:(id)arg2 formatSelectionReason:(long long)arg3 gimme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

