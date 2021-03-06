//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaTranscoderInputType-Protocol.h>

@class AVAssetWriterInput, NSString;
@protocol IGSampleBufferProvider, OS_dispatch_queue;

@interface IGMediaTranscoderAudioInput : NSObject <IGMediaTranscoderInputType>
{
    AVAssetWriterInput *_assetWriterInput;
    id <IGSampleBufferProvider> _sampleBufferProvider;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly, nonatomic) id <IGSampleBufferProvider> sampleBufferProvider;
@property(readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
- (id)initWithAssetWriterInput:(id)arg1 sampleBufferProvider:(id)arg2 dispatchQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

