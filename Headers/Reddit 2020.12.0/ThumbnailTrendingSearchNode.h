//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselItemNode.h"

@class ASDisplayNode, ASNetworkImageNode, ASTextNode, Post, TrendingSearch;

@interface ThumbnailTrendingSearchNode : CarouselItemNode
{
    ASTextNode *_promotedLabelNode;
    ASTextNode *_queryTextNode;
    ASNetworkImageNode *_thumbnailNode;
    TrendingSearch *_trendingSearch;
    ASDisplayNode *_gradientNode;
}

@property(retain, nonatomic) ASDisplayNode *gradientNode; // @synthesize gradientNode=_gradientNode;
@property(retain, nonatomic) TrendingSearch *trendingSearch; // @synthesize trendingSearch=_trendingSearch;
@property(retain, nonatomic) ASNetworkImageNode *thumbnailNode; // @synthesize thumbnailNode=_thumbnailNode;
@property(retain, nonatomic) ASTextNode *queryTextNode; // @synthesize queryTextNode=_queryTextNode;
@property(retain, nonatomic) ASTextNode *promotedLabelNode; // @synthesize promotedLabelNode=_promotedLabelNode;
- (void).cxx_destruct;
- (void)didChangeViewabilityStateWithVisibilityContext:(id)arg1;
- (void)didChangeAdVendorFullyViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeAdVendorViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeFullyViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeViewableStateWithVisibilityContext:(id)arg1;
- (void)didEnterAdViewableStateWithVisibilityContext:(id)arg1;
- (void)didChangeVisibleStateWithVisibilityContext:(id)arg1;
- (void)endVisibilityTracking;
- (void)beginVisibilityTracking;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureThumbnailNode;
- (void)configureNodes;
- (id)createGradientNodeWithShadeColor:(id)arg1;
- (id)initWithCarouselItem:(id)arg1;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) Post *trendingPost;

@end

