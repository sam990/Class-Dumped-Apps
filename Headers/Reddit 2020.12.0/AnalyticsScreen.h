//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsScreen : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _widthIsSet;
    _Bool _heightIsSet;
    _Bool _viewport_widthIsSet;
    _Bool _viewport_heightIsSet;
    _Bool _view_typeIsSet;
    _Bool _themeIsSet;
    _Bool _in_focus;
    _Bool _in_focusIsSet;
    _Bool _browser_tab_idIsSet;
    _Bool _scroll_positionIsSet;
    _Bool _app_font_size_deltaIsSet;
    _Bool _ios_font_sizeIsSet;
    _Bool _android_font_sizeIsSet;
    _Bool _auto_dark_modeIsSet;
    int _width;
    int _height;
    int _viewport_width;
    int _viewport_height;
    int _scroll_position;
    int _app_font_size_delta;
    NSString *_view_type;
    NSString *_theme;
    NSString *_browser_tab_id;
    NSString *_ios_font_size;
    double _android_font_size;
    NSString *_auto_dark_mode;
}

@property(nonatomic) _Bool auto_dark_modeIsSet; // @synthesize auto_dark_modeIsSet=_auto_dark_modeIsSet;
@property(copy, nonatomic) NSString *auto_dark_mode; // @synthesize auto_dark_mode=_auto_dark_mode;
@property(nonatomic) _Bool android_font_sizeIsSet; // @synthesize android_font_sizeIsSet=_android_font_sizeIsSet;
@property(nonatomic) double android_font_size; // @synthesize android_font_size=_android_font_size;
@property(nonatomic) _Bool ios_font_sizeIsSet; // @synthesize ios_font_sizeIsSet=_ios_font_sizeIsSet;
@property(copy, nonatomic) NSString *ios_font_size; // @synthesize ios_font_size=_ios_font_size;
@property(nonatomic) _Bool app_font_size_deltaIsSet; // @synthesize app_font_size_deltaIsSet=_app_font_size_deltaIsSet;
@property(nonatomic) int app_font_size_delta; // @synthesize app_font_size_delta=_app_font_size_delta;
@property(nonatomic) _Bool scroll_positionIsSet; // @synthesize scroll_positionIsSet=_scroll_positionIsSet;
@property(nonatomic) int scroll_position; // @synthesize scroll_position=_scroll_position;
@property(nonatomic) _Bool browser_tab_idIsSet; // @synthesize browser_tab_idIsSet=_browser_tab_idIsSet;
@property(copy, nonatomic) NSString *browser_tab_id; // @synthesize browser_tab_id=_browser_tab_id;
@property(nonatomic) _Bool in_focusIsSet; // @synthesize in_focusIsSet=_in_focusIsSet;
@property(nonatomic) _Bool in_focus; // @synthesize in_focus=_in_focus;
@property(nonatomic) _Bool themeIsSet; // @synthesize themeIsSet=_themeIsSet;
@property(copy, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool view_typeIsSet; // @synthesize view_typeIsSet=_view_typeIsSet;
@property(copy, nonatomic) NSString *view_type; // @synthesize view_type=_view_type;
@property(nonatomic) _Bool viewport_heightIsSet; // @synthesize viewport_heightIsSet=_viewport_heightIsSet;
@property(nonatomic) int viewport_height; // @synthesize viewport_height=_viewport_height;
@property(nonatomic) _Bool viewport_widthIsSet; // @synthesize viewport_widthIsSet=_viewport_widthIsSet;
@property(nonatomic) int viewport_width; // @synthesize viewport_width=_viewport_width;
@property(nonatomic) _Bool heightIsSet; // @synthesize heightIsSet=_heightIsSet;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) _Bool widthIsSet; // @synthesize widthIsSet=_widthIsSet;
@property(nonatomic) int width; // @synthesize width=_width;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetAuto_dark_mode;
- (void)unsetAndroid_font_size;
- (void)unsetIos_font_size;
- (void)unsetApp_font_size_delta;
- (void)unsetScroll_position;
- (void)unsetBrowser_tab_id;
- (void)unsetIn_focus;
- (void)unsetTheme;
- (void)unsetView_type;
- (void)unsetViewport_height;
- (void)unsetViewport_width;
- (void)unsetHeight;
- (void)unsetWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 viewport_width:(int)arg3 viewport_height:(int)arg4 view_type:(id)arg5 theme:(id)arg6 in_focus:(_Bool)arg7 browser_tab_id:(id)arg8 scroll_position:(int)arg9 app_font_size_delta:(int)arg10 ios_font_size:(id)arg11 android_font_size:(double)arg12 auto_dark_mode:(id)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

