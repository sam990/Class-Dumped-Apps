//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@interface _TtC18VoiceUIFeatureImpl14VoiceUIService : NSObject <SPTService>
{
    // Error parsing type: , name: voiceLibraryService
    // Error parsing type: , name: glueService
    // Error parsing type: , name: dispatchService
    // Error parsing type: , name: playbackService
    // Error parsing type: , name: ubiService
    // Error parsing type: , name: playerService
    // Error parsing type: , name: eventSenderService
    // Error parsing type: , name: collectionPlatformService
    // Error parsing type: , name: settingsService
    // Error parsing type: , name: remoteConfigurationService
    // Error parsing type: , name: featureFlaggingService
    // Error parsing type: , name: clientSessionService
    // Error parsing type: , name: voiceViewController
    // Error parsing type: , name: voicePlayerEventListener
    // Error parsing type: , name: voicePlayerLogger
    // Error parsing type: , name: onboardingViewController
    // Error parsing type: , name: wakewordController
    // Error parsing type: , name: voiceController
    // Error parsing type: , name: onboardingController
    // Error parsing type: , name: testManager
    // Error parsing type: , name: voiceInteractionSettingsViewModel
    // Error parsing type: , name: $__lazy_storage_$_player
    // Error parsing type: , name: $__lazy_storage_$_linkDispatcher
    // Error parsing type: , name: $__lazy_storage_$_glueTheme
    // Error parsing type: , name: $__lazy_storage_$_microphonePermissionReducer
    // Error parsing type: , name: $__lazy_storage_$_localSettings
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideVoiceInteractionSettingsSectionWithSettingsViewController:(id)arg1;
- (void)initialViewDidAppear;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

