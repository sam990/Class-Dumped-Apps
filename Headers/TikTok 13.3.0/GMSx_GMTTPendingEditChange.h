//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_GMTTPendingEditChange : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attributeReportArray; // @dynamic attributeReportArray;
@property(readonly, nonatomic) unsigned long long attributeReportArray_Count; // @dynamic attributeReportArray_Count;
@property(copy, nonatomic) NSString *editId; // @dynamic editId;
@property(copy, nonatomic) NSString *featureCategory; // @dynamic featureCategory;
@property(nonatomic) _Bool hasEditId; // @dynamic hasEditId;
@property(nonatomic) _Bool hasFeatureCategory; // @dynamic hasFeatureCategory;
@property(nonatomic) _Bool hasLoggedUmeId; // @dynamic hasLoggedUmeId;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(copy, nonatomic) NSString *loggedUmeId; // @dynamic loggedUmeId;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;

@end
