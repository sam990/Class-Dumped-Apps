//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGFeedItem, IGTVFeedItemActionsController, NSString;

@protocol IGTVFeedItemActionsControllerDelegate <NSObject>
- (void)actionsControllerDidFinish:(IGTVFeedItemActionsController *)arg1;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapEditBusinessPartnerForFeedItem:(IGFeedItem *)arg2;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapTagBusinessPartnerForFeedItem:(IGFeedItem *)arg2;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapRemoveBrandedContentTagForFeedItem:(IGFeedItem *)arg2;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapAboutBrandedContentForFeedItem:(IGFeedItem *)arg2;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapInsightsForFeedItem:(IGFeedItem *)arg2;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapLikeAction:(_Bool)arg2 feedItem:(IGFeedItem *)arg3 parentMediaPK:(NSString *)arg4;
- (void)actionsController:(IGTVFeedItemActionsController *)arg1 didTapEditForFeedItem:(IGFeedItem *)arg2;
@end

