//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingSendMessageCallback-Protocol.h"

@interface SCArroyoSendMessageCallback : NSObject <SCNMessagingSendMessageCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _queuedCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (void)onSuccess;
- (void)onQueued;
- (void)onError:(long long)arg1;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 queuedCallback:(CDUnknownBlockType)arg2 failureCallback:(CDUnknownBlockType)arg3;

@end
