//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFeatureControl, YTITemplateConfigProto;

@interface YTIWebConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFeatureControl *featureControl; // @dynamic featureControl;
@property(nonatomic) _Bool hasFeatureControl; // @dynamic hasFeatureControl;
@property(readonly, nonatomic) int templateConfigOneOfCase; // @dynamic templateConfigOneOfCase;
@property(retain, nonatomic) YTITemplateConfigProto *templateConfigProto; // @dynamic templateConfigProto;
@property(copy, nonatomic) NSString *templateConfigURL; // @dynamic templateConfigURL;

@end

