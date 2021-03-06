//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSGLContext, HTSGLFramebuffer, IESGLesPixelBuffRenderer;

@interface IESGLesTexture : NSObject
{
    unsigned int _textureID;
    HTSGLFramebuffer *_pixelBufferFrameBuffer;
    HTSGLContext *_context;
    IESGLesPixelBuffRenderer *_pixelBuffRenderer;
    struct CGSize _size;
}

+ (struct IESGLesTextureOptions)defaultTextureOptions;
@property(retain, nonatomic) IESGLesPixelBuffRenderer *pixelBuffRenderer; // @synthesize pixelBuffRenderer=_pixelBuffRenderer;
@property(nonatomic) __weak HTSGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) HTSGLFramebuffer *pixelBufferFrameBuffer; // @synthesize pixelBufferFrameBuffer=_pixelBufferFrameBuffer;
- (void).cxx_destruct;
- (void)deInit;
- (void)updateUIImage:(id)arg1 smoothlyScaleOutput:(_Bool)arg2 removePremultiplication:(_Bool)arg3;
- (void)updatePixelBuffer:(struct __CVBuffer *)arg1 isFullRange:(_Bool)arg2;
- (void)updateData:(char *)arg1 dataWidth:(int)arg2 dataHeight:(int)arg3 internalformat:(unsigned int)arg4 format:(unsigned int)arg5;
- (void)createTexture:(char *)arg1 dataWidth:(int)arg2 dataHeight:(int)arg3 internalformat:(unsigned int)arg4 format:(unsigned int)arg5;
- (void)createTexture:(id)arg1;
@property(readonly, nonatomic) unsigned int textureID; // @synthesize textureID=_textureID;
- (void)dealloc;
- (id)initWithContext:(id)arg1 uiImage:(id)arg2 smoothlyScaleOutput:(_Bool)arg3 removePremultiplication:(_Bool)arg4;
- (id)initWithContext:(id)arg1 uiImage:(id)arg2;
- (id)initWithContext:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 isFullRange:(_Bool)arg3;
- (id)initWithContext:(id)arg1 rgbaData:(id)arg2 dataWidth:(int)arg3 dataHeight:(int)arg4;
- (id)initWithContext:(id)arg1;

@end

