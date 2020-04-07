//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>
#import <Module_Framework/YTThumbnailMapping-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView, YTFormattedStringLabel, YTIShareTargetServiceUpdateRenderer, YTImageView;
@protocol YTResponder;

@interface YTShareTargetCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTIShareTargetServiceUpdateRenderer *_renderer;
    YTImageView *_iconImage;
    YTFormattedStringLabel *_titleLabel;
    UIView *_disabledIndicatorView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <YTResponder> _parentResponder;
}

+ (double)intrinsicHeightForTwoLineTitleLabel;
+ (id)createTwoLineTitleLabel;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (double)iconImageSizeWithCellWidth:(double)arg1;
- (void)animateWithUserInteractionEnabled:(_Bool)arg1 duration:(double)arg2;
- (void)layoutAnimatedProperties;
- (void)didTap;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
