//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTCollectionFiltering-Protocol.h"
#import "SPTCollectionSectionedEntityList-Protocol.h"
#import "SPTCollectionSorting-Protocol.h"

@class NSArray, NSIndexPath, NSString;

@protocol SPTCollectionAlbumsModel <NSObject, SPTCollectionFiltering, SPTCollectionSectionedEntityList, SPTCollectionSorting>
@property(nonatomic) _Bool showOnlyCompleteAlbums;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSString *username;
- (unsigned long long)flatIndexForIndexPath:(NSIndexPath *)arg1;
- (void)load;
- (unsigned long long)offlineSyncStateForAlbumAtIndexPath:(NSIndexPath *)arg1;
@end
