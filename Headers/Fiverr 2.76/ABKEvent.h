//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Appboy_iOS_SDK/NSCoding-Protocol.h>
#import <Appboy_iOS_SDK/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface ABKEvent : NSObject <NSCoding, NSCopying>
{
    NSDate *_time;
    NSString *_userId;
    NSString *_sessionId;
}

@property(copy) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSDate *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getDataAsJson;
- (id)getType;
- (id)proxyForJson;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

