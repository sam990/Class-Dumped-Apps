//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMMediaSourceDelegate-Protocol.h"

@class AVAudioFormat, HAMAudioPCMBuffer;
@protocol HAMAudioPCMBufferSource;

@protocol HAMAudioPCMBufferSourceDelegate <HAMMediaSourceDelegate>
- (void)audioPCMBufferSource:(id <HAMAudioPCMBufferSource>)arg1 audioFormatWillChange:(AVAudioFormat *)arg2;
- (void)audioPCMBufferSource:(id <HAMAudioPCMBufferSource>)arg1 didDecodeAudioPCMBuffer:(HAMAudioPCMBuffer *)arg2;
@end

