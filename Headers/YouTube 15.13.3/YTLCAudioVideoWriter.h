//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

@interface YTLCAudioVideoWriter : NSObject
{
    _Bool _receivedFirstVideoFrame;
    _Bool _ending;
    int _width;
    int _height;
    int _videoBitrate;
    int _audioSampleRate;
    int _audioBitrate;
    int _audioChannels;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInputPixelBufferAdaptor *_pixelAdaptor;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_videoInput;
}

@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelAdaptor; // @synthesize pixelAdaptor=_pixelAdaptor;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(readonly, getter=isEnding) _Bool ending; // @synthesize ending=_ending;
@property(readonly, nonatomic, getter=hasReceivedFirstVideoFrame) _Bool receivedFirstVideoFrame; // @synthesize receivedFirstVideoFrame=_receivedFirstVideoFrame;
- (void).cxx_destruct;
- (_Bool)isWriting;
- (int)setUpVideoInput;
- (int)setUpAudioInput;
- (int)initAssetWriterWithFilePath:(id)arg1;
@property(readonly, nonatomic) int state;
- (int)pushVideoFrame:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (int)pushAudioBufferWithMemoryBlock:(void *)arg1 blockSize:(unsigned long long)arg2 numberOfSamples:(int)arg3 audioFormat:(struct AudioStreamBasicDescription)arg4 time:(CDStruct_1b6d18a9)arg5;
- (void)cancelSession;
- (void)endSessionWithCallback:(CDUnknownBlockType)arg1;
- (int)startSessionWithFilePath:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 videoBitrate:(int)arg3 audioSampleRate:(int)arg4 audioBitrate:(int)arg5 audioChannels:(int)arg6;

@end
