//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMUserCounterProtocol-Protocol.h"

@class NSString;

@interface TIMUserCounter : NSObject <TIMUserCounterProtocol>
{
    int _conversationType;
    long long _conversationShortId;
}

@property(nonatomic) int conversationType; // @synthesize conversationType=_conversationType;
@property(nonatomic) long long conversationShortId; // @synthesize conversationShortId=_conversationShortId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

