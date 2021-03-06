//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGCameraEffectProduct, IGFeedItem, IGSessionTracker, IGShoppingCameraCoordinator, IGShoppingProductGroup, IGSponsoredSupportConfiguration, IGUserSession, NSString, UIViewController;
@protocol IGShoppingCameraCoordinatorDelegate, IGStoryCreationViewControllerNavigationDelegate, IGStoryCreationViewControllerType, UIViewControllerTransitioningDelegate;

@protocol IGShoppingCameraIntf <NSObject>
+ (UIViewController<IGStoryCreationViewControllerType> *)shoppingCameraViewControllerWithCoordinator:(IGShoppingCameraCoordinator *)arg1 entryPoint:(unsigned long long)arg2 userSession:(IGUserSession *)arg3 transitioningDelegate:(id <UIViewControllerTransitioningDelegate>)arg4 navigationDelegate:(id <IGStoryCreationViewControllerNavigationDelegate>)arg5;
+ (IGShoppingCameraCoordinator *)shoppingCameraCoordinatorWithInitialARProduct:(IGCameraEffectProduct *)arg1 initialProductGroup:(IGShoppingProductGroup *)arg2 userSession:(IGUserSession *)arg3 delegate:(id <IGShoppingCameraCoordinatorDelegate>)arg4 feedItem:(IGFeedItem *)arg5 sponsoredSupportConfiguration:(IGSponsoredSupportConfiguration *)arg6 entryPoint:(NSString *)arg7 priorModule:(NSString *)arg8 checkoutSessionId:(NSString *)arg9 shoppingSessionTracker:(IGSessionTracker *)arg10;
@end

