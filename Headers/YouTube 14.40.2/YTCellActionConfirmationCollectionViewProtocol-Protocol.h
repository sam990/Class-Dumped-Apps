//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UICollectionViewCell;

@protocol YTCellActionConfirmationCollectionViewProtocol <NSObject>
- (void)didFinishAnimationToExitConfirmationModeWithCell:(UICollectionViewCell *)arg1;
- (void)didFinishAnimationToEnterConfirmationModeWithCell:(UICollectionViewCell *)arg1;
- (void)exitActionConfirmationModeWithCell:(UICollectionViewCell *)arg1;
- (void)enterActionConfirmationModeWithCell:(UICollectionViewCell *)arg1;
@end
