//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPVolumeView, UIWindow;

@interface SPTVolumeSystemPopupHider : NSObject
{
    _Bool _systemHUDDisabled;
    _Bool _isDisabling;
    UIWindow *_window;
    MPVolumeView *_systemVolumeView;
}

@property(nonatomic) _Bool isDisabling; // @synthesize isDisabling=_isDisabling;
@property(retain, nonatomic) MPVolumeView *systemVolumeView; // @synthesize systemVolumeView=_systemVolumeView;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) _Bool systemHUDDisabled; // @synthesize systemHUDDisabled=_systemHUDDisabled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableSystemVolumeHUD;
- (void)disableSystemVolumeHUDWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithWindow:(id)arg1;

@end
