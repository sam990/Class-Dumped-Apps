//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSDictionary, NSString;

@interface SPTLogMessageExternalAction1 : SPTLogMessage
{
    NSString *_sessionIdValue;
    NSString *_actionTypeValue;
    NSDictionary *_dataValue;
}

+ (id)messageWithSessionId:(id)arg1 actionType:(id)arg2 data:(id)arg3;
@property(copy, nonatomic) NSDictionary *dataValue; // @synthesize dataValue=_dataValue;
@property(copy, nonatomic) NSString *actionTypeValue; // @synthesize actionTypeValue=_actionTypeValue;
@property(copy, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
