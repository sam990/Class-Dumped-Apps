//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface YTIKidsSigninToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int consentVersion; // @dynamic consentVersion;
@property(nonatomic) _Bool hasConsentVersion; // @dynamic hasConsentVersion;
@property(retain, nonatomic) GPBEnumArray *signinAccountStatesArray; // @dynamic signinAccountStatesArray;
@property(readonly, nonatomic) unsigned long long signinAccountStatesArray_Count; // @dynamic signinAccountStatesArray_Count;

@end
