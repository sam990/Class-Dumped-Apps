//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIBadgeSupportedRenderers, YTIFormattedString, YTINamedValue, YTIThumbnailDetails, YTIUnpluggedHighlightFilter, YTIUnpluggedHighlightRank, YTIUnpluggedLensClip;

@interface YTIUnpluggedHighlightRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundThumbnail; // @dynamic backgroundThumbnail;
@property(retain, nonatomic) YTIBadgeSupportedRenderers *badge; // @dynamic badge;
@property(retain, nonatomic) NSMutableArray *chipsArray; // @dynamic chipsArray;
@property(readonly, nonatomic) unsigned long long chipsArray_Count; // @dynamic chipsArray_Count;
@property(retain, nonatomic) YTIUnpluggedLensClip *clip; // @dynamic clip;
@property(retain, nonatomic) YTIUnpluggedHighlightFilter *filterData; // @dynamic filterData;
@property(retain, nonatomic) YTIUnpluggedLensClip *filteredViewClip; // @dynamic filteredViewClip;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasBackgroundThumbnail; // @dynamic hasBackgroundThumbnail;
@property(nonatomic) _Bool hasBadge; // @dynamic hasBadge;
@property(nonatomic) _Bool hasClip; // @dynamic hasClip;
@property(nonatomic) _Bool hasFilterData; // @dynamic hasFilterData;
@property(nonatomic) _Bool hasFilteredViewClip; // @dynamic hasFilteredViewClip;
@property(nonatomic) _Bool hasHiddenPrimaryText; // @dynamic hasHiddenPrimaryText;
@property(nonatomic) _Bool hasHiddenThumbnail; // @dynamic hasHiddenThumbnail;
@property(nonatomic) _Bool hasHighlightShowsWhenChipsAreSelected; // @dynamic hasHighlightShowsWhenChipsAreSelected;
@property(nonatomic) _Bool hasHighlightShowsWhenNoChipsAreSelected; // @dynamic hasHighlightShowsWhenNoChipsAreSelected;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasRankData; // @dynamic hasRankData;
@property(nonatomic) _Bool hasSecondaryTextDelimiter; // @dynamic hasSecondaryTextDelimiter;
@property(nonatomic) _Bool hasTeamMode; // @dynamic hasTeamMode;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *hiddenPrimaryText; // @dynamic hiddenPrimaryText;
@property(retain, nonatomic) YTIThumbnailDetails *hiddenThumbnail; // @dynamic hiddenThumbnail;
@property(nonatomic) _Bool highlightShowsWhenChipsAreSelected; // @dynamic highlightShowsWhenChipsAreSelected;
@property(nonatomic) _Bool highlightShowsWhenNoChipsAreSelected; // @dynamic highlightShowsWhenNoChipsAreSelected;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTINamedValue *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIUnpluggedHighlightRank *rankData; // @dynamic rankData;
@property(retain, nonatomic) YTIFormattedString *secondaryTextDelimiter; // @dynamic secondaryTextDelimiter;
@property(retain, nonatomic) NSMutableArray *secondaryTextsArray; // @dynamic secondaryTextsArray;
@property(readonly, nonatomic) unsigned long long secondaryTextsArray_Count; // @dynamic secondaryTextsArray_Count;
@property(nonatomic) _Bool teamMode; // @dynamic teamMode;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
