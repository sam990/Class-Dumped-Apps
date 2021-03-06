//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceProximityBag;

@interface DeviceProximityManager : NSObject
{
    DeviceProximityBag *_subscribers;
    _Bool _proximityState;
    _Bool _globallyEnabled;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)updateState:(_Bool)arg1 globallyEnabled:(_Bool)arg2;
- (void)remove:(long long)arg1;
- (long long)add:(CDUnknownBlockType)arg1;
- (void)setGloballyEnabled:(_Bool)arg1;
- (id)init;
- (_Bool)currentValue;

@end

