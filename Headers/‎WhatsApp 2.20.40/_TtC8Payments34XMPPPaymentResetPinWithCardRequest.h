//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface _TtC8Payments34XMPPPaymentResetPinWithCardRequest : XMPPRequest
{
}

+ (id)identifierWithCredentialId:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithCredentialId:(id)arg1 deviceId:(id)arg2 token:(id)arg3 provider:(id)arg4 keyVersion:(id)arg5 encryptedFields:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

