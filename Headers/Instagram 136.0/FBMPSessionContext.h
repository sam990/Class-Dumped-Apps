//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGLContext, FBGLContextProvider, FBVideoProcessor;
@protocol OS_dispatch_queue;

@interface FBMPSessionContext : NSObject
{
    _Bool _sessionRunning;
    struct FBIGLActivations _iglActivations;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
}

@property(readonly, nonatomic) struct FBIGLActivations iglActivations; // @synthesize iglActivations=_iglActivations;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(nonatomic, getter=isSessionRunning) _Bool sessionRunning; // @synthesize sessionRunning=_sessionRunning;
- (void).cxx_destruct;
- (id)initWithVideoDataQueue:(id)arg1 audioDataQueue:(id)arg2 iglActivations:(struct FBIGLActivations)arg3;
@property(readonly, nonatomic) FBGLContextProvider *GLContextProvider;
@property(readonly, nonatomic) FBGLContext *GLContext;
@property(readonly, nonatomic) FBVideoProcessor *processor;

@end

