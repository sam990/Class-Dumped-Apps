//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESWKABTestManager : NSObject
{
    _Bool _useBridgeEngineV2;
    _Bool _useCookiePlugin;
    _Bool _monitorJSBInvokeEvent;
}

+ (id)sharedManager;
@property(nonatomic, getter=shouldMonitorJSBInvokeEvent) _Bool monitorJSBInvokeEvent; // @synthesize monitorJSBInvokeEvent=_monitorJSBInvokeEvent;
@property(nonatomic, getter=shouldUseCookiePlugin) _Bool useCookiePlugin; // @synthesize useCookiePlugin=_useCookiePlugin;
@property(nonatomic, getter=shouldUseBridgeEngineV2) _Bool useBridgeEngineV2; // @synthesize useBridgeEngineV2=_useBridgeEngineV2;
- (id)init;

@end

