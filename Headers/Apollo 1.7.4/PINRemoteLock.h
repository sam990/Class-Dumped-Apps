//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PINRemoteLock : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

- (void)unlock;
- (void)lock;
- (void)lockWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 lockType:(unsigned long long)arg2;
- (id)init;

@end
