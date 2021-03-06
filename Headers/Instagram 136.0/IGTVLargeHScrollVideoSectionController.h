//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGTVHScrollVideoSectionController.h>

#import <InstagramAppCoreFramework/IGTVLargeHScrollVideoCellDelegate-Protocol.h>

@class NSString;
@protocol IGTVLargeHScrollVideoSectionControllerDelegate;

@interface IGTVLargeHScrollVideoSectionController : IGTVHScrollVideoSectionController <IGTVLargeHScrollVideoCellDelegate>
{
    long long _style;
    id <IGTVLargeHScrollVideoSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_metadataUser;
- (id)_metadataViewModel;
- (id)_videoViewModelAtIndex:(long long)arg1;
- (id)_visibleCell;
- (void)didTapProfileButtonForLargeHScrollVideoCell:(id)arg1;
- (void)didLongPressLargeHScrollVideoCell:(id)arg1;
- (void)reconfigureVisibleCell;
- (void)didLongPressFeedItem:(id)arg1;
- (void)didTapFeedItem:(id)arg1;
- (double)imageWidthForItem;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 style:(long long)arg2 analyticsModule:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

