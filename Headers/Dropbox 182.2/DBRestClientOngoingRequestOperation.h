//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DBRestClientRequest, NSObject;
@protocol OS_dispatch_semaphore;

@interface DBRestClientOngoingRequestOperation : NSOperation
{
    DBRestClientRequest *_request;
    NSObject<OS_dispatch_semaphore> *_requestSemaphore;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)arg1 requestCompletionSemaphore:(id)arg2;

@end

