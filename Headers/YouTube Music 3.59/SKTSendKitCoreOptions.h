//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKTSendKitCoreOptions-Protocol.h"

@class GMDCContainerScheme, NSArray, NSNumber, NSString, QTMColorGroup, SKTClientConfig, SKTExperimentOptions, SKTLocalizedStringOverrides, SKTUIAlertDialogOptions, SKTUIInAppContactDisplayOptions, UIView;
@protocol SKTShareSheetDelegate;

@interface SKTSendKitCoreOptions : NSObject <SKTSendKitCoreOptions>
{
    _Bool validateContacts;
    _Bool showGroupResults;
    int clientID;
    int entryPoint;
    SKTClientConfig *clientConfig;
    unsigned long long selectionMode;
    NSArray *sharedWithTargetGroups;
    NSNumber *submissionID;
    QTMColorGroup *themeColorGroup;
    SKTUIInAppContactDisplayOptions *inAppContactDisplayOptions;
    SKTLocalizedStringOverrides *stringOverrides;
    NSArray *initiallySelectedTargets;
    unsigned long long permissionsBehaviors;
    SKTUIAlertDialogOptions *permissionsPreRequestOptions;
    SKTUIAlertDialogOptions *settingsRedirectDialogOptions;
    UIView *loggingParent;
    SKTExperimentOptions *experimentOptions;
    id <SKTShareSheetDelegate> shareSheetDelegate;
}

@property(nonatomic) __weak id <SKTShareSheetDelegate> shareSheetDelegate; // @synthesize shareSheetDelegate;
@property(nonatomic) _Bool showGroupResults; // @synthesize showGroupResults;
@property(nonatomic) _Bool validateContacts; // @synthesize validateContacts;
@property(retain, nonatomic) SKTExperimentOptions *experimentOptions; // @synthesize experimentOptions;
@property(nonatomic) __weak UIView *loggingParent; // @synthesize loggingParent;
@property(retain, nonatomic) SKTUIAlertDialogOptions *settingsRedirectDialogOptions; // @synthesize settingsRedirectDialogOptions;
@property(retain, nonatomic) SKTUIAlertDialogOptions *permissionsPreRequestOptions; // @synthesize permissionsPreRequestOptions;
@property(nonatomic) unsigned long long permissionsBehaviors; // @synthesize permissionsBehaviors;
@property(retain, nonatomic) NSArray *initiallySelectedTargets; // @synthesize initiallySelectedTargets;
@property(retain, nonatomic) SKTLocalizedStringOverrides *stringOverrides; // @synthesize stringOverrides;
@property(retain, nonatomic) SKTUIInAppContactDisplayOptions *inAppContactDisplayOptions; // @synthesize inAppContactDisplayOptions;
@property(retain, nonatomic) QTMColorGroup *themeColorGroup; // @synthesize themeColorGroup;
@property(retain, nonatomic) NSNumber *submissionID; // @synthesize submissionID;
@property(retain, nonatomic) NSArray *sharedWithTargetGroups; // @synthesize sharedWithTargetGroups;
@property(nonatomic) unsigned long long selectionMode; // @synthesize selectionMode;
@property(nonatomic) int entryPoint; // @synthesize entryPoint;
@property(readonly, nonatomic) SKTClientConfig *clientConfig; // @synthesize clientConfig;
@property(readonly, nonatomic) int clientID; // @synthesize clientID;
- (void).cxx_destruct;
- (id)colorScheme;
@property(readonly, nonatomic) GMDCContainerScheme *containerScheme;
- (id)initWithClientID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

