//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBARModelManager-Protocol.h>

@class NSString;

@interface FBARModelManagerCxx : NSObject <FBARModelManager>
{
    shared_ptr_78f6716f _modelManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abortAllPendingLoggingEvents;
- (id)fetchModelsWithCapabilitiesMinVersionModels:(const vector_82fe7ddd *)arg1 downloadPriority:(long long)arg2 loggingInfo:(id)arg3 callbackQueue:(id)arg4 progressCallback:(CDUnknownBlockType)arg5 completionCallback:(CDUnknownBlockType)arg6;
- (id)fetchLatestModelsForCapabilities:(const vector_6290d399 *)arg1 downloadPriority:(long long)arg2 loggingInfo:(id)arg3 callbackQueue:(id)arg4 completionCallback:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) shared_ptr_78f6716f modelManager;
- (id)initWithModelManagerCxx:(unique_ref_f5f3cdcf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

