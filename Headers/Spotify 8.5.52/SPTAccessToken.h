//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SPTAccessToken : NSObject
{
    struct AccessToken _accessToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tokenType;
@property(readonly, nonatomic) NSDate *expiresAt;
@property(readonly, nonatomic) NSString *accessToken;
- (id)initWithAccessToken:(struct AccessToken *)arg1;

@end
