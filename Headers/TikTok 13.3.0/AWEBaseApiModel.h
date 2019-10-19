//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface AWEBaseApiModel : MTLModel <MTLJSONSerializing>
{
    NSString *_requestID;
    NSNumber *_statusCode;
    NSNumber *_timestamp;
    NSString *_statusMsg;
    NSDictionary *_logPassback;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (void)load;
@property(retain, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(retain, nonatomic) NSString *statusMsg; // @synthesize statusMsg=_statusMsg;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (_Bool)awe_validate:(id *)arg1;
- (_Bool)awe_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)_mergeAllPropertyKeysWithLogPassback:(id)arg1;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void)_mergeAllPropertyKeysWithRequestId:(id)arg1;
- (void)mergeAllPropertyKeysWithRequestId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
