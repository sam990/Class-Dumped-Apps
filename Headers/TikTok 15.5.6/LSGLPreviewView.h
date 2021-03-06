//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LSGLInput-Protocol.h"

@class CAEAGLLayer, LSGLContext, LSGLFramebuffer, LSGLProgram, NSString;

@interface LSGLPreviewView : UIView <LSGLInput>
{
    unsigned long long inputRotation;
    CAEAGLLayer *_eaglLayer;
    struct CGRect _viewBound;
    LSGLFramebuffer *inputFramebufferForDisplay;
    unsigned int displayFramebuffer;
    unsigned int displayRenderbuffer;
    LSGLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize inputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize boundsSizeAtFrameBufferEpoch;
    _Bool _enabled;
    _Bool _clearBeforeRender;
    _Bool _first_frame_rendered;
    unsigned long long _fillMode;
    LSGLContext *_context;
    CDUnknownBlockType _firstFrameRenderCallback;
    CDUnknownBlockType _renderCallback;
    unsigned long long _aspectRatio;
    struct CGSize _sizeInPixels;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
+ (Class)layerClass;
@property(nonatomic) unsigned long long aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy, nonatomic) CDUnknownBlockType renderCallback; // @synthesize renderCallback=_renderCallback;
@property(copy, nonatomic) CDUnknownBlockType firstFrameRenderCallback; // @synthesize firstFrameRenderCallback=_firstFrameRenderCallback;
@property(retain, nonatomic) LSGLContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool first_frame_rendered; // @synthesize first_frame_rendered=_first_frame_rendered;
@property(nonatomic) _Bool clearBeforeRender; // @synthesize clearBeforeRender=_clearBeforeRender;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (void).cxx_destruct;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setClearColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)presentFramebuffer;
- (void)setDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)createDisplayFramebuffer;
- (void)layoutSubviews;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

