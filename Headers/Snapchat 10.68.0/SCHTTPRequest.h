//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSDictionary, NSURL;

@interface SCHTTPRequest : NSObject <NSCopying>
{
    long long _method;
    NSURL *_url;
    NSDictionary *_headers;
    NSData *_body;
}

@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long method; // @synthesize method=_method;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMethod:(long long)arg1 url:(id)arg2 headers:(id)arg3 body:(id)arg4;

@end
