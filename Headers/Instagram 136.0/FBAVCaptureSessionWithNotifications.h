//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureSession.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface FBAVCaptureSessionWithNotifications : AVCaptureSession
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logname;
}

@property(readonly, copy, nonatomic) NSString *logname; // @synthesize logname=_logname;
- (void).cxx_destruct;
- (void)removeInput:(id)arg1;
- (void)addInput:(id)arg1;
- (id)initWithLogname:(id)arg1;

@end

