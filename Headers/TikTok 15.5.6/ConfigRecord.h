//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ConfigRecord : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *config; // @dynamic config;
@property(copy, nonatomic) NSString *createTime; // @dynamic createTime;
@property(nonatomic) _Bool hasConfig; // @dynamic hasConfig;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasNote; // @dynamic hasNote;
@property(nonatomic) _Bool hasOperator_p; // @dynamic hasOperator_p;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *note; // @dynamic note;
@property(copy, nonatomic) NSString *operator_p; // @dynamic operator_p;
@property(nonatomic) int version; // @dynamic version;

@end

