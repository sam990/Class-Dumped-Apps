//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import "YTChannelListItemCellDelegate-Protocol.h"
#import "YTNotificationServiceObserver-Protocol.h"
#import "YTSubscriptionServiceObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class NSString, YTActionSheetController, YTCommandRouter, YTNotificationMultiToggleButton;

@interface YTChannelListItemCellController : YTInnerTubeCellController <YTChannelListItemCellDelegate, YTNotificationServiceObserver, YTSubscriptionServiceObserver, YTSystemNotificationsObserver>
{
    _Bool _hideUnreadIndicator;
    YTCommandRouter *_commandRouter;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
    YTActionSheetController *_notificationInlineBellMenuController;
}

- (void).cxx_destruct;
- (id)notificationMultiToggleRenderer;
- (void)hideUnreadIndicator;
- (void)handleActions:(id)arg1 channelID:(id)arg2;
- (void)didSelectInlineMenuItem:(id)arg1;
- (void)openInlineBellMenu;
- (void)didPressNotificationMultiToggleButton;
- (void)setCell:(id)arg1;
- (void)didSelectItem;
- (void)appDidBecomeActive:(id)arg1;
- (void)didModifyChannelNotificationPreferenceWithResponse:(id)arg1;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (_Bool)isPresentingInlineBellMenu;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
