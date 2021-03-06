//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VisibilitySignaler-Protocol.h"

@class CADisplayLink, NSMapTable, NSString;

@interface ContinuousVisibilitySignaler : NSObject <VisibilitySignaler>
{
    CADisplayLink *_trackingTimer;
    CADisplayLink *_slowTimer;
    NSMapTable *_signalReceivers;
}

+ (id)instance;
@property(retain, nonatomic) NSMapTable *signalReceivers; // @synthesize signalReceivers=_signalReceivers;
@property(retain, nonatomic) CADisplayLink *slowTimer; // @synthesize slowTimer=_slowTimer;
@property(retain, nonatomic) CADisplayLink *trackingTimer; // @synthesize trackingTimer=_trackingTimer;
- (void).cxx_destruct;
- (void)addSignalReceiver:(id)arg1;
- (void)didPing:(id)arg1;
- (void)didTrack:(id)arg1;
- (void)executeSignal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

