//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class SPTLanguageOnboardingContainerViewStyle, SPTLanguageOnboardingGridCellStyle, SPTLanguageOnboardingSettingsContainerViewStyle;
@protocol GLUEStyle;

@interface SPTLanguageOnboardingTheme : GLUEThemeBase
{
}

@property(readonly, copy, nonatomic) SPTLanguageOnboardingSettingsContainerViewStyle *settingsContainerViewStyle;
- (id)offlineViewStyle;
- (id)gridViewStyle;
- (id)headerViewStyle;
- (id)backgroundOverlayGradientStyle;
@property(readonly, copy, nonatomic) SPTLanguageOnboardingContainerViewStyle<GLUEStyle> *containerViewStyle;
@property(readonly, copy, nonatomic) SPTLanguageOnboardingGridCellStyle<GLUEStyle> *gridCellStyle;

@end
