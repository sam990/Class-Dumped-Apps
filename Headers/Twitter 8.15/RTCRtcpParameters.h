//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RTCRtcpParameters : NSObject
{
    _Bool _isReducedSize;
    NSString *_cname;
}

@property(nonatomic) _Bool isReducedSize; // @synthesize isReducedSize=_isReducedSize;
@property(readonly, copy, nonatomic) NSString *cname; // @synthesize cname=_cname;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct RtcpParameters nativeParameters;
- (id)initWithNativeParameters:(const struct RtcpParameters *)arg1;
- (id)init;

@end
