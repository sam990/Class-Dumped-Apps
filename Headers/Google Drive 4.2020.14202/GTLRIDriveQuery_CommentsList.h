//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GTLRIDriveQuery.h>

@class NSString;

@interface GTLRIDriveQuery_CommentsList : GTLRIDriveQuery
{
}

+ (id)queryWithFileId:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *fileId; // @dynamic fileId;
@property(nonatomic) _Bool includeDeleted; // @dynamic includeDeleted;
@property(nonatomic) _Bool includeSuggestions; // @dynamic includeSuggestions;
@property(nonatomic) long long maxResults; // @dynamic maxResults;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *updatedMin; // @dynamic updatedMin;

@end

