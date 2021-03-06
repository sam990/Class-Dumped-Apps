//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBMPData-Protocol.h>

@class NSString;

@interface FBMPAudioData : NSObject <FBMPData>
{
    float _volumeLevel;
    struct opaqueCMSampleBuffer *_buffer;
}

@property(readonly, nonatomic) float volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(readonly, nonatomic) struct opaqueCMSampleBuffer *buffer; // @synthesize buffer=_buffer;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 volumeLevel:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

