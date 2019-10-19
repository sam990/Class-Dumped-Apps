//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTV3CallStateTransition : NSObject
{
    unsigned long long _from;
    unsigned long long _to;
    long long _reason;
    CDUnknownBlockType _announce;
}

@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long to; // @synthesize to=_to;
@property(readonly, nonatomic) unsigned long long from; // @synthesize from=_from;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)announceTransition;
- (id)initFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 reason:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 reason:(long long)arg3;

@end
