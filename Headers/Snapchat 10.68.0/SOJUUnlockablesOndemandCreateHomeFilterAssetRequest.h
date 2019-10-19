//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandCreateHomeFilterAssetRequest-Protocol.h"

@class NSString;

@interface SOJUUnlockablesOndemandCreateHomeFilterAssetRequest : NSObject <SOJUUnlockablesOndemandCreateHomeFilterAssetRequest>
{
    NSString *_assetBase64Str;
    NSString *_assetName;
    NSString *_templateId;
    NSString *_templateInstanceId;
    NSString *_categoryId;
    NSString *_categoryName;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, copy, nonatomic) NSString *templateInstanceId; // @synthesize templateInstanceId=_templateInstanceId;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(readonly, copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(readonly, copy, nonatomic) NSString *assetBase64Str; // @synthesize assetBase64Str=_assetBase64Str;
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
- (id)initWithAssetBase64Str:(id)arg1 assetName:(id)arg2 templateId:(id)arg3 templateInstanceId:(id)arg4 categoryId:(id)arg5 categoryName:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
