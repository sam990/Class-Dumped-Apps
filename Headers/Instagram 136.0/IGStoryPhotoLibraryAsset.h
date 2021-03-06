//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryMediaAsset-Protocol.h>

@class NSString, PHAsset, UIImage;

@interface IGStoryPhotoLibraryAsset : NSObject <IGStoryMediaAsset>
{
    UIImage *_previewImage;
    PHAsset *_phAsset;
}

@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (void)fetchSampleBufferOfSize:(struct CGSize)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)fetchPhotoBoothAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchBoomerangAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchImageOfSize:(struct CGSize)arg1 atTime:(CDStruct_1b6d18a9)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)fetchVideoWithResultHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) long long assetType;
@property(readonly, nonatomic) struct CGSize mediaSize;
- (id)initWithPhotoLibraryAsset:(id)arg1 previewImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

