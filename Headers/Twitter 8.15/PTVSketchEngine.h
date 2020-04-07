//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVSketchPointReceivable-Protocol.h>
#import <PeriscopeSDK/PTVVideoProcessorEntity-Protocol.h>

@class NSMutableArray, NSString, PTVVideoProcessorContext;
@protocol MTLBuffer, MTLRenderPipelineState, MTLTexture;

@interface PTVSketchEngine : NSObject <PTVSketchPointReceivable, PTVVideoProcessorEntity>
{
    CDStruct_a94ba806 _points[100000];
    int _indexOfFirstLivingPoint;
    int _indexToInsertNewPoints;
    id <MTLBuffer> _vertexBuffers[1];
    id <MTLBuffer> _uniformBuffers[3];
    id <MTLTexture> _metalBrushTexture;
    _Bool _isDrawing;
    float _pointScale;
    PTVVideoProcessorContext *_videoProcessorContext;
    NSMutableArray *_pointQueue;
    id <MTLRenderPipelineState> _pipelineState;
}

@property(retain, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) NSMutableArray *pointQueue; // @synthesize pointQueue=_pointQueue;
@property(nonatomic) float pointScale; // @synthesize pointScale=_pointScale;
@property(readonly, nonatomic) PTVVideoProcessorContext *videoProcessorContext; // @synthesize videoProcessorContext=_videoProcessorContext;
- (void).cxx_destruct;
- (void)copyPointsIntoCurrentVertexBuffer;
-     // Error parsing type: v128@0:8^{?=fffffffff}16Q24@32@40@48{?=[4]}56d120, name: renderPoints:length:toMetalTexture:commandBuffer:inContext:withViewportTransform:pointScale:
-     // Error parsing type: v112@0:8@16@24@32{?=[4]}40d104, name: renderToMetalTexture:commandBuffer:inContext:withViewportTransform:pointScale:
-     // Error parsing type: v104@0:8@16@24@32{?=[4]}40, name: renderToMetalTexture:commandBuffer:inContext:withViewportTransform:
- (void)loadMetal;
- (void)finishDrawing;
- (void)finishDrawingIfNeeded;
- (void)startDrawingIfNeeded;
- (void)incrementPointAges;
- (int)numberOfLivingPoints;
- (void)_clearCanvasOnRenderQueueAnimated:(_Bool)arg1;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)_enqueueSketchPointsOnRenderQueue:(id)arg1;
- (void)enqueueSketchPoints:(id)arg1;
@property(readonly, nonatomic) _Bool needsToDraw;
- (void)renderPassDidComplete;
- (void)tickWithPassageOfTime:(double)arg1;
- (id)initWithVideoProcessorContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
