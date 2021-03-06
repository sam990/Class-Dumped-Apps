//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBXITokenAndSignature-Protocol.h"

@class NSString;
@protocol XBXIToken;

@interface SGTokenAndSignature : NSObject <XBXITokenAndSignature>
{
    id <XBXIToken> _token;
    NSString *_signature;
}

@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) id <XBXIToken> token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithTokenAndSignaturePayload:(id)arg1 token:(id)arg2 signature:(id)arg3 audienceURI:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

