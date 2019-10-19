//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTPushTokenBackendService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPushTokenBackendIntegrator;
@protocol SPTFeatureFlagSignal, SPTNetworkService, SPTPushMessagingABBAService, SPTPushTokenUserTrackerService;

@interface SPTPushTokenBackendServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTService, SPTPushTokenBackendService>
{
    id <SPTNetworkService> _networkFeature;
    id <SPTPushTokenUserTrackerService> _pushTokenUserTrackerService;
    SPTPushTokenBackendIntegrator *_pushTokenBackendIntegrator;
    id <SPTPushMessagingABBAService> _pushMessagingABBAService;
    id <SPTFeatureFlagSignal> _pushMessagingFeatureFlagSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> pushMessagingFeatureFlagSignal; // @synthesize pushMessagingFeatureFlagSignal=_pushMessagingFeatureFlagSignal;
@property(nonatomic) __weak id <SPTPushMessagingABBAService> pushMessagingABBAService; // @synthesize pushMessagingABBAService=_pushMessagingABBAService;
@property(retain, nonatomic) SPTPushTokenBackendIntegrator *pushTokenBackendIntegrator; // @synthesize pushTokenBackendIntegrator=_pushTokenBackendIntegrator;
@property(nonatomic) __weak id <SPTPushTokenUserTrackerService> pushTokenUserTrackerService; // @synthesize pushTokenUserTrackerService=_pushTokenUserTrackerService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)unloadBackendIntegrator;
- (void)loadBackendIntegrator;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
