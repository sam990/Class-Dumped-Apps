//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, YTReelCameraFlowCoordinator;

@protocol YTReelCameraFlowCoordinatorDelegate <NSObject>
- (UIViewController *)contentOverlayViewControllerForCoordinator:(YTReelCameraFlowCoordinator *)arg1;
- (UIViewController *)contentViewControllerForCoordinator:(YTReelCameraFlowCoordinator *)arg1;
- (void)setContentOverlayViewController:(UIViewController *)arg1 fromCoordinator:(YTReelCameraFlowCoordinator *)arg2;
- (void)setContentViewController:(UIViewController *)arg1 fromCoordinator:(YTReelCameraFlowCoordinator *)arg2;
@end
