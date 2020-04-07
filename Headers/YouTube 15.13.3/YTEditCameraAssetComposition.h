//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditCompositionAsset-Protocol.h>

@class AVComposition, GIMMe, NSCountedSet, NSEnumerator, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSURL, UIImage, YTEditCameraAssetCompositionExporter;
@protocol OS_dispatch_queue;

@interface YTEditCameraAssetComposition : NSObject <YTEditCompositionAsset>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    unsigned long long _processID;
    NSMutableArray *_cameraAssets;
    NSMutableArray *_removedCameraAssets;
    NSMutableDictionary *_cachedAssets;
    NSMutableDictionary *_audioAssets;
    NSHashTable *_compositionObservers;
    YTEditCameraAssetCompositionExporter *_compositionExporter;
    NSError *_compositionError;
    CDStruct_1b6d18a9 _duration;
    _Bool _needsDurationUpdate;
    AVComposition *_debugComposition;
    GIMMe *_gimme;
    NSURL *_exportDirectory;
    NSCountedSet *_assetUseCounts;
}

@property(retain, nonatomic) NSCountedSet *assetUseCounts; // @synthesize assetUseCounts=_assetUseCounts;
@property(retain, nonatomic) NSURL *exportDirectory; // @synthesize exportDirectory=_exportDirectory;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)debugComposition;
- (id)emptyCompositionError;
- (id)exportCancelledError;
- (id)assetFailureErrorWithURL:(id)arg1;
- (id)exportErrorWithUnderlyingError:(id)arg1;
- (id)audioTrackForAsset:(id)arg1;
- (id)videoTrackForAsset:(id)arg1;
- (_Bool)appendTrack:(id)arg1 toCompositionTrack:(id)arg2 trackOffset:(CDStruct_1b6d18a9)arg3 duration:(CDStruct_1b6d18a9)arg4 atTime:(CDStruct_1b6d18a9)arg5 error:(id *)arg6;
- (_Bool)appendTrack:(id)arg1 toCompositionTrack:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 atTime:(CDStruct_1b6d18a9)arg4 error:(id *)arg5;
- (void)syncLoadTracksAndDurationForAsset:(id)arg1;
- (id)avAssetForCameraAsset:(id)arg1;
- (void)finishWithOutputURL:(id)arg1 success:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)buildCompositionForAsset:(id)arg1 processID:(unsigned long long)arg2;
- (void)rebuildComposition;
- (unsigned long long)safeGetProcessID;
- (unsigned long long)safeGetNextProcessID;
- (id)safeGetCameraAssets;
- (id)allSegments;
- (void)clearUndoStack;
- (void)removeLastCameraAsset;
- (void)addLastRemovedCameraAsset;
- (void)addCameraAsset:(id)arg1;
- (_Bool)insertAudioTracksIntoComposition:(id)arg1;
- (void)postUpdateNotification;
@property(readonly, nonatomic) NSEnumerator *segmentEnumerator;
- (void)exportCompositionWithCompletion:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)appendCameraAsset:(id)arg1;
- (void)removeCompositionObserver:(id)arg1;
- (void)addCompositionObserver:(id)arg1;
- (void)removeTrackWithTrackID:(id)arg1;
- (void)updateTrackOffsetForTrackID:(id)arg1 trackOffset:(CDStruct_1b6d18a9)arg2;
- (id)insertAudioTrack:(id)arg1 withTrackOffset:(CDStruct_1b6d18a9)arg2;
- (void)redo;
@property(readonly, nonatomic) _Bool canRedo;
- (void)undo;
@property(readonly, nonatomic) _Bool canUndo;
@property(readonly, nonatomic) _Bool isDurationValid;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) unsigned long long totalSegments;
@property(readonly, nonatomic) UIImage *previewImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
