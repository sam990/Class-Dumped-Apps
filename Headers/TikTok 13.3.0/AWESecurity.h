//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SGMSafeGuardDelegate-Protocol.h"

@class AWESecurityConfig, NSString;
@protocol AWESecurityDelegate;

@interface AWESecurity : NSObject <SGMSafeGuardDelegate>
{
    AWESecurityConfig *_config;
    id <AWESecurityDelegate> _delegate;
}

+ (void)uploadDataForEvent:(id)arg1;
+ (id)decryptString:(id)arg1;
+ (id)encryptString:(id)arg1;
+ (void)startForScene:(id)arg1;
+ (id)encryptURL:(id)arg1 formData:(id)arg2;
+ (void)adjustTime:(long long)arg1;
+ (id)config;
+ (void)startAutoSafeGuard;
+ (void)manualScheduleSelas;
+ (void)startWithConfig:(id)arg1 delegate:(id)arg2;
+ (id)sharedInstance;
+ (void)verificationCheck:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <AWESecurityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWESecurityConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (_Bool)sgm_needConfigSelas;
- (_Bool)isUseTTNet;
- (struct SGM_LocationCoordinate2D)sgm_currentLocation;
- (id)sgm_sessionID;
- (id)sgm_installID;
- (id)sgm_installChannel;
- (id)sgm_customDeviceID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
