//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HMEChipView;

@interface HMEChipCollectionViewCell : UICollectionViewCell
{
    HMEChipView *_chipView;
}

+ (struct CGSize)preferredSizeForChip:(id)arg1 chipSize:(long long)arg2;
@property(retain, nonatomic) HMEChipView *chipView; // @synthesize chipView=_chipView;
- (void).cxx_destruct;
@property(nonatomic) long long style;
@property(nonatomic) long long size;
- (void)renderWithChip:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

