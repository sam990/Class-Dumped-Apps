//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletGalleryEntry-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletGalleryEntry : NSObject <SOJUGalleryServletGalleryEntry>
{
    NSString *_entryId;
    NSNumber *_seqNum;
    NSNumber *_entryType;
    NSArray *_snaps;
    NSArray *_highlightedSnapIds;
    NSNumber *_createTime;
    NSNumber *_status;
    NSString *_title;
    NSNumber *_isPrivate;
    NSNumber *_lastAutosaveTime;
    NSString *_externalId;
    NSNumber *_entrySource;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, copy, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(readonly, copy, nonatomic) NSNumber *lastAutosaveTime; // @synthesize lastAutosaveTime=_lastAutosaveTime;
@property(readonly, copy, nonatomic) NSNumber *isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy, nonatomic) NSArray *highlightedSnapIds; // @synthesize highlightedSnapIds=_highlightedSnapIds;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSNumber *entryType; // @synthesize entryType=_entryType;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntryId:(id)arg1 seqNum:(id)arg2 entryType:(id)arg3 snaps:(id)arg4 highlightedSnapIds:(id)arg5 createTime:(id)arg6 status:(id)arg7 title:(id)arg8 isPrivate:(id)arg9 lastAutosaveTime:(id)arg10 externalId:(id)arg11 entrySource:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)entrySourceEnum;
- (int)entrySourceValue;
- (long long)lastAutosaveTimeValue;
- (_Bool)isPrivateValue;
- (long long)statusEnum;
- (int)statusValue;
- (long long)createTimeValue;
- (long long)entryTypeEnum;
- (int)entryTypeValue;
- (long long)seqNumValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
