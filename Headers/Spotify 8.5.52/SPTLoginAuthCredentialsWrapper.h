//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginAuthCredentialsWrapper-Protocol.h"

@class NSString;

@interface SPTLoginAuthCredentialsWrapper : NSObject <SPTLoginAuthCredentialsWrapper>
{
    unsigned long long _type;
    id _credentials;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) id credentials; // @synthesize credentials=_credentials;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCredentials:(id)arg1 type:(unsigned long long)arg2 username:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
