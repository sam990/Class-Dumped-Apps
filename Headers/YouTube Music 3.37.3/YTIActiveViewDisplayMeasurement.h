//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIRegexUriMacroValidator;

@interface YTIActiveViewDisplayMeasurement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *endOfSessionCommandsArray; // @dynamic endOfSessionCommandsArray;
@property(readonly, nonatomic) unsigned long long endOfSessionCommandsArray_Count; // @dynamic endOfSessionCommandsArray_Count;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasRegexUriMacroValidator; // @dynamic hasRegexUriMacroValidator;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) YTIRegexUriMacroValidator *regexUriMacroValidator; // @dynamic regexUriMacroValidator;
@property(retain, nonatomic) NSMutableArray *viewableCommandsArray; // @dynamic viewableCommandsArray;
@property(readonly, nonatomic) unsigned long long viewableCommandsArray_Count; // @dynamic viewableCommandsArray_Count;

@end
