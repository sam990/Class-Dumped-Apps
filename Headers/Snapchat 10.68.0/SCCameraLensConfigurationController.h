//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraViewBaseConfiguration.h"

@class SCLensesUIAppearanceConfiguration, SCLensesUIControllerState;

@interface SCCameraLensConfigurationController : SCCameraViewBaseConfiguration
{
    SCLensesUIAppearanceConfiguration *_lensAppearanceConfiguration;
    SCLensesUIControllerState *_lensControllerState;
}

- (void).cxx_destruct;
- (void)applyConfigurationWithCameraViewController:(id)arg1;
- (id)initWithApplyOption:(long long)arg1 lensAppearanceConfiguration:(id)arg2 lensControllerState:(id)arg3;

@end
