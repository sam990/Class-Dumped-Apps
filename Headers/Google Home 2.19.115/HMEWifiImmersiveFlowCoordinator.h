//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMEWifiImmersiveFlowCoordinatorDelegate;

@interface HMEWifiImmersiveFlowCoordinator : NSObject
{
    // Error parsing type: , name: cloudAPI
    // Error parsing type: , name: structureID
    // Error parsing type: , name: groupID
    // Error parsing type: , name: authorization
    // Error parsing type: , name: networkSettingsService
    // Error parsing type: , name: helpCoordinator
    // Error parsing type: , name: frontendSchedulingService
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: networkDetailCoordinator
    // Error parsing type: , name: setPriorityDeviceCoordinator
    // Error parsing type: , name: supportCodeCoordinator
    // Error parsing type: , name: structureData
    // Error parsing type: , name: userData
    // Error parsing type: , name: wifiNetworkData
    // Error parsing type: , name: wifiPrivacyPreferencesCoordinator
    // Error parsing type: , name: linkOpener
    // Error parsing type: , name: familyWifiCoordinatorFactory
    // Error parsing type: , name: networkDetailCoordinatorFactory
    // Error parsing type: , name: $__lazy_storage_$_familyWifiCoordinator
    // Error parsing type: , name: logger
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: experimentFlags
    // Error parsing type: , name: foyerHost
    // Error parsing type: , name: updateGuestNetworkPSKVisibilityOperationFactory
    // Error parsing type: , name: updateWPA3OperationFactory
    // Error parsing type: , name: performWANTestOperationFactory
    // Error parsing type: , name: updateGuestNetworkOperationFactory
    // Error parsing type: , name: updatePrimaryWirelessConfigOperationFactory
    // Error parsing type: , name: updateBlockingScheduleOperationFactory
    // Error parsing type: , name: updateStationBlockingOperationFactory
    // Error parsing type: , name: resetGroupOperationFactory
    // Error parsing type: , name: $__lazy_storage_$_wifiSpeedTestSubflowCoordinator
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
- (void)startWithFamilyWifiInNavigationController:(id)arg1;
- (void)startWithDeviceStationListInNavigationController:(id)arg1;
- (void)startWithSettingsInNavigationController:(id)arg1;
- (void)startInNavigationController:(id)arg1;
@property(nonatomic) __weak id <HMEWifiImmersiveFlowCoordinatorDelegate> delegate; // @synthesize delegate;

@end

