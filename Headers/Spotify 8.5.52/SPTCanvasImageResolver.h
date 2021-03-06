//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSCache, NSString, SPTCanvasArtistAvatarResolver;
@protocol SPTImageLoader;

@interface SPTCanvasImageResolver : NSObject <SPTImageLoaderDelegate>
{
    id <SPTImageLoader> _imageLoader;
    SPTCanvasArtistAvatarResolver *_avatarResolver;
    NSCache *_imageCache;
}

@property(readonly, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) SPTCanvasArtistAvatarResolver *avatarResolver; // @synthesize avatarResolver=_avatarResolver;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)requestImageWithType:(long long)arg1 forCanvas:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelRequests;
- (void)dealloc;
- (id)initWithImageLoaderFactory:(id)arg1 avatarResolver:(id)arg2 imageCache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

