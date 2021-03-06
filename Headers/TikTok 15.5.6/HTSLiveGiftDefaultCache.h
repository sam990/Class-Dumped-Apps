//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveGiftCache-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HTSLiveGiftDefaultCache : NSObject <HTSLiveGiftCache>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_designatedPath;
}

@property(copy, nonatomic) NSString *designatedPath; // @synthesize designatedPath=_designatedPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (id)getPathWithId:(id)arg1;
- (void)setPath:(id)arg1 forId:(id)arg2;
- (id)giftMd5PathWithModel:(id)arg1;
- (id)giftResourcePathWithGiftID:(id)arg1;
- (id)cachePath;
- (void)deleteResourceIfNeeded:(id)arg1;
- (id)getSupportGifts;
- (void)syncGiftStorageWithGifts:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 designatedPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

