//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/FBVideoTranscoderOutputAdapter-Protocol.h>
#import <Core/WAVideoTranscoderProtocol-Protocol.h>

@class AVAsset, AVAssetExportSession, AVVideoComposition, FBVideoSegmentedTranscoder, NSError, NSString, NSURL, WAVideoTranscoderDescriptor;
@protocol OS_dispatch_queue;

@interface WAVideoSegmentedTranscoder : NSObject <FBVideoTranscoderOutputAdapter, WAVideoTranscoderProtocol>
{
    FBVideoSegmentedTranscoder *_transcoder;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    WAVideoTranscoderDescriptor *_descriptor;
    AVAssetExportSession *_passThroughExportSession;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_exportQueue;
    unsigned long long _bgTask;
    _Bool _cancelExportRequested;
    _Bool _isMultiPassEnabled;
    _Bool _isPassThrough;
    float _progress;
    long long _status;
    NSError *_error;
    double _exportedDuration;
    unsigned long long _exportedFileSize;
    double _exportedVideoBitrate;
    double _exportedAudioBitrate;
    double _exportedFrameRate;
    struct CGSize _exportedVideoSize;
}

+ (void)transcodeToMpeg4IfNeededForVideoAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double exportedFrameRate; // @synthesize exportedFrameRate=_exportedFrameRate;
@property(readonly, nonatomic) double exportedAudioBitrate; // @synthesize exportedAudioBitrate=_exportedAudioBitrate;
@property(readonly, nonatomic) double exportedVideoBitrate; // @synthesize exportedVideoBitrate=_exportedVideoBitrate;
@property(readonly, nonatomic) struct CGSize exportedVideoSize; // @synthesize exportedVideoSize=_exportedVideoSize;
@property(readonly, nonatomic) _Bool isPassThrough; // @synthesize isPassThrough=_isPassThrough;
@property(readonly, nonatomic) unsigned long long exportedFileSize; // @synthesize exportedFileSize=_exportedFileSize;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) double exportedDuration; // @synthesize exportedDuration=_exportedDuration;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)configFromAsset:(id)arg1 transcodeSize:(struct CGSize)arg2 descriptor:(id)arg3;
- (id)editsForAsset:(id)arg1 descriptor:(id)arg2 videoComposition:(id)arg3;
- (void)_finishUp;
- (void)_transcoderDidFinishExportingWithCancellation:(_Bool)arg1;
- (void)_abortWithError:(id)arg1;
- (void)_tagAsGifIfNeeded;
- (void)_transcode;
- (void)_reallyPassthrough;
- (void)_passthrough;
- (void)_passthroughExportForVideoOnlyNonTrimmedMedia;
- (void)transcoderDidCancelExport;
- (id)URLForSegmentWithType:(unsigned long long)arg1 index:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool containsVideoComposition;
@property(readonly, copy, nonatomic) NSURL *outputURL;
- (void)cancelExport;
- (void)internalExportAsynchronouslyForbidPassThrough:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportWithoutPassthroughAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 descriptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

