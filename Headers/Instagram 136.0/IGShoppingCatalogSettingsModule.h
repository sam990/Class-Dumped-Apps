//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGShoppingProductSourceViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/NativeIGShoppingCatalogSettingsModuleSpec-Protocol.h>
#import <InstagramAppCoreFramework/RCTIGUserSessionModule-Protocol.h>

@class IGUserSession, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface IGShoppingCatalogSettingsModule : NSObject <NativeIGShoppingCatalogSettingsModuleSpec, IGShoppingProductSourceViewControllerDelegate, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__541;
+ (const struct RCTMethodInfo *)__rct_export__370;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_09f1d460)arg1 perfLogger:(id)arg2;
- (void)productSourceViewControllerDidSelectCatalog:(id)arg1;
- (void)launchCatalogSelectionPage:(double)arg1 entryPoint:(id)arg2 waterfallId:(id)arg3 analyticsModule:(id)arg4;
- (void)selectCatalog:(id)arg1 entryPoint:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

