//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSIndexPath, NSString, PTVBroadcastDetailsViewModel;

@protocol PTVBroadcastDetailsViewModelDelegate <NSObject>
- (void)broadcastDetailsViewModelDidReloadData:(PTVBroadcastDetailsViewModel *)arg1;

@optional
- (void)broadcastDetailsViewModel:(PTVBroadcastDetailsViewModel *)arg1 didUpdateReplayViewerWithID:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)broadcastDetailsViewModel:(PTVBroadcastDetailsViewModel *)arg1 didUpdateLiveViewerWithID:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)broadcastDetailsViewModelDidUpdateNumberOfCommentsReceived:(PTVBroadcastDetailsViewModel *)arg1;
- (void)broadcastDetailsViewModelDidUpdateOccupancyMetrics:(PTVBroadcastDetailsViewModel *)arg1;
- (void)broadcastDetailsViewModelDidUpdateViewerCounts:(PTVBroadcastDetailsViewModel *)arg1;
@end

