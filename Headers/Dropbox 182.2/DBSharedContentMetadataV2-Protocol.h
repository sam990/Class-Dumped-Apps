//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBSharedContentPermissionsV2, NSString;
@protocol DBSharedContentPolicy;

@protocol DBSharedContentMetadataV2
@property(nonatomic, readonly) DBSharedContentPermissionsV2 *permissions;
@property(nonatomic, readonly) id <DBSharedContentPolicy> policy;
@property(nonatomic, readonly) NSString *ownerTeamName;
@property(nonatomic, readonly) NSString *ownerTeamId;
@property(nonatomic, readonly) NSString *parentSharedFolderId;
@property(nonatomic, readonly) NSString *pathLower;
@property(nonatomic, readonly) NSString *name;
@end

