//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@interface PhotosAssistantMigrationReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int attemptedImportCount; // @dynamic attemptedImportCount;
@property(nonatomic) int endPhase; // @dynamic endPhase;
@property(nonatomic) _Bool hasAttemptedImportCount; // @dynamic hasAttemptedImportCount;
@property(nonatomic) _Bool hasEndPhase; // @dynamic hasEndPhase;
@property(nonatomic) _Bool hasStartPhase; // @dynamic hasStartPhase;
@property(nonatomic) _Bool hasSuccessfulImportCount; // @dynamic hasSuccessfulImportCount;
@property(nonatomic) _Bool hasWasFlagSet; // @dynamic hasWasFlagSet;
@property(nonatomic) int startPhase; // @dynamic startPhase;
@property(nonatomic) unsigned int successfulImportCount; // @dynamic successfulImportCount;
@property(nonatomic) _Bool wasFlagSet; // @dynamic wasFlagSet;

@end

