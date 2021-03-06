//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItemTracker, IGSponsoredSupportConfiguration, IGUserSession, NSMutableDictionary, NSSet, NSString;

@interface IGFeedItemRenderingTracker : NSObject
{
    IGUserSession *_session;
    NSString *_module;
    IGFeedItemTracker *_feedItemTracker;
    NSMutableDictionary *_renderedRows;
    _Bool _enableDifferenceHash;
    _Bool _useLanczosScaling;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    _Bool _finishLogRenderingEvent;
}

@property(readonly, nonatomic) _Bool finishLogRenderingEvent; // @synthesize finishLogRenderingEvent=_finishLogRenderingEvent;
- (void).cxx_destruct;
- (id)_renderingLoggingAnalyticsForStoryItemView:(id)arg1 viewModel:(id)arg2 feedItem:(id)arg3;
- (id)_renderingLoggingAnalyticsForPoliticalAdFooterView:(id)arg1;
- (id)_renderingLoggingAnalyticsForStoryLandscapeViewView:(id)arg1;
- (id)_renderingLoggingAnalyticsForStoryVideoView:(id)arg1 feedItem:(id)arg2;
- (id)_renderingLoggingAnalyticsForStoryHeaderView:(id)arg1 viewModel:(id)arg2;
- (id)_renderingLoggingAnalyticsForStoryCTAView:(id)arg1 viewModel:(id)arg2;
- (id)_renderingLoggingAnalyticsForStoryPhotoView:(id)arg1 feedItem:(id)arg2;
- (id)_renderingLoggingAnalyticsForCellType:(long long)arg1 textType:(long long)arg2 collectionViewCell:(id)arg3 feedItem:(id)arg4;
- (id)_imageHashingAnalyticsForPhotoView:(id)arg1;
- (id)_renderingLoggingAnalyticsForVideoCell:(id)arg1 feedItem:(id)arg2;
- (id)_renderingLoggingAnalyticsForCTACell:(id)arg1 feedItem:(id)arg2;
- (id)_renderingLoggingAnalyticsForTextCell:(id)arg1 textType:(long long)arg2 feedItem:(id)arg3;
- (id)_renderingLoggingAnalyticsForCollectionCell:(id)arg1 feedItem:(id)arg2;
- (id)_renderingLoggingAnalyticsForPhotoCell:(id)arg1 feedItem:(id)arg2;
- (id)_renderingLoggingAnalyticsForHeaderCell:(id)arg1 feedItem:(id)arg2;
- (void)addLoggingExtraForStoryItemView:(id)arg1 viewModel:(id)arg2 feedItem:(id)arg3;
- (void)logRenderingEventForFeedItem:(id)arg1 withExtra:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *loggedComponentList;
- (void)addLoggingExtraForCell:(id)arg1 cellType:(long long)arg2 textType:(long long)arg3 feedItem:(id)arg4;
- (id)initWithFeedItemTracker:(id)arg1 sponsoredSupportConfiguration:(id)arg2 session:(id)arg3 module:(id)arg4;

@end

