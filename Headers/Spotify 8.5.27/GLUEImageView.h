//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "GLUEReusable-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUEImageStyle, NSString, UIImage;
@protocol GLUECancellableTask, GLUEImageLoader, GLUEImageViewDelegate;

@interface GLUEImageView : UIImageView <GLUEStyleable, GLUEReusable>
{
    id <GLUEImageViewDelegate> _delegate;
    GLUEImageStyle *_style;
    double _loadingDurationThreshold;
    id <GLUEImageLoader> _imageLoader;
    UIImage *_placeholderImage;
    id <GLUECancellableTask> _imageLoaderTask;
}

@property(retain, nonatomic) id <GLUECancellableTask> imageLoaderTask; // @synthesize imageLoaderTask=_imageLoaderTask;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) double loadingDurationThreshold; // @synthesize loadingDurationThreshold=_loadingDurationThreshold;
@property(copy, nonatomic) GLUEImageStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <GLUEImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)cancelLoading;
- (void)setImageViewURL:(id)arg1 placeholderImage:(id)arg2 imageSize:(struct CGSize)arg3 animationPolicy:(long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)setImageViewURL:(id)arg1 imageSize:(struct CGSize)arg2 animationPolicy:(long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)applyMask;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageLoader:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
