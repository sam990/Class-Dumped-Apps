//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderService-Protocol.h"

@class INSEventSender, NSString, SPTAllocationContext, SPTEventSenderCoreImplementation, SPTEventSenderDebugState, SPTEventSenderImplementation, SPTEventSenderTransportImplementation;
@protocol SPTContainerService, SPTCoreService, SPTDebugService, SPTNetworkService, SPTResolver;

@interface SPTEventSenderServiceImplementation : NSObject <SPTEventSenderService>
{
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
    id <SPTNetworkService> _networkService;
    id <SPTCoreService> _coreService;
    SPTEventSenderTransportImplementation *_transport;
    INSEventSender *_sdk;
    SPTEventSenderImplementation *_eventSender;
    SPTEventSenderDebugState *_eventSenderDebugState;
    id <SPTResolver> _cosmosResolver;
    SPTEventSenderCoreImplementation *_eventSenderCore;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTEventSenderCoreImplementation *eventSenderCore; // @synthesize eventSenderCore=_eventSenderCore;
@property(retain, nonatomic) id <SPTResolver> cosmosResolver; // @synthesize cosmosResolver=_cosmosResolver;
@property(retain, nonatomic) SPTEventSenderDebugState *eventSenderDebugState; // @synthesize eventSenderDebugState=_eventSenderDebugState;
@property(retain, nonatomic) SPTEventSenderImplementation *eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) INSEventSender *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) SPTEventSenderTransportImplementation *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideEventSenderStateViewController;
- (id)provideSatelliteResponder;
- (id)provideEventSender;
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

