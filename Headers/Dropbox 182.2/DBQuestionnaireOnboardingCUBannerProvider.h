//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileActionsControllerDelegate-Protocol.h"

@interface DBQuestionnaireOnboardingCUBannerProvider : NSObject <DBFileActionsControllerDelegate>
{
    // Error parsing type: , name: userState
    // Error parsing type: , name: modalManager
    // Error parsing type: , name: cameraUploadManager
    // Error parsing type: , name: bannerManagerMap
    // Error parsing type: , name: currentBanner
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: forcedDestinationHelper
    // Error parsing type: , name: isEnablingCU
    // Error parsing type: , name: titleText
    // Error parsing type: , name: primaryCtaText
    // Error parsing type: , name: secondaryCtaText
    // Error parsing type: , name: image
}

- (void).cxx_destruct;
- (id)init;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)actionsControllerDidQueueWith:(id)arg1 uploads:(id)arg2 destinationDirPath:(id)arg3 inAccountWithUserID:(id)arg4;
- (_Bool)actionsControllerAllowModalPresentationOverMaster:(id)arg1;
- (_Bool)actionsControllerShouldForceDestinationInDestinationAndOptionsPicker:(id)arg1;
- (void)cuSettingsChanged;
- (void)didFinishOnboarding;
- (void)checkForNewBanners;
- (id)registerBannerManager:(id)arg1;
- (void)dealloc;
- (id)initWithUserState:(id)arg1 modalManager:(id)arg2 cameraUploadManager:(id)arg3 analyticsLogger:(id)arg4;

@end

