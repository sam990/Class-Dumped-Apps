//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterGeoDataProvider-Protocol.h>

@class NSString, TFSTwitterLocation;

@interface T1SafeStartupGeoDataProvider : NSObject <TFNTwitterGeoDataProvider>
{
    double locationUpdateDuration;
    double locationUpdateInterval;
}

@property double locationUpdateInterval; // @synthesize locationUpdateInterval;
@property double locationUpdateDuration; // @synthesize locationUpdateDuration;
- (void)stopUpdates;
- (void)startUpdates;
@property(readonly, getter=isUsingRetainedGeoDataAllowed) _Bool usingRetainedGeoDataAllowed;
- (void)getLocationServicesAvailableWithCallback:(CDUnknownBlockType)arg1;
- (void)getRealtimeLocationWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) _Bool locationServicesAvailable;
@property(readonly, copy) NSString *timezoneName;
@property(readonly) TFSTwitterLocation *currentLocation;
@property(readonly, getter=isCachedLocationAvailable) _Bool cachedLocationAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

