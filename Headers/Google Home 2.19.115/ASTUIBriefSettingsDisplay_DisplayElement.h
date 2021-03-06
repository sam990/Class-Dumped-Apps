//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTUIBriefSettingsDisplay_DisplayElement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *configDescription; // @dynamic configDescription;
@property(copy, nonatomic) NSString *configErrorMessage; // @dynamic configErrorMessage;
@property(copy, nonatomic) NSString *configLink; // @dynamic configLink;
@property(retain, nonatomic) NSMutableArray *configUriArray; // @dynamic configUriArray;
@property(readonly, nonatomic) unsigned long long configUriArray_Count; // @dynamic configUriArray_Count;
@property(nonatomic) _Bool configured; // @dynamic configured;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool experimental; // @dynamic experimental;
@property(nonatomic) _Bool hasConfigDescription; // @dynamic hasConfigDescription;
@property(nonatomic) _Bool hasConfigErrorMessage; // @dynamic hasConfigErrorMessage;
@property(nonatomic) _Bool hasConfigLink; // @dynamic hasConfigLink;
@property(nonatomic) _Bool hasConfigured; // @dynamic hasConfigured;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasExperimental; // @dynamic hasExperimental;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *label; // @dynamic label;

@end

