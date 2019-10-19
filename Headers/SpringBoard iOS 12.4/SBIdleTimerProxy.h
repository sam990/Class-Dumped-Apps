//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIdleTimerBase.h"

#import "SBIdleTimerObserving.h"

@class NSString;

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving>
{
    id <SBIdleTimer> _sourceTimer;
}

+ (id)disabledIdleTimerProxy;
@property(retain, nonatomic) id <SBIdleTimer> sourceTimer; // @synthesize sourceTimer=_sourceTimer;
- (void).cxx_destruct;
- (void)_logExpirationTimeout:(double)arg1;
- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)reset;
- (_Bool)isDisabled;
- (id)initWithIdleTimerSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
