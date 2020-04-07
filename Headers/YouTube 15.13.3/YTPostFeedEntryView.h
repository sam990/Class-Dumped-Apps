//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTReusableView-Protocol.h>

@class NSString, YTFormattedStringLabel, YTIFeedEntryRenderer, YTImageView;

@interface YTPostFeedEntryView : UIView <YTReusableView>
{
    YTImageView *_iconImageView;
    YTFormattedStringLabel *_actionLabel;
    YTFormattedStringLabel *_postLabel;
    double _preferredMaxLayoutWidth;
    YTIFeedEntryRenderer *_entry;
}

@property(retain, nonatomic) YTIFeedEntryRenderer *entry; // @synthesize entry=_entry;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
