//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXSSInterDeviceActionReceiver-Protocol.h"
#import "SCATCameraInputSourceDelegate-Protocol.h"
#import "SCATHardwareInputSourceDelegate-Protocol.h"
#import "SCATInterDeviceInputSourceDelegate-Protocol.h"
#import "SCATScreenInputSourceDelegate-Protocol.h"

@class AXAccessQueue, AXDispatchTimer, AXSSInterDeviceCommunicator, AXSwitchRecipe, AXUIClient, NSString, SCATATVRemoteInputSource, SCATCameraInputSource, SCATInterDeviceInputSource, SCATKeyboardInputSource, SCATMFIInputSource, SCATMIDIInputSource, SCATScreenInputSource;
@protocol SCATInputControllerDelegate;

@interface SCATInputController : NSObject <SCATCameraInputSourceDelegate, SCATHardwareInputSourceDelegate, SCATScreenInputSourceDelegate, SCATInterDeviceInputSourceDelegate, AXSSInterDeviceActionReceiver>
{
    _Bool _valid;
    _Bool _isInputHoldEnabled;
    _Bool _isInputRepeatEnabled;
    _Bool _isInputCoalesceEnabled;
    _Bool _hasInitializedInputSources;
    AXSwitchRecipe *_recipe;
    SCATKeyboardInputSource *_keyboardInputSource;
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;
    id <SCATInputControllerDelegate> _delegate;
    AXAccessQueue *_queue;
    SCATCameraInputSource *_cameraInputSource;
    SCATMFIInputSource *_mfiInputSource;
    SCATScreenInputSource *_screenInputSource;
    SCATATVRemoteInputSource *_atvRemoteInputSource;
    SCATMIDIInputSource *_midiInputSource;
    SCATInterDeviceInputSource *_interDeviceInputSource;
    double _timeIntervalBeforeSendAction;
    double _timeIntervalBeforeSendLongPressAction;
    double _timeIntervalBeforeSendRepeatAction;
    double _timeIntervalBetweenDidSendActions;
    double _timeIntervalSinceDidSendAction;
    AXDispatchTimer *_inputHoldTimer;
    AXDispatchTimer *_inputRepeatTimer;
    AXDispatchTimer *_inputLongPressTimer;
}

@property(nonatomic) _Bool hasInitializedInputSources; // @synthesize hasInitializedInputSources=_hasInitializedInputSources;
@property(retain, nonatomic) AXDispatchTimer *inputLongPressTimer; // @synthesize inputLongPressTimer=_inputLongPressTimer;
@property(retain, nonatomic) AXDispatchTimer *inputRepeatTimer; // @synthesize inputRepeatTimer=_inputRepeatTimer;
@property(retain, nonatomic) AXDispatchTimer *inputHoldTimer; // @synthesize inputHoldTimer=_inputHoldTimer;
@property(nonatomic) _Bool isInputCoalesceEnabled; // @synthesize isInputCoalesceEnabled=_isInputCoalesceEnabled;
@property(nonatomic) _Bool isInputRepeatEnabled; // @synthesize isInputRepeatEnabled=_isInputRepeatEnabled;
@property(nonatomic) _Bool isInputHoldEnabled; // @synthesize isInputHoldEnabled=_isInputHoldEnabled;
@property(nonatomic) double timeIntervalSinceDidSendAction; // @synthesize timeIntervalSinceDidSendAction=_timeIntervalSinceDidSendAction;
@property(nonatomic) double timeIntervalBetweenDidSendActions; // @synthesize timeIntervalBetweenDidSendActions=_timeIntervalBetweenDidSendActions;
@property(nonatomic) double timeIntervalBeforeSendRepeatAction; // @synthesize timeIntervalBeforeSendRepeatAction=_timeIntervalBeforeSendRepeatAction;
@property(nonatomic) double timeIntervalBeforeSendLongPressAction; // @synthesize timeIntervalBeforeSendLongPressAction=_timeIntervalBeforeSendLongPressAction;
@property(nonatomic) double timeIntervalBeforeSendAction; // @synthesize timeIntervalBeforeSendAction=_timeIntervalBeforeSendAction;
@property(retain, nonatomic) SCATInterDeviceInputSource *interDeviceInputSource; // @synthesize interDeviceInputSource=_interDeviceInputSource;
@property(retain, nonatomic) SCATMIDIInputSource *midiInputSource; // @synthesize midiInputSource=_midiInputSource;
@property(retain, nonatomic) SCATATVRemoteInputSource *atvRemoteInputSource; // @synthesize atvRemoteInputSource=_atvRemoteInputSource;
@property(retain, nonatomic) SCATScreenInputSource *screenInputSource; // @synthesize screenInputSource=_screenInputSource;
@property(retain, nonatomic) SCATMFIInputSource *mfiInputSource; // @synthesize mfiInputSource=_mfiInputSource;
@property(retain, nonatomic) SCATCameraInputSource *cameraInputSource; // @synthesize cameraInputSource=_cameraInputSource;
@property(retain, nonatomic) AXAccessQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SCATInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) SCATKeyboardInputSource *keyboardInputSource; // @synthesize keyboardInputSource=_keyboardInputSource;
@property(retain, nonatomic) AXSwitchRecipe *recipe; // @synthesize recipe=_recipe;
- (void).cxx_destruct;
- (void)didReceiveSwitchEvent:(id)arg1 forDeviceWithName:(id)arg2;
- (void)_showState:(id)arg1 forSource:(unsigned long long)arg2;
- (void)_showAlert:(id)arg1 forSource:(unsigned long long)arg2;
- (void)_hideStateForSource:(unsigned long long)arg1;
- (void)_hideAlertForSource:(unsigned long long)arg1;
@property(readonly, nonatomic) AXUIClient *userInterfaceClient;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)updateWhetherSwitchConfigurationHasScreenSwitch;
- (void)updateWhetherSwitchConfigurationRendersDeviceUnusable;
- (_Bool)isSwitchWithSource:(struct NSString *)arg1;
@property(readonly, nonatomic) long long role;
- (id)_allSwitchesInUse;
- (id)initWithInterDeviceCommunicator:(id)arg1;
- (void)dealloc;
- (void)_setupInputTimers;
- (void)_removeInputTimers;
- (_Bool)_switchConfigurationHasScreenSwitch;
- (_Bool)_switchConfigurationRendersDeviceUnusable;
- (void)_updateInputSources;
- (void)_updateInterDeviceInputSource;
- (void)_updateScreenInputSource;
- (void)_updateMFIInputSource;
- (void)_updateMIDIInputSource;
- (void)_updateKeyboardInputSource;
- (void)_updateATVRemoteInputSource;
- (void)_updateCameraInputSource;
- (void)_removeInputSources;
- (void)_configureMFIAccessoryIfNecessary:(id)arg1;
- (void)interDeviceInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;
- (void)screenInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;
- (void)hardwareInputSource:(id)arg1 didUpdateAvailability:(_Bool)arg2 withDetail:(unsigned long long)arg3;
- (void)hardwareInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;
- (void)cameraInputSource:(id)arg1 didUpdateState:(CDStruct_c305b3b4)arg2;
- (void)cameraInputSource:(id)arg1 didUpdateAvailability:(_Bool)arg2 withDetail:(unsigned long long)arg3;
- (void)cameraInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3;
- (void)stopForwardingSwitchEventsForInputSource:(id)arg1;
- (void)inputSource:(id)arg1 forwardSwitchEvent:(id)arg2;
- (_Bool)shouldForwardSwitchEventsForInputSource:(id)arg1;
- (void)didEndLongPressForInputSource:(id)arg1;
- (void)didBeginLongPressForInputSource:(id)arg1;
- (void)_updateIsInputCoalesceEnabled;
- (void)_updateIsInputRepeatEnabled;
- (void)_updateIsInputHoldEnabled;
- (void)_updateTimeIntervalBetweenDidSendActions;
- (void)_updateTimeIntervalBeforeSendRepeatAction;
- (void)_updateTimeIntervalBeforeSendAction;
- (void)_sendActionWithIdentifier:(long long)arg1;
- (void)_endAction;
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;
- (_Bool)_handleHoldAtPointForActionIdentifier:(long long)arg1 start:(_Bool)arg2;
- (void)_updateActionsForSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
