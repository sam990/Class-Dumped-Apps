//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEPulsarSubscriptionUpdater, HMEWifiOOBERecoveryCoordinatorFactory, NSString;
@protocol HMEAppUserContext;

@protocol HMEAppStructureContext <NSObject>
@property(readonly, nonatomic) HMEWifiOOBERecoveryCoordinatorFactory *recoveryCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType wifiForCastDevicePreferencesCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType roomPickerCoordinatorFactory;
@property(readonly, nonatomic) HMEPulsarSubscriptionUpdater *pulsarSubscriptionUpdater;
@property(readonly, nonatomic) CDUnknownBlockType wifiImmersiveCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType addressCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType alarmCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType historyCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType feedCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType managerRequestCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType manageStructureMembersCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType moveDeviceStructureCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType removeStructureCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType addDeviceToRoomCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType addMenuCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType settingsCoordinatorFactory;
@property(readonly, nonatomic) CDUnknownBlockType structureCoordinatorFactory;
@property(readonly, nonatomic) NSString *structureID;
@property(readonly, nonatomic) id <HMEAppUserContext> userContext;
@end

