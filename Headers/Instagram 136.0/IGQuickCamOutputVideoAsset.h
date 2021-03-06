//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGQuickCamOutputAsset-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoRendererDelegate-Protocol.h>

@class IGVideoInfo, IGVideoRenderer, NSData, NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface IGQuickCamOutputVideoAsset : NSObject <IGQuickCamOutputAsset, IGVideoRendererDelegate>
{
    _Bool _isLandscape;
    UIImage *_originalImage;
    UIImage *_displayImage;
    UIImage *_displayImageWithEdits;
    UIImage *_croppedImage;
    UIImage *_croppedImageWithEdits;
    long long _flashMode;
    NSDate *_creationDate;
    long long _assetSource;
    NSString *_sourceApplication;
    NSDictionary *_metadata;
    unsigned long long _faceDetectionState;
    IGVideoInfo *_videoInfo;
    CDUnknownBlockType _completionBlock;
    NSURL *_exportedMediaURL;
    IGVideoRenderer *_videoRenderer;
    struct CGSize _originalMediaSize;
}

@property(retain, nonatomic) IGVideoRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(retain, nonatomic) NSURL *exportedMediaURL; // @synthesize exportedMediaURL=_exportedMediaURL;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) unsigned long long faceDetectionState; // @synthesize faceDetectionState=_faceDetectionState;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) struct CGSize originalMediaSize; // @synthesize originalMediaSize=_originalMediaSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(retain, nonatomic) UIImage *croppedImageWithEdits; // @synthesize croppedImageWithEdits=_croppedImageWithEdits;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(retain, nonatomic) UIImage *displayImageWithEdits; // @synthesize displayImageWithEdits=_displayImageWithEdits;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void).cxx_destruct;
- (void)_onAppForeground;
- (void)_onAppBackground;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(struct CGSize)arg3 canceled:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isPhoto;
- (void)applyCropRectToClips:(struct CGRect)arg1;
@property(readonly, nonatomic) NSData *videoData;
- (void)trimVideoToDuration:(double)arg1;
- (void)trimVideoWithAmountTrimmedFromStart:(double)arg1 amountTrimmedFromEnd:(double)arg2;
- (void)prepareVideoDataForExportWithCompletion:(CDUnknownBlockType)arg1 userSession:(id)arg2;
- (long long)devicePosition;
- (id)lastClip;
- (id)firstClip;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

