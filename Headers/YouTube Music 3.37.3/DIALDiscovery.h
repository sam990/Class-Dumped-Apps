//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DIALSSDPClientDelegate-Protocol.h"
#import "DIALWakeOnLANDeviceDelegate-Protocol.h"

@class DIALDevice, DIALSSDPClient, DIALWakeOnLANDeviceCache, NSMutableDictionary, NSMutableSet, NSString;
@protocol DIALDiscoveryDelegate;

@interface DIALDiscovery : NSObject <DIALSSDPClientDelegate, DIALWakeOnLANDeviceDelegate>
{
    NSMutableSet *_responseUUIDs;
    NSMutableSet *_unhandledResponseUUIDs;
    DIALSSDPClient *_SSDPClient;
    NSString *_clientIdentifier;
    DIALWakeOnLANDeviceCache *_deviceCache;
    double _defaultSSDPMSearchInterval;
    DIALDevice *_wakeOnLANActiveDevice;
    _Bool _running;
    _Bool _wakeOnLANEnabled;
    id <DIALDiscoveryDelegate> _delegate;
    NSMutableDictionary *_DIALDevices;
}

+ (id)UUIDsFromDevicesArray:(id)arg1;
+ (id)currentNetworkIdentifier;
+ (id)currentWiFiIPv4Address;
@property(retain, nonatomic) NSMutableDictionary *DIALDevices; // @synthesize DIALDevices=_DIALDevices;
@property(nonatomic, getter=isWakeOnLANEnabled) _Bool wakeOnLANEnabled; // @synthesize wakeOnLANEnabled=_wakeOnLANEnabled;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) __weak id <DIALDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recordWakeOnLANDevice:(id)arg1;
- (void)updateWakeOnLANDevices;
- (void)makeDeviceUnavailableViaWakeOnLAN:(id)arg1;
- (void)makeDeviceAvailableViaWakeOnLAN:(id)arg1;
- (void)wakeOnLANDidStopForDevice:(id)arg1;
- (void)wakeOnLANDidStartForDevice:(id)arg1;
- (void)makeDeviceUnavailable:(id)arg1;
- (void)makeDeviceAvailable:(id)arg1 updated:(_Bool)arg2;
- (void)onSSDPClientDisconnected:(id)arg1;
- (void)onSSDPClientDidFinishMSearch:(id)arg1;
- (void)updateDeviceDescriptionForNewDevice:(id)arg1;
- (void)onSSDPClient:(id)arg1 response:(id)arg2;
- (void)onSSDPClientWillSendMSearch:(id)arg1;
@property(nonatomic) double DIALDiscoveryInterval;
- (id)availableDIALDevices;
- (_Bool)running;
- (void)performQuickSearchWithCompletion:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)start;
- (id)initWithClientIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
