//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class GOOCollectionView, NSIndexPath;

@protocol GOOCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (void)collectionView:(GOOCollectionView *)arg1 didEndEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(GOOCollectionView *)arg1 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg2;
@end
