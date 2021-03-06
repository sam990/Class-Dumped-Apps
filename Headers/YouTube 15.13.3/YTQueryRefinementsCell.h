//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCellLinkProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, YTFormattedStringLabel, YTIQueryRefinementsRenderer;
@protocol YTCellLinkDelegate, YTResponder;

@interface YTQueryRefinementsCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTCellLinkProtocol, YTCollectionViewCellProtocol>
{
    UIImageView *_backgroundImageView;
    YTFormattedStringLabel *_headerLabel;
    UIImageView *_horizontalSeparator;
    NSMutableArray *_queryRefinementLabels;
    id <YTCellLinkDelegate> _cellLinkDelegate;
    id <YTResponder> _parentResponder;
    YTIQueryRefinementsRenderer *_entry;
}

+ (id)groupObjects:(id)arg1 intoRowsOf:(unsigned long long)arg2;
+ (double)rowHeight:(id)arg1 forWidth:(double)arg2 numberOfColumns:(unsigned long long)arg3;
+ (double)headerHeight;
+ (struct CGSize)cellSizeForEntry_regular:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry_compact:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTIQueryRefinementsRenderer *entry; // @synthesize entry=_entry;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void).cxx_destruct;
- (void)clearQueryRefinementLabels;
- (double)layoutRowOfLabels:(id)arg1 atOrigin:(struct CGPoint)arg2 width:(double)arg3 numberOfColumns:(unsigned long long)arg4;
- (void)layoutRowsOfLabels:(id)arg1 numberOfColumns:(unsigned long long)arg2;
- (void)layoutBackgroundAndHeaderWithSeparatorWidth:(double)arg1;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)layoutSubviews_regular;
- (void)layoutSubviews_compact;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

