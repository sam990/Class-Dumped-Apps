//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESSoundOutput-Protocol.h"

@class NSString;

@interface IESSoundOutput : NSObject <IESSoundOutput>
{
    struct IESSoundOutputBufferBlock *_bufferBlockHead;
    struct IESSoundOutputBufferBlock *_bufferBlockTail;
    float _volume;
}

+ (Class)tuneClassWithContext:(id)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) struct IESSoundOutputBufferBlock *bufferBlockTail; // @synthesize bufferBlockTail=_bufferBlockTail;
@property(nonatomic) struct IESSoundOutputBufferBlock *bufferBlockHead; // @synthesize bufferBlockHead=_bufferBlockHead;
- (void)stop;
- (void)reset;
- (void)play;
- (void)pause;
- (_Bool)setup;
- (void)enqueueBuffer:(struct AudioQueueBuffer *)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
