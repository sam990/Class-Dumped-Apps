//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString;

@interface GHCAssistantLearnFilterCriteria : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *countryCodeArray; // @dynamic countryCodeArray;
@property(readonly, nonatomic) unsigned long long countryCodeArray_Count; // @dynamic countryCodeArray_Count;
@property(retain, nonatomic) NSMutableArray *deviceSuffixArray; // @dynamic deviceSuffixArray;
@property(readonly, nonatomic) unsigned long long deviceSuffixArray_Count; // @dynamic deviceSuffixArray_Count;
@property(copy, nonatomic) NSString *deviceSuffixRegex; // @dynamic deviceSuffixRegex;
@property(retain, nonatomic) NSMutableArray *linkedDeviceSuffixesArray; // @dynamic linkedDeviceSuffixesArray;
@property(readonly, nonatomic) unsigned long long linkedDeviceSuffixesArray_Count; // @dynamic linkedDeviceSuffixesArray_Count;
@property(retain, nonatomic) GPBEnumArray *linkedServicesArray; // @dynamic linkedServicesArray;
@property(readonly, nonatomic) unsigned long long linkedServicesArray_Count; // @dynamic linkedServicesArray_Count;
@property(nonatomic) int maxProtocolVersion; // @dynamic maxProtocolVersion;
@property(nonatomic) int minProtocolVersion; // @dynamic minProtocolVersion;
@property(retain, nonatomic) GPBEnumArray *platformsArray; // @dynamic platformsArray;
@property(readonly, nonatomic) unsigned long long platformsArray_Count; // @dynamic platformsArray_Count;
@property(retain, nonatomic) NSMutableArray *spaceTypeArray; // @dynamic spaceTypeArray;
@property(readonly, nonatomic) unsigned long long spaceTypeArray_Count; // @dynamic spaceTypeArray_Count;

@end

