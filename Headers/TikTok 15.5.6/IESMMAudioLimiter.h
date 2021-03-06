//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEAudioEffectBase.h"

@interface IESMMAudioLimiter : VEAudioEffectBase
{
    struct CLimiter *_limiter;
    struct unique_ptr<mammon::Effect, std::__1::default_delete<mammon::Effect>> _limitProcessor;
    int _channels;
    float _volume;
}

@property(nonatomic) float volume; // @synthesize volume=_volume;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)updateWithConfig:(id)arg1;
- (void)processStereo:(float **)arg1 samplesPerCh:(int)arg2;
- (void)dealloc;
- (id)initWithChannels:(int)arg1 sampleRate:(int)arg2;
- (id)init;

@end

