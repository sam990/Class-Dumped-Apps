//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMApiResponseHeader, GPBEnumArray, NSMutableArray;

@interface GFMCanNominateParentForSupervisionResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool canNominateParentForSupervision; // @dynamic canNominateParentForSupervision;
@property(retain, nonatomic) NSMutableArray *collateralDevicesArray; // @dynamic collateralDevicesArray;
@property(readonly, nonatomic) unsigned long long collateralDevicesArray_Count; // @dynamic collateralDevicesArray_Count;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasCanNominateParentForSupervision; // @dynamic hasCanNominateParentForSupervision;
@property(retain, nonatomic) GPBEnumArray *requiredConsentArray; // @dynamic requiredConsentArray;
@property(readonly, nonatomic) unsigned long long requiredConsentArray_Count; // @dynamic requiredConsentArray_Count;
@property(retain, nonatomic) GPBEnumArray *unmetPreconditionArray; // @dynamic unmetPreconditionArray;
@property(readonly, nonatomic) unsigned long long unmetPreconditionArray_Count; // @dynamic unmetPreconditionArray_Count;

@end
