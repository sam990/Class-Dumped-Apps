//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGUserSession, IGViewController, NSArray;
@protocol IGActivityFeedViewControllerType, IGNewsPresentationDelegate;

@protocol IGActivityIntf <NSObject>
+ (IGViewController *)shoppingActivityFeedViewControllerWithUserSession:(IGUserSession *)arg1 emphasizedStoryPKs:(NSArray *)arg2;
+ (IGViewController<IGActivityFeedViewControllerType> *)activityFeedViewControllerWithUserSession:(IGUserSession *)arg1 presentationDelegate:(id <IGNewsPresentationDelegate>)arg2;
@end

