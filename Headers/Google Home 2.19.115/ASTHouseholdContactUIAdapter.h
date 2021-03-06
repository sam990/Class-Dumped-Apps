//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTSelfContactViewDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"

@class ASTMenuContentViewStreamItem, ASTUIPeopleMember, NSMutableArray, NSString;

@interface ASTHouseholdContactUIAdapter : ASTSettingsUIAdapter <ASTSelfContactViewDelegate, CNContactPickerDelegate>
{
    int _personIndex;
    NSMutableArray *_personV2Array;
    ASTMenuContentViewStreamItem *_selfContentItem;
    ASTUIPeopleMember *_member;
}

@property(retain, nonatomic) ASTUIPeopleMember *member; // @synthesize member=_member;
@property(retain, nonatomic) ASTMenuContentViewStreamItem *selfContentItem; // @synthesize selfContentItem=_selfContentItem;
@property(nonatomic) int personIndex; // @synthesize personIndex=_personIndex;
@property(retain, nonatomic) NSMutableArray *personV2Array; // @synthesize personV2Array=_personV2Array;
- (void).cxx_destruct;
- (void)tapAddYourselfButton;
- (void)tapCancelButton;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)addSelf;
- (void)addPerson;
- (void)didTapRemoveButton:(id)arg1;
- (id)personStreamItemWithPerson:(id)arg1;
- (id)personStreamItemsWithPersonArray:(id)arg1;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)settingsFilter;
- (id)pageCustomizations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

