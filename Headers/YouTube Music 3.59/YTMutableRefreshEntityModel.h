//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTRefreshEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface YTMutableRefreshEntityModel : YTRefreshEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setEntityMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(nonatomic) long long refreshTime; // @dynamic refreshTime;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSDictionary *entityMetadata;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

