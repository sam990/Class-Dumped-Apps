//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/FBMPSingleInput.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface FBMPCaptureEventInput : FBMPSingleInput
{
    struct mutex _productionQueueMutex;
    NSObject<OS_dispatch_queue> *_productionQueue;
}

+ (id)new;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (void)produceCaptureEventOfType:(unsigned char)arg1;
- (id)init;

@end

