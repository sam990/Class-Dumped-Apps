//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBSearchBarAccessoryButtonActionSheetPresenter, NSArray, NSString, UIImage, UIView;

@protocol DBSearchBarAccessoryButtonActionSheetPresenterDelegate <NSObject>
- (unsigned long long)currentSelectedStateForActionSheetPresenter:(DBSearchBarAccessoryButtonActionSheetPresenter *)arg1;
- (struct CGRect)sourceRectForActionSheetPresenter:(DBSearchBarAccessoryButtonActionSheetPresenter *)arg1;
- (UIView *)sourceViewForActionSheetPresenter:(DBSearchBarAccessoryButtonActionSheetPresenter *)arg1;
- (UIImage *)iconForActionSheetPresenter:(DBSearchBarAccessoryButtonActionSheetPresenter *)arg1 withState:(unsigned long long)arg2;
- (NSString *)titleForActionSheetPresenter:(DBSearchBarAccessoryButtonActionSheetPresenter *)arg1 withState:(unsigned long long)arg2;
- (NSArray *)allControlStatesForActionSheetPresenter:(DBSearchBarAccessoryButtonActionSheetPresenter *)arg1;
@end

