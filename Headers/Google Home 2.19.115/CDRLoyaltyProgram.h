//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRLoyaltyInfo, CDRLoyaltyProgramDetails, NSMutableArray;

@interface CDRLoyaltyProgram : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *affiliatedMerchantsArray; // @dynamic affiliatedMerchantsArray;
@property(readonly, nonatomic) unsigned long long affiliatedMerchantsArray_Count; // @dynamic affiliatedMerchantsArray_Count;
@property(nonatomic) _Bool hasLoyaltyInfo; // @dynamic hasLoyaltyInfo;
@property(nonatomic) _Bool hasLoyaltyProgramDetails; // @dynamic hasLoyaltyProgramDetails;
@property(retain, nonatomic) CDRLoyaltyInfo *loyaltyInfo; // @dynamic loyaltyInfo;
@property(retain, nonatomic) CDRLoyaltyProgramDetails *loyaltyProgramDetails; // @dynamic loyaltyProgramDetails;

@end

