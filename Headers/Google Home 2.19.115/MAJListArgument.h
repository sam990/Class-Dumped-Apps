//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, MAJArgument, MAJFormattedValue;

@interface MAJListArgument : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MAJFormattedValue *addItemButtonLabel; // @dynamic addItemButtonLabel;
@property(retain, nonatomic) MAJArgument *addItemTemplate; // @dynamic addItemTemplate;
@property(nonatomic) int addItemVeUiType; // @dynamic addItemVeUiType;
@property(nonatomic) _Bool hasAddItemButtonLabel; // @dynamic hasAddItemButtonLabel;
@property(nonatomic) _Bool hasAddItemTemplate; // @dynamic hasAddItemTemplate;
@property(nonatomic) _Bool hasAddItemVeUiType; // @dynamic hasAddItemVeUiType;
@property(retain, nonatomic) GPBInt32Array *shownArgumentIdArray; // @dynamic shownArgumentIdArray;
@property(readonly, nonatomic) unsigned long long shownArgumentIdArray_Count; // @dynamic shownArgumentIdArray_Count;

@end

