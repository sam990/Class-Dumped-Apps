//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, SCSSMStreamToken_DebugInfo;

@interface SCSSMStreamToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *criticalStoriesBf; // @dynamic criticalStoriesBf;
@property(retain, nonatomic) SCSSMStreamToken_DebugInfo *debugInfo; // @dynamic debugInfo;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) long long lastP2RTsSecs; // @dynamic lastP2RTsSecs;
@property(nonatomic) int nextScoringOffset; // @dynamic nextScoringOffset;
@property(retain, nonatomic) NSMutableArray *sessionsArray; // @dynamic sessionsArray;
@property(readonly, nonatomic) unsigned long long sessionsArray_Count; // @dynamic sessionsArray_Count;

@end
