//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Appboy_iOS_SDK/ABKServerRequest.h>

@class ABKGeofenceEvent;

@interface ABKGeofenceReportServerRequest : ABKServerRequest
{
    ABKGeofenceEvent *_geofenceEvent;
}

@property(retain) ABKGeofenceEvent *geofenceEvent; // @synthesize geofenceEvent=_geofenceEvent;
- (void).cxx_destruct;
- (id)body;
- (_Bool)isEmpty;
- (id)endpointURL;
- (id)initWithUserId:(id)arg1 geofenceEvent:(id)arg2 sdkFlavor:(id)arg3;
- (id)initWithUserId:(id)arg1 geofenceEvent:(id)arg2;

@end

