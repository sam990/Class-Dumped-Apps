//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSDate, NSMutableDictionary, NSString;

@interface MSADAToken : NSObject <NSCoding>
{
    NSDate *_expirationDate;
    NSMutableDictionary *_propertyBag;
    int _environment;
    NSString *_token;
    NSData *_sessionKey;
}

+ (id)scope;
@property(readonly) int environment; // @synthesize environment=_environment;
@property(readonly) NSData *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(readonly) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToMSADAToken:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isExpired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 expirationDate:(id)arg2 sessionKey:(id)arg3 environment:(int)arg4;
- (id)init;

@end

