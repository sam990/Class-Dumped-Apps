//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGPushRegistrationHelper;
@protocol IGPushNotificationRegisterListenerAnnouncer;

@protocol IGPushKitServiceIntf <NSObject>
+ (id)pushKitServiceWithPushRegistrationHelper:(IGPushRegistrationHelper *)arg1 pushHandlingBlock:(void (^)(NSDictionary *))arg2 pushRegistrationAnnouncer:(id <IGPushNotificationRegisterListenerAnnouncer>)arg3;
@end

