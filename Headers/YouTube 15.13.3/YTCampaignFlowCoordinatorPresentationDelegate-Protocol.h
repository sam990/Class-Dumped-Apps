//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIViewController, YTCampaignFlowCoordinator;

@protocol YTCampaignFlowCoordinatorPresentationDelegate <NSObject>
- (_Bool)flowCoordinator:(YTCampaignFlowCoordinator *)arg1 isPresentingStateViewController:(UIViewController *)arg2;
- (void)flowCoordinator:(YTCampaignFlowCoordinator *)arg1 dismissStateViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)flowCoordinator:(YTCampaignFlowCoordinator *)arg1 presentStateViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
@end
