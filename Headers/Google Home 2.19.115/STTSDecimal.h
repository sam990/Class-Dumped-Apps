//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, STTSMorphosyntacticFeatureVector;

@interface STTSDecimal : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *codeSwitch; // @dynamic codeSwitch;
@property(copy, nonatomic) NSString *exponent; // @dynamic exponent;
@property(retain, nonatomic) NSMutableArray *fieldOrderArray; // @dynamic fieldOrderArray;
@property(readonly, nonatomic) unsigned long long fieldOrderArray_Count; // @dynamic fieldOrderArray_Count;
@property(copy, nonatomic) NSString *fractionalPart; // @dynamic fractionalPart;
@property(nonatomic) _Bool hasCodeSwitch; // @dynamic hasCodeSwitch;
@property(nonatomic) _Bool hasExponent; // @dynamic hasExponent;
@property(nonatomic) _Bool hasFractionalPart; // @dynamic hasFractionalPart;
@property(nonatomic) _Bool hasIntegerPart; // @dynamic hasIntegerPart;
@property(nonatomic) _Bool hasMorphosyntacticFeatures; // @dynamic hasMorphosyntacticFeatures;
@property(nonatomic) _Bool hasNegative; // @dynamic hasNegative;
@property(nonatomic) _Bool hasPreserveOrder; // @dynamic hasPreserveOrder;
@property(nonatomic) _Bool hasQuantity; // @dynamic hasQuantity;
@property(nonatomic) _Bool hasStructuredFeatures; // @dynamic hasStructuredFeatures;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(copy, nonatomic) NSString *integerPart; // @dynamic integerPart;
@property(copy, nonatomic) NSString *morphosyntacticFeatures; // @dynamic morphosyntacticFeatures;
@property(nonatomic) _Bool negative; // @dynamic negative;
@property(nonatomic) _Bool preserveOrder; // @dynamic preserveOrder;
@property(copy, nonatomic) NSString *quantity; // @dynamic quantity;
@property(retain, nonatomic) STTSMorphosyntacticFeatureVector *structuredFeatures; // @dynamic structuredFeatures;
@property(nonatomic) int style; // @dynamic style;

@end

