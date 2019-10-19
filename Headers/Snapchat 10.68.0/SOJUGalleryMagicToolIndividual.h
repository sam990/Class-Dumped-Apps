//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryMagicToolIndividual-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryMagicToolIndividual : NSObject <SOJUGalleryMagicToolIndividual>
{
    NSString *_magicToolType;
    NSNumber *_totalEditCount;
    NSNumber *_finalEditCount;
    NSNumber *_resetCount;
    NSNumber *_sessionCount;
    NSNumber *_hasMagicImage;
    NSString *_resourceId;
    NSString *_resourceUrl;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, copy, nonatomic) NSNumber *hasMagicImage; // @synthesize hasMagicImage=_hasMagicImage;
@property(readonly, copy, nonatomic) NSNumber *sessionCount; // @synthesize sessionCount=_sessionCount;
@property(readonly, copy, nonatomic) NSNumber *resetCount; // @synthesize resetCount=_resetCount;
@property(readonly, copy, nonatomic) NSNumber *finalEditCount; // @synthesize finalEditCount=_finalEditCount;
@property(readonly, copy, nonatomic) NSNumber *totalEditCount; // @synthesize totalEditCount=_totalEditCount;
@property(readonly, copy, nonatomic) NSString *magicToolType; // @synthesize magicToolType=_magicToolType;
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
- (id)initWithMagicToolType:(id)arg1 totalEditCount:(id)arg2 finalEditCount:(id)arg3 resetCount:(id)arg4 sessionCount:(id)arg5 hasMagicImage:(id)arg6 resourceId:(id)arg7 resourceUrl:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)hasMagicImageValue;
- (int)sessionCountValue;
- (int)resetCountValue;
- (int)finalEditCountValue;
- (int)totalEditCountValue;
- (long long)magicToolTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
