//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacyNotificationSettingsServices, SCNotificationSettingsWorkflow, SCSystemScope, SCUserSessionScope;

@interface SCNotificationSettingsEntryPoint : SCEntryPoint
{
    SCNotificationSettingsWorkflow *_notificationWorkflow;
    SCUserSessionScope *_userSessionScope;
    SCSystemScope *_systemScope;
    SCLegacyNotificationSettingsServices *_legacyNotificationServices;
}

@property(nonatomic) __weak SCLegacyNotificationSettingsServices *legacyNotificationServices; // @synthesize legacyNotificationServices=_legacyNotificationServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)end;
- (void)_begin;
- (void)begin;

@end
