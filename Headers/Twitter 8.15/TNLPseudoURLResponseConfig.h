//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/NSCopying-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface TNLPseudoURLResponseConfig : NSObject <NSCopying>
{
    _Bool _canProvideRange;
    unsigned long long _bps;
    unsigned long long _latency;
    unsigned long long _delay;
    NSError *_failureError;
    long long _statusCode;
    NSString *_stringForIfRange;
    unsigned long long _redirectBehavior;
    NSDictionary *_extraRequestHeaders;
}

@property(copy, nonatomic) NSDictionary *extraRequestHeaders; // @synthesize extraRequestHeaders=_extraRequestHeaders;
@property(nonatomic) unsigned long long redirectBehavior; // @synthesize redirectBehavior=_redirectBehavior;
@property(copy, nonatomic) NSString *stringForIfRange; // @synthesize stringForIfRange=_stringForIfRange;
@property(nonatomic) _Bool canProvideRange; // @synthesize canProvideRange=_canProvideRange;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(nonatomic) unsigned long long latency; // @synthesize latency=_latency;
@property(nonatomic) unsigned long long bps; // @synthesize bps=_bps;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
