//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/EncodableObject.h>

@class NSArray;

@interface ReportTracerouteHopModel : EncodableObject
{
    long long _ttl;
    NSArray *_pings;
}

@property(retain, nonatomic) NSArray *pings; // @synthesize pings=_pings;
@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
- (void).cxx_destruct;
- (id)initWithTtl:(unsigned long long)arg1 pings:(id)arg2;
- (id)bestPing;

@end

