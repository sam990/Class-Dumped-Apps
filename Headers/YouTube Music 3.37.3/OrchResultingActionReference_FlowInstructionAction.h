//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSData;

@interface OrchResultingActionReference_FlowInstructionAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *dependencyGraphActionToken; // @dynamic dependencyGraphActionToken;
@property(nonatomic) int flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasDependencyGraphActionToken; // @dynamic hasDependencyGraphActionToken;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(retain, nonatomic) GPBInt64Array *mainPageComponentIdToSendBackArray; // @dynamic mainPageComponentIdToSendBackArray;
@property(readonly, nonatomic) unsigned long long mainPageComponentIdToSendBackArray_Count; // @dynamic mainPageComponentIdToSendBackArray_Count;

@end
