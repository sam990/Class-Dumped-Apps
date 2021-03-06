//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTInAppMessageTriggerConfigurationsPrerequisitesObserver-Protocol.h"
#import "SPTInAppMessageTriggerEngineDelegate-Protocol.h"
#import "SPTLocalSettingsObserver-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSArray, NSString, NSTimer, SPTDataLoader, SPTInAppMessageFeatureFlagChecks, SPTInAppMessageServiceLogger, SPTInAppMessageTriggerConfigurationsPrerequisites, SPTObserverManager;
@protocol SPTInAppMessageTriggerConfigurationsControllerDelegate, SPTInAppMessageTriggerConfigurationsControllerObserver, SPTLocalSettings, SPTOfflineModeState;

@interface SPTInAppMessageTriggerConfigurationsController : NSObject <SPTInAppMessageTriggerConfigurationsPrerequisitesObserver, SPTDataLoaderDelegate, SPTLocalSettingsObserver, SPTOfflineModeStateObserver, SPTInAppMessageTriggerEngineDelegate>
{
    _Bool _refreshing;
    _Bool _useDevEndpoint;
    _Bool _offline;
    id <SPTInAppMessageTriggerConfigurationsControllerDelegate> _delegate;
    SPTDataLoader *_configurationsDataLoader;
    SPTInAppMessageTriggerConfigurationsPrerequisites *_triggerConfigurationsPrerequisites;
    SPTObserverManager *_observerManager;
    id <SPTLocalSettings> _localSettings;
    NSArray *_triggerList;
    NSTimer *_triggerListRefreshTimer;
    SPTInAppMessageServiceLogger *_serviceLogger;
    double _requestStartTime;
    SPTInAppMessageFeatureFlagChecks *_featureFlagChecker;
    id <SPTOfflineModeState> _offlineModeState;
}

@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTInAppMessageFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(nonatomic) _Bool useDevEndpoint; // @synthesize useDevEndpoint=_useDevEndpoint;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) NSTimer *triggerListRefreshTimer; // @synthesize triggerListRefreshTimer=_triggerListRefreshTimer;
@property(retain, nonatomic) NSArray *triggerList; // @synthesize triggerList=_triggerList;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTInAppMessageTriggerConfigurationsPrerequisites *triggerConfigurationsPrerequisites; // @synthesize triggerConfigurationsPrerequisites=_triggerConfigurationsPrerequisites;
@property(retain, nonatomic) SPTDataLoader *configurationsDataLoader; // @synthesize configurationsDataLoader=_configurationsDataLoader;
@property(nonatomic) __weak id <SPTInAppMessageTriggerConfigurationsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
- (void).cxx_destruct;
- (_Bool)isBlockedForTA;
- (void)localSettingsDidChange:(id)arg1;
- (void)logBackendRequestPerformanceWithRequest:(id)arg1;
- (void)performRequestForUrl:(id)arg1 withTriggerURI:(id)arg2 messageFormat:(id)arg3;
- (void)fetchMessagesForTriggers:(id)arg1 withTriggerURI:(id)arg2 andTriggerType:(id)arg3;
- (void)triggerEngine:(id)arg1 didMatchPatternForTriggers:(id)arg2 withTriggerURI:(id)arg3 andTriggerType:(id)arg4;
- (void)invalidateTimer;
- (void)setupRefreshingTimer;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fetchTriggerList;
- (void)fetchActiveTriggerList;
- (void)prerequisitesSatisfiedForConfigurationsPrerequisites:(id)arg1;
@property(readonly, nonatomic) id <SPTInAppMessageTriggerConfigurationsControllerObserver> observerNotifierProxy;
- (void)removeConfigurationsControllerObserver:(id)arg1;
- (void)addConfigurationsControllerObserver:(id)arg1;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithPrerequisites:(id)arg1 configurationsDataLoader:(id)arg2 serviceLogger:(id)arg3 featureFlagChecker:(id)arg4 offlineModeState:(id)arg5 localSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

