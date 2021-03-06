//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;
@protocol PSPDFAppearanceModeManagerDelegate;

@interface PSPDFAppearanceModeManager : NSObject
{
    struct {
        unsigned int savedAppearanceSettingsAvailable:1;
        unsigned int savedConfigurationSettingsAvailable:1;
    } _flags;
    unsigned long long _appearanceMode;
    id <PSPDFAppearanceModeManagerDelegate> _delegate;
    UIColor *_savedNavBarBarTintColor;
    UIColor *_savedNavBarTintColor;
    UIColor *_savedToolbarBarTintColor;
    UIColor *_savedToolbarTintColor;
    long long _savedNavBarBarStyle;
    long long _savedToolbarBarStyle;
    unsigned long long _savedTabbedBarStyle;
    UIColor *_savedBackgroundColor;
    long long _savedLabelViewBlurEffectStyle;
    UIColor *_savedLabelViewTextColor;
}

@property(retain, nonatomic) UIColor *savedLabelViewTextColor; // @synthesize savedLabelViewTextColor=_savedLabelViewTextColor;
@property(nonatomic) long long savedLabelViewBlurEffectStyle; // @synthesize savedLabelViewBlurEffectStyle=_savedLabelViewBlurEffectStyle;
@property(retain, nonatomic) UIColor *savedBackgroundColor; // @synthesize savedBackgroundColor=_savedBackgroundColor;
@property(nonatomic) unsigned long long savedTabbedBarStyle; // @synthesize savedTabbedBarStyle=_savedTabbedBarStyle;
@property(nonatomic) long long savedToolbarBarStyle; // @synthesize savedToolbarBarStyle=_savedToolbarBarStyle;
@property(nonatomic) long long savedNavBarBarStyle; // @synthesize savedNavBarBarStyle=_savedNavBarBarStyle;
@property(retain, nonatomic) UIColor *savedToolbarTintColor; // @synthesize savedToolbarTintColor=_savedToolbarTintColor;
@property(retain, nonatomic) UIColor *savedToolbarBarTintColor; // @synthesize savedToolbarBarTintColor=_savedToolbarBarTintColor;
@property(retain, nonatomic) UIColor *savedNavBarTintColor; // @synthesize savedNavBarTintColor=_savedNavBarTintColor;
@property(retain, nonatomic) UIColor *savedNavBarBarTintColor; // @synthesize savedNavBarBarTintColor=_savedNavBarBarTintColor;
@property(nonatomic) __weak id <PSPDFAppearanceModeManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long appearanceMode; // @synthesize appearanceMode=_appearanceMode;
- (void).cxx_destruct;
- (void)updateAppearanceForTextInputView:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)observeTextViewBeginNotifications;
- (void)updateWindow:(id)arg1 forAppearanceChangeAnimated:(_Bool)arg2;
- (void)updateConfiguration:(id)arg1 forMode:(unsigned long long)arg2;
- (void)applyAppearanceSettingsForMode:(unsigned long long)arg1;
- (id)renderOptionsForMode:(unsigned long long)arg1 withCurrentOptions:(id)arg2;
- (void)setAppearanceMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)init;

@end

