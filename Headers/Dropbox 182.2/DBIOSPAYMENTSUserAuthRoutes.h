//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBTransportClient;

@interface DBIOSPAYMENTSUserAuthRoutes : NSObject
{
    id <DBTransportClient> _client;
}

@property(readonly, nonatomic) id <DBTransportClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)iosPaymentPlansV2:(id)arg1 sysModel:(id)arg2 sysVersion:(id)arg3 deviceId:(id)arg4 clientLocale:(id)arg5 appName:(id)arg6;
- (id)iosPaymentPlansV2;
- (id)iosPaymentPlans:(id)arg1 sysModel:(id)arg2 sysVersion:(id)arg3 deviceId:(id)arg4 clientLocale:(id)arg5 appName:(id)arg6;
- (id)iosPaymentPlans;
- (id)init:(id)arg1;

@end

