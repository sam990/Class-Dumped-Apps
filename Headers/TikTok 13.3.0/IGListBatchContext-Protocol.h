//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGListSectionController, NSIndexPath, NSIndexSet;

@protocol IGListBatchContext <NSObject>
- (void)revertInvalidInteractiveMoveFromIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)moveInSectionControllerInteractive:(IGListSectionController *)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)moveSectionControllerInteractive:(IGListSectionController *)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)reloadSectionController:(IGListSectionController *)arg1;
- (void)moveInSectionController:(IGListSectionController *)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)deleteInSectionController:(IGListSectionController *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)insertInSectionController:(IGListSectionController *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)reloadInSectionController:(IGListSectionController *)arg1 atIndexes:(NSIndexSet *)arg2;
@end
