//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterGeoDataProvider-Protocol.h>
#import <T1Twitter/TFNTwitterLocationManagerDelegate-Protocol.h>

@class NSMutableArray, NSString, TFNTwitterLocationManager, TFSTwitterLocation;
@protocol OS_dispatch_queue;

@interface T1GeoDataProvider : NSObject <TFNTwitterGeoDataProvider, TFNTwitterLocationManagerDelegate>
{
    _Bool _enabled;
    _Bool _locationServicesAvailable;
    _Bool _locationUpdateInProgress;
    TFSTwitterLocation *_currentLocation;
    NSString *_timezoneName;
    double _locationUpdateDuration;
    double _locationUpdateInterval;
    unsigned long long _validDispatchId;
    TFNTwitterLocationManager *_locationManager;
    NSMutableArray *_callbacks;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) TFNTwitterLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) unsigned long long validDispatchId; // @synthesize validDispatchId=_validDispatchId;
@property(nonatomic) _Bool locationUpdateInProgress; // @synthesize locationUpdateInProgress=_locationUpdateInProgress;
- (void).cxx_destruct;
- (void)_startChainedLocationUpdate;
- (void)_handleRealtimeLocationData:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_cancelableDispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_timezoneDidChange:(id)arg1;
- (void)_locationManagerDidChangeAuthorizationStatus:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2;
- (double)_scoreForLocation:(id)arg1;
- (_Bool)_newLocation:(id)arg1 betterThanOldLocation:(id)arg2;
- (_Bool)_locationIsGoodEnoughForRealtimeResponse:(id)arg1;
- (void)getLocationServicesAvailableWithCallback:(CDUnknownBlockType)arg1;
- (void)_restartChainedLocationUpdate;
- (void)stopUpdates;
- (void)startUpdates;
@property(readonly, getter=isUsingRetainedGeoDataAllowed) _Bool usingRetainedGeoDataAllowed;
- (void)_checkAndRetriggerLocationUpdateWithCallback:(CDUnknownBlockType)arg1 remainingAttempts:(unsigned long long)arg2;
- (void)getRealtimeLocationWithCallback:(CDUnknownBlockType)arg1;
@property double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
@property double locationUpdateDuration; // @synthesize locationUpdateDuration=_locationUpdateDuration;
@property(copy) NSString *timezoneName; // @synthesize timezoneName=_timezoneName;
@property _Bool locationServicesAvailable; // @synthesize locationServicesAvailable=_locationServicesAvailable;
@property(readonly, getter=isCachedLocationAvailable) _Bool cachedLocationAvailable;
@property(retain) TFSTwitterLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
