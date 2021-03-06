//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTLProbeClient/FTLProbeFetcher-Protocol.h>
#import <FTLProbeClient/NSURLSessionTaskDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface FTLProbeURLSessionFetcher : NSObject <FTLProbeFetcher, NSURLSessionTaskDelegate>
{
    NSURLSession *_session;
    NSMutableDictionary *_taskMetrics;
}

@property(retain, nonatomic) NSMutableDictionary *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)fetchURL:(id)arg1 withTimeout:(double)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createURLSession;
- (id)createURLSessionOperationQueue;
- (id)createURLSessionConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

