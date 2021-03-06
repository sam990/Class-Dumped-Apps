//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, SPSession;
@protocol SPTLocalSettings, SPTOfflineModeState, SPTProductState, SPTService, SPTUIModeTransitionCoordinator;

@protocol SPTSessionService <SPTService>
- (id <SPTUIModeTransitionCoordinator>)provideUIModeTransitionCoordinator;
- (id <SPTOfflineModeState>)provideOfflineNotifier;
- (id <SPTLocalSettings>)provideLocalSettingsForServiceIdentifier:(NSString *)arg1;
- (id <SPTLocalSettings>)provideLocalSettingsForService:(id <SPTService>)arg1;
- (id <SPTProductState>)provideProductState;
- (SPSession *)provideCurrentSession;
@end

