//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMResourceKey;

@interface ASMHeartbeat : NSObject
{
    int _currentHeartbeatTime;
    int _nextHeartbeatTime;
    ASMResourceKey *_screenKey;
}

@property(readonly, nonatomic) int nextHeartbeatTime; // @synthesize nextHeartbeatTime=_nextHeartbeatTime;
@property(readonly, nonatomic) int currentHeartbeatTime; // @synthesize currentHeartbeatTime=_currentHeartbeatTime;
@property(readonly, nonatomic) ASMResourceKey *screenKey; // @synthesize screenKey=_screenKey;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScreenKey:(id)arg1 currentHeartbeatTime:(int)arg2;
- (id)initWithScreenKey:(id)arg1 currentHeartbeatTime:(int)arg2 nextHeartbeatTime:(int)arg3;

@end
