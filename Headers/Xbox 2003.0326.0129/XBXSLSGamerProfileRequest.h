//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXSLSRequest.h"

@interface XBXSLSGamerProfileRequest : XBXSLSRequest
{
}

- (id)getSettingsUrlParam:(id)arg1;
- (id)getDesiredSettings:(unsigned long long)arg1;
- (id)initWithResourceOwner:(id)arg1 desiredSettings:(unsigned long long)arg2 environment:(int)arg3 tokenProvider:(id)arg4 delegate:(id)arg5 ignoreCache:(_Bool)arg6;
- (id)initWithGamerTag:(id)arg1 desiredSettings:(unsigned long long)arg2 environment:(int)arg3 tokenProvider:(id)arg4 delegate:(id)arg5 ignoreCache:(_Bool)arg6;
- (id)initWithXuid:(id)arg1 desiredSettings:(unsigned long long)arg2 environment:(int)arg3 tokenProvider:(id)arg4 delegate:(id)arg5 ignoreCache:(_Bool)arg6;

@end

