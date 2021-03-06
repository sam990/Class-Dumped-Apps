//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTHomeAutomationRoomSelectionDelegate-Protocol.h"

@class ASTMenuIconStreamItem, ASTSettingsViewController, ASTUIHomeAutomationDevice, ASTUIHomeAutomationSettingsUi, NSString;

@interface ASTHomeAutomationDeviceDetailsUIAdapter : ASTSettingsUIAdapter <ASTHomeAutomationRoomSelectionDelegate>
{
    ASTUIHomeAutomationDevice *_deviceInfo;
    ASTSettingsViewController *_settingsViewController;
    ASTMenuIconStreamItem *_addGroupItem;
    ASTUIHomeAutomationSettingsUi *_homeAutomationSettings;
    NSString *_deviceID;
    NSString *_nickname;
    ASTMenuIconStreamItem *_roomItem;
    NSString *_currentRoomID;
}

@property(copy, nonatomic) NSString *currentRoomID; // @synthesize currentRoomID=_currentRoomID;
@property(readonly, nonatomic) ASTMenuIconStreamItem *roomItem; // @synthesize roomItem=_roomItem;
- (void).cxx_destruct;
- (void)addAssistantSuggestionsToMenuItems:(id)arg1;
- (id)suggestionItemWithTitle:(id)arg1;
- (void)updateRoomItem;
- (void)navigateToDetailsForGroupID:(id)arg1 groupName:(id)arg2;
- (void)updateMenuItemsForAddedGroups:(id)arg1 removedGroups:(id)arg2;
- (void)updateSettingsOnGroupsAdded:(id)arg1 groupsRemoved:(id)arg2;
- (void)updateSettingsOnRoomChange;
- (void)submitDeviceUiUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)deviceUiUpdateProto;
- (void)refreshGroups;
- (void)addGroup:(id)arg1;
- (void)updateRoom:(id)arg1;
- (id)createMenuItemForGroup:(id)arg1;
- (void)updateNickname:(id)arg1;
- (void)updateTitleItem:(id)arg1 withNickname:(id)arg2;
- (void)roomSelectionDidSelectRoom:(id)arg1;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)pageCustomizations;
- (id)settingsFilter;
- (id)initWithSettingsService:(id)arg1 deviceID:(id)arg2;
- (id)initWithSettingsService:(id)arg1 homeAutomationSettings:(id)arg2 deviceID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

