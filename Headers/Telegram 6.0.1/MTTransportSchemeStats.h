//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MtProtoKit/NSCoding-Protocol.h>

@interface MTTransportSchemeStats : NSObject <NSCoding>
{
    int _lastFailureTimestamp;
    int _lastResponseTimestamp;
}

+ (id)formatStats:(id)arg1;
@property(readonly, nonatomic) int lastResponseTimestamp; // @synthesize lastResponseTimestamp=_lastResponseTimestamp;
@property(readonly, nonatomic) int lastFailureTimestamp; // @synthesize lastFailureTimestamp=_lastFailureTimestamp;
- (id)description;
- (id)withUpdatedLastResponseTimestamp:(int)arg1;
- (id)withUpdatedLastFailureTimestamp:(int)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastFailureTimestamp:(int)arg1 lastResponseTimestamp:(int)arg2;

@end

