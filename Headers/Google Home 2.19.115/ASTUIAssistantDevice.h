//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIAssistantDeviceSettings, NSString;

@interface ASTUIAssistantDevice : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)ast_isVoiceMatchEnabledSharedDeviceWithSupportedDeviceTypes:(id)arg1;

// Remaining properties
@property(nonatomic) int assistantDeviceType; // @dynamic assistantDeviceType;
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) ASTUIAssistantDeviceSettings *deviceSettings; // @dynamic deviceSettings;
@property(nonatomic) _Bool hasAssistantDeviceType; // @dynamic hasAssistantDeviceType;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasDeviceSettings; // @dynamic hasDeviceSettings;
@property(nonatomic) _Bool hasHomeName; // @dynamic hasHomeName;
@property(nonatomic) _Bool hasIsFirstUserType; // @dynamic hasIsFirstUserType;
@property(nonatomic) _Bool hasIsSelf; // @dynamic hasIsSelf;
@property(nonatomic) _Bool hasRoomName; // @dynamic hasRoomName;
@property(copy, nonatomic) NSString *homeName; // @dynamic homeName;
@property(nonatomic) int isFirstUserType; // @dynamic isFirstUserType;
@property(nonatomic) _Bool isSelf; // @dynamic isSelf;
@property(copy, nonatomic) NSString *roomName; // @dynamic roomName;

@end

