//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSAbstractRenderer-Protocol.h"

@class GMSIOSGLContext, NSString, NSThread;
@protocol GMSPhoenixRenderBinSource, GMSRendererDelegate;

@interface GMSPhoenixRenderer : NSObject <GMSAbstractRenderer>
{
    struct unique_ptr<gmscore::renderer::Time, std::__1::default_delete<gmscore::renderer::Time>> _ownedTime;
    struct Time *_time;
    struct unique_ptr<gmscore::renderer::EntityRenderer, std::__1::default_delete<gmscore::renderer::EntityRenderer>> _renderer;
    id <GMSPhoenixRenderBinSource> _renderBinSource;
    reffed_ptr_e23c8d60 _renderTarget;
    NSThread *_renderingThread;
    GMSIOSGLContext *_context;
    id <GMSRendererDelegate> _delegate;
}

@property(nonatomic) __weak id <GMSRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)raiseDidEndFrame;
- (void)raiseWillBeginFrame;
- (double)framesPerSecond;
- (int)lastRenderUpdateFlags;
- (_Bool)drawForced:(_Bool)arg1;
- (_Bool)drawIfNeeded;
- (_Bool)draw;
- (void)tearDown;
- (void)setUp;
@property(readonly, nonatomic) struct Time *time;
@property(readonly, nonatomic) objc_metadata_hider_ptr_a1c2b231 renderer;
- (id)initWithRenderingThread:(id)arg1 context:(id)arg2 renderTarget:(reffed_ptr_e23c8d60)arg3 renderBinSource:(id)arg4 time:(struct Time *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

