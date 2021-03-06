//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface ADJActivityState : NSObject <NSCoding, NSCopying>
{
    _Bool _enabled;
    _Bool _isGdprForgotten;
    _Bool _askingAttribution;
    _Bool _updatePackages;
    _Bool _isPersisted;
    int _eventCount;
    int _sessionCount;
    int _subsessionCount;
    NSString *_uuid;
    NSString *_deviceToken;
    NSString *_adid;
    NSDictionary *_attributionDetails;
    double _timeSpent;
    double _lastActivity;
    double _sessionLength;
    NSMutableArray *_transactionIds;
    double _lastInterval;
}

+ (void)saveAppToken:(id)arg1;
@property(nonatomic) double lastInterval; // @synthesize lastInterval=_lastInterval;
@property(nonatomic) _Bool isPersisted; // @synthesize isPersisted=_isPersisted;
@property(retain, nonatomic) NSMutableArray *transactionIds; // @synthesize transactionIds=_transactionIds;
@property(nonatomic) double sessionLength; // @synthesize sessionLength=_sessionLength;
@property(nonatomic) double lastActivity; // @synthesize lastActivity=_lastActivity;
@property(nonatomic) double timeSpent; // @synthesize timeSpent=_timeSpent;
@property(nonatomic) int subsessionCount; // @synthesize subsessionCount=_subsessionCount;
@property(nonatomic) int sessionCount; // @synthesize sessionCount=_sessionCount;
@property(nonatomic) int eventCount; // @synthesize eventCount=_eventCount;
@property(retain, nonatomic) NSDictionary *attributionDetails; // @synthesize attributionDetails=_attributionDetails;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(nonatomic) _Bool updatePackages; // @synthesize updatePackages=_updatePackages;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool askingAttribution; // @synthesize askingAttribution=_askingAttribution;
@property(nonatomic) _Bool isGdprForgotten; // @synthesize isGdprForgotten=_isGdprForgotten;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)generateUniqueKey;
- (void)assignUuidOldMethod:(id)arg1;
- (void)assignUuid:(id)arg1;
- (_Bool)findTransactionId:(id)arg1;
- (void)addTransactionId:(id)arg1;
- (void)resetSessionAttributes:(double)arg1;
- (id)init;

@end

