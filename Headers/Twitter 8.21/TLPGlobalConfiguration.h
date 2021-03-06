//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface TLPGlobalConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableIndexSet *_disabledEvents;
    _Bool _enabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isEventTypeEnabled:(long long)arg1;
- (void)enableEventsWithType:(long long)arg1;
- (void)disableEventsWithType:(long long)arg1;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initInternal;

@end

