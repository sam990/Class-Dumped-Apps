//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Perishable;

@interface GKSConsistencyTokenManager : NSObject
{
    Perishable *_tokenInfo;
}

+ (id)sharedInstance;
@property(retain) Perishable *tokenInfo; // @synthesize tokenInfo=_tokenInfo;
- (void).cxx_destruct;
- (void)updateTokenWithTimeout:(long long)arg1 tokenJar:(id)arg2;
- (void)updateTokenWithProtoHeader:(id)arg1;
@property(readonly, copy, nonatomic) NSString *token;

@end
