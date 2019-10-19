//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray, SPTGaiaHomeDeviceManager, SPTSettingsButtonTableViewCell, SPTSettingsTableViewCell, SettingsSwitchTableViewCell;
@protocol SPTGaiaHomeDeviceFlagsProvider, SPTGaiaSettingsProvider;

@interface SPTGaiaHomeDeviceResetSettingsSection : SettingsSection
{
    SPTSettingsButtonTableViewCell *_buttonCell;
    SPTSettingsTableViewCell *_deviceInfoCell;
    SPTGaiaHomeDeviceManager *_homeDeviceManager;
    SettingsSwitchTableViewCell *_automaticTransferCell;
    id <SPTGaiaSettingsProvider> _settingsProvider;
    id <SPTGaiaHomeDeviceFlagsProvider> _homeDeviceFlagProvider;
    NSArray *_servedCells;
}

@property(readonly, nonatomic) NSArray *servedCells; // @synthesize servedCells=_servedCells;
@property(readonly, nonatomic) id <SPTGaiaHomeDeviceFlagsProvider> homeDeviceFlagProvider; // @synthesize homeDeviceFlagProvider=_homeDeviceFlagProvider;
@property(readonly, nonatomic) id <SPTGaiaSettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(readonly, nonatomic) SettingsSwitchTableViewCell *automaticTransferCell; // @synthesize automaticTransferCell=_automaticTransferCell;
@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *homeDeviceManager; // @synthesize homeDeviceManager=_homeDeviceManager;
@property(readonly, nonatomic) SPTSettingsTableViewCell *deviceInfoCell; // @synthesize deviceInfoCell=_deviceInfoCell;
@property(readonly, nonatomic) SPTSettingsButtonTableViewCell *buttonCell; // @synthesize buttonCell=_buttonCell;
- (void).cxx_destruct;
- (void)automaticallyTransferOptionChanged:(id)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 homeDeviceManager:(id)arg2 settingsProvider:(id)arg3 homeDeviceFlagProvider:(id)arg4;

@end
