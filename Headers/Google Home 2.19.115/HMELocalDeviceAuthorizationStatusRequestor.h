//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMEDeviceAuthData;

@interface HMELocalDeviceAuthorizationStatusRequestor : NSObject
{
    id <HMEDeviceAuthData> _authData;
}

+ (id)hashAndEncodeLocalAuthenticationToken:(id)arg1;
@property(readonly, nonatomic) id <HMEDeviceAuthData> authData; // @synthesize authData=_authData;
- (void).cxx_destruct;
- (void)checkAuthorizationStatusForDevices:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAuthData:(id)arg1;

@end

