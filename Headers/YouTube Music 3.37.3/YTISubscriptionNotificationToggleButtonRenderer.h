//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIHintSupportedRenderers;

@interface YTISubscriptionNotificationToggleButtonRenderer : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)subscriptionNotificationSettingDisabled:(id)arg1;
- (_Bool)shouldUseSubscriptionNotificationDisableStateEntity;
- (id)subscriptionNotificationSettingEntityKey;
- (_Bool)shouldUpdateCurrentStateIDWithEntity:(id)arg1;
- (unsigned int)updateStateWithSubscriptionNotificationSettingEntity:(id)arg1 cachedState:(unsigned int)arg2;
- (_Bool)shouldOpenInlineMenu;
- (id)inlineMenuItemServiceEndpoint;
- (int)optimisticallySelectIconState:(id)arg1;
- (int)optimisticallySwitchIconState;
- (id)bellState;
- (id)inlineMenuButtonRenderer;
- (id)buttonRenderer;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(nonatomic) int currentStateId; // @dynamic currentStateId;
@property(retain, nonatomic) NSMutableArray *disableStateEntityKeysArray; // @dynamic disableStateEntityKeysArray;
@property(readonly, nonatomic) unsigned long long disableStateEntityKeysArray_Count; // @dynamic disableStateEntityKeysArray_Count;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasCurrentStateId; // @dynamic hasCurrentStateId;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasNotificationsDisabledStateId; // @dynamic hasNotificationsDisabledStateId;
@property(nonatomic) _Bool hasOnTapBehavior; // @dynamic hasOnTapBehavior;
@property(nonatomic) _Bool hasOptimisticUpdateOnClick; // @dynamic hasOptimisticUpdateOnClick;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIHintSupportedRenderers *hint; // @dynamic hint;
@property(nonatomic) int notificationsDisabledStateId; // @dynamic notificationsDisabledStateId;
@property(nonatomic) int onTapBehavior; // @dynamic onTapBehavior;
@property(nonatomic) _Bool optimisticUpdateOnClick; // @dynamic optimisticUpdateOnClick;
@property(retain, nonatomic) NSMutableArray *statesArray; // @dynamic statesArray;
@property(readonly, nonatomic) unsigned long long statesArray_Count; // @dynamic statesArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
