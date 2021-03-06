//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCollectionLayoutViewController.h"

#import "HMEFullWidthSectionLayoutDelegate-Protocol.h"
#import "HMESetupMakeChoiceCollectionViewModelDelegate-Protocol.h"
#import "SetupDeviceScannerListener-Protocol.h"

@class HMESetupMakeChoiceCollectionViewModel, HMEStereoPairingUtils, NSDictionary, NSString, SetupCastDevice, SetupDeviceScanner;
@protocol AnalyticsLogger, HMEStereoPairingSetupPairSelectionDelegate;

@interface HMEStereoPairingSetupPairSelectionViewController : HMESetupCollectionLayoutViewController <HMESetupMakeChoiceCollectionViewModelDelegate, HMEFullWidthSectionLayoutDelegate, SetupDeviceScannerListener>
{
    _Bool _shouldRestrictToDeviceType;
    id <HMEStereoPairingSetupPairSelectionDelegate> _delegate;
    id <AnalyticsLogger> _analyticsLogger;
    SetupDeviceScanner *_deviceScanner;
    SetupCastDevice *_lockedInDevice;
    NSDictionary *_stereoPairCompatibilityMatrix;
    long long _restrictedDeviceType;
    HMEStereoPairingUtils *_stereoPairingUtils;
}

@property(retain, nonatomic) HMEStereoPairingUtils *stereoPairingUtils; // @synthesize stereoPairingUtils=_stereoPairingUtils;
@property(nonatomic) long long restrictedDeviceType; // @synthesize restrictedDeviceType=_restrictedDeviceType;
@property(nonatomic) _Bool shouldRestrictToDeviceType; // @synthesize shouldRestrictToDeviceType=_shouldRestrictToDeviceType;
@property(readonly, nonatomic) NSDictionary *stereoPairCompatibilityMatrix; // @synthesize stereoPairCompatibilityMatrix=_stereoPairCompatibilityMatrix;
@property(readonly, nonatomic) SetupCastDevice *lockedInDevice; // @synthesize lockedInDevice=_lockedInDevice;
@property(readonly, nonatomic) SetupDeviceScanner *deviceScanner; // @synthesize deviceScanner=_deviceScanner;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak id <HMEStereoPairingSetupPairSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdateChoices:(id)arg1 userTriggered:(_Bool)arg2;
- (void)setupDeviceWasUpdated:(id)arg1;
- (void)setupDeviceDidGoOffline:(id)arg1;
- (void)setupDeviceDidComeOnline:(id)arg1;
- (void)viewDidLoad;
- (double)collectionView:(id)arg1 sectionLayout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)populateDataModelChoices;
- (id)compatibleDeviceSSIDSuffixes;
- (id)noDevicesFoundText;
- (id)pairWithText;
- (id)subtitleText;
- (id)titleText;
- (void)didTapNext:(id)arg1;
- (void)restrictToDeviceType:(long long)arg1;
- (id)initWithDevice:(id)arg1 deviceScanner:(id)arg2 analyticsLogger:(id)arg3 stereoPairCompatibilityMatrix:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) HMESetupMakeChoiceCollectionViewModel *collectionViewModel; // @dynamic collectionViewModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

