//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTAPIAssistantIntentUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *dialogIntentStateId; // @dynamic dialogIntentStateId;
@property(nonatomic) _Bool hasDialogIntentStateId; // @dynamic hasDialogIntentStateId;
@property(nonatomic) _Bool hasIntentName; // @dynamic hasIntentName;
@property(retain, nonatomic) NSMutableArray *intentFieldUpdateArray; // @dynamic intentFieldUpdateArray;
@property(readonly, nonatomic) unsigned long long intentFieldUpdateArray_Count; // @dynamic intentFieldUpdateArray_Count;
@property(copy, nonatomic) NSString *intentName; // @dynamic intentName;

@end

