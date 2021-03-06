//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAsset.h>

@class NSMutableArray, NSURL, TFNTwitterVideoSegmentManager, UIImage;

@interface TFNTwitterMediaAssetVideoCapture : TFNTwitterMediaAsset
{
    TFNTwitterVideoSegmentManager *_segmentManager;
    double _duration;
    UIImage *_cachedPreview;
    NSMutableArray *_exportHandlers;
    long long _exportState;
    NSURL *_exportURL;
    NSMutableArray *_previewHandlers;
    long long _previewState;
    long long _saveState;
}

- (void).cxx_destruct;
@property(nonatomic) long long saveState; // @synthesize saveState=_saveState;
@property(nonatomic) long long previewState; // @synthesize previewState=_previewState;
@property(readonly, nonatomic) NSMutableArray *previewHandlers; // @synthesize previewHandlers=_previewHandlers;
@property(retain, nonatomic) NSURL *exportURL; // @synthesize exportURL=_exportURL;
@property(nonatomic) long long exportState; // @synthesize exportState=_exportState;
@property(readonly, nonatomic) NSMutableArray *exportHandlers; // @synthesize exportHandlers=_exportHandlers;
@property(retain, nonatomic) UIImage *cachedPreview; // @synthesize cachedPreview=_cachedPreview;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) TFNTwitterVideoSegmentManager *segmentManager; // @synthesize segmentManager=_segmentManager;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_saveToLibraryIfNecessary:(id)arg1;
- (void)_exportSegmentedCompositionWithCompletion:(CDUnknownBlockType)arg1;
- (void)renderFinalDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)deprecatedPreview;
- (void)_didUpdatePreview:(id)arg1 withOptions:(id)arg2;
- (void)renderPreviewWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)estimatedPreviewSizeThatFits:(struct CGSize)arg1;
- (unsigned long long)attachmentType;
- (struct CGSize)assetDimensions;
- (void)encodeWithCoder:(id)arg1;
- (void)_twitterMediaAssetVideoCaptureInitializer;
- (id)initWithCoder:(id)arg1;
- (id)initWithSegmentManager:(id)arg1;

@end

