//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSString, ULRManager;
@protocol YTIdentityProvider;

@interface YTMULRController : NSObject <YTUserChangedObserver>
{
    id <YTIdentityProvider> _identityProvider;
    _Bool _disabled;
    GIMMe *_gimme;
    ULRManager *_ulrManager;
}

@property(readonly, nonatomic) ULRManager *ulrManager; // @synthesize ulrManager=_ulrManager;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)userDidChange;
- (void)locationHistoryStateChanged:(id)arg1;
- (void)locationReportingStateChanged:(id)arg1;
- (void)updateCachedReportingAndHistoryStates;
- (void)updateReportableIdentities;
@property(readonly, nonatomic) _Bool cachedOptedInStatus;
- (void)setDisabledUntilRestart;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

