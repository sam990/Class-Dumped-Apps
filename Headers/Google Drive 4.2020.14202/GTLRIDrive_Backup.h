//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GTLRObject.h>

@class GTLRIDrive_Backup_BackupSummary, NSString;

@interface GTLRIDrive_Backup : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *backupSource; // @dynamic backupSource;
@property(retain, nonatomic) GTLRIDrive_Backup_BackupSummary *backupSummary; // @dynamic backupSummary;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(copy, nonatomic) NSString *extractionState; // @dynamic extractionState;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *lastBackupDate; // @dynamic lastBackupDate;
@property(copy, nonatomic) NSString *targetFolderId; // @dynamic targetFolderId;

@end

