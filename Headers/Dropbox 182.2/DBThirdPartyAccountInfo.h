//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DBThirdPartyAccountInfo : NSObject
{
    _Bool _isEmailObfuscated;
    NSString *_email;
    NSString *_displayName;
    NSURL *_profileImageURL;
}

@property(readonly, nonatomic) NSURL *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool isEmailObfuscated; // @synthesize isEmailObfuscated=_isEmailObfuscated;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)initWithEmail:(id)arg1 isEmailObfuscated:(_Bool)arg2 displayName:(id)arg3 profileImageURL:(id)arg4;

@end

