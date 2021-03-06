//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSBundle, NSCoder, NSObject, NSString;
@protocol OS_dispatch_queue, WASampleBufferDisplayViewDelegate;

@protocol WASampleBufferDisplayViewProtocol <NSObject>
@property(nonatomic) _Bool paused;
@property(nonatomic) __weak id <WASampleBufferDisplayViewDelegate> sampleBufferDisplayViewDelegate;
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property(readonly) long long status;
@property(readonly) struct OpaqueCMTimebase *controlTimebase;
- (void)moveToTime:(CDStruct_1b6d18a9)arg1;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (void)clearQueue;
- (void)removeFramesOlderThan:(CDStruct_1b6d18a9)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithNibName:(NSString *)arg1 bundle:(NSBundle *)arg2;
- (id)initWithCoder:(NSCoder *)arg1;
- (id)init;
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1;
@end

