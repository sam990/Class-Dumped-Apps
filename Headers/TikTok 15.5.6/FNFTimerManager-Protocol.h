//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol FNFTimer, OS_dispatch_queue;

@protocol FNFTimerManager <NSObject>
- (id <FNFTimer>)createTimerWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 block:(void (^)(void))arg4;
@end

