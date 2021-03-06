//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImageFetchDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface TFNTwitterMultiResolutionImageSourceExternalURLs : NSObject <TIPImageFetchDelegate>
{
    NSArray *_ascendingKeys;
    NSMutableDictionary *_sources;
    NSString *_imageID;
}

@property(copy, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
- (void).cxx_destruct;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadPreviewImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_fetchImageForURL:(id)arg1 enablePreview:(_Bool)arg2 dimensions:(struct CGSize)arg3 imagePipeline:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchImageForSize:(struct CGSize)arg1 enablePreview:(_Bool)arg2 imagePipeline:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_urlStringForDimensions:(struct CGSize)arg1;
- (_Bool)shouldRefetchWhenResizedFromDimensions:(struct CGSize)arg1 toDimensions:(struct CGSize)arg2;
- (void)_indexKeysFromSources;
- (id)initWithSourcesDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

