//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRCSemanticResult, NSString;

@interface GRCPartialPart : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSemanticResult; // @dynamic hasSemanticResult;
@property(nonatomic) _Bool hasStability; // @dynamic hasStability;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) GRCSemanticResult *semanticResult; // @dynamic semanticResult;
@property(nonatomic) double stability; // @dynamic stability;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

