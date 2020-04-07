//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

@class NSLock, NSOperationQueue;

@interface IDMapService : IDService
{
    NSLock *_mapOperationsQueueAccessLock;
    NSOperationQueue *_mapOperationsQueue;
}

@property(readonly) NSOperationQueue *mapOperationsQueue; // @synthesize mapOperationsQueue=_mapOperationsQueue;
@property(readonly) NSLock *mapOperationsQueueAccessLock; // @synthesize mapOperationsQueueAccessLock=_mapOperationsQueueAccessLock;
- (void).cxx_destruct;
- (void)treadSafeAddOperations:(id)arg1;
- (void)threadSafeAddOperation:(id)arg1;
- (void)session:(id)arg1 mapService:(long long)arg2 handleMapEvent:(id)arg3 transferId:(long long)arg4;
- (void)blockQueueUntilReadyEvent;
- (void)clearLocationHighlight;
- (void)highlightLocation:(id)arg1;
- (void)deleteOverlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)selectMapMode:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hideOverlay;
- (void)showOverlay;
- (void)importOverlayAfterDeletion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importOverlay:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2;

@end
