//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNShimsDispatchQueue-Protocol.h"

@protocol OS_dispatch_queue;

@interface SCDispatchQueue : NSObject <SCNShimsDispatchQueue>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)submitWithDelay:(id)arg1 delayMs:(long long)arg2;
- (void)submit:(id)arg1;
- (id)initWithName:(id)arg1;

@end
