//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/OGLDynamicColorTheme-Protocol.h>

@class NSString;
@protocol OGLColorPaletteProtocol, OGLColorThemeProtocol;

@interface OGLDynamicColorTheme : NSObject <OGLDynamicColorTheme>
{
    id <OGLColorPaletteProtocol> _primaryPalette;
    id <OGLColorPaletteProtocol> _secondaryPalette;
    id <OGLColorPaletteProtocol> _grayscalePalette;
    id <OGLColorThemeProtocol> _lightColorTheme;
    id <OGLColorThemeProtocol> _darkColorTheme;
    unsigned long long _userInterfaceStyle;
}

@property(readonly, nonatomic) unsigned long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) id <OGLColorThemeProtocol> darkColorTheme; // @synthesize darkColorTheme=_darkColorTheme;
@property(readonly, nonatomic) id <OGLColorThemeProtocol> lightColorTheme; // @synthesize lightColorTheme=_lightColorTheme;
@property(readonly, nonatomic) id <OGLColorPaletteProtocol> grayscalePalette; // @synthesize grayscalePalette=_grayscalePalette;
@property(readonly, nonatomic) id <OGLColorPaletteProtocol> secondaryPalette; // @synthesize secondaryPalette=_secondaryPalette;
@property(readonly, nonatomic) id <OGLColorPaletteProtocol> primaryPalette; // @synthesize primaryPalette=_primaryPalette;
- (void).cxx_destruct;
- (id)textColorWithPalette:(long long)arg1 backgroundPaletteType:(long long)arg2 titleType:(long long)arg3;
- (id)shadowColor;
- (id)scrimColor;
- (long long)preferredStatusBarStyle;
- (id)outlineColor;
- (id)iconColorWithPalette:(long long)arg1 forState:(long long)arg2;
- (id)headerColorWithPalette:(long long)arg1;
- (_Bool)googleLogoIgnoresInvertColors;
- (id)googleLogoImage;
- (id)googleLogoColor;
- (id)footerColorWithPalette:(long long)arg1;
- (id)extraInformationColor;
- (id)linkColor;
- (id)warningColor;
- (id)errorColor;
- (id)dividerColor;
- (id)contrastTheme;
- (id)cellColorWithPalette:(long long)arg1 forState:(long long)arg2;
- (id)buttonColorWithPalette:(long long)arg1 forState:(long long)arg2;
- (id)backgroundColorWithPalette:(long long)arg1 backgroundElevation:(long long)arg2;
- (id)initWithLightColorTheme:(id)arg1 darkColorTheme:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

