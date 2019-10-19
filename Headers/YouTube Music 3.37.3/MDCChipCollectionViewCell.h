//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MDCChipView;

@interface MDCChipCollectionViewCell : UICollectionViewCell
{
    _Bool _alwaysAnimateResize;
    MDCChipView *_chipView;
}

@property(nonatomic) _Bool alwaysAnimateResize; // @synthesize alwaysAnimateResize=_alwaysAnimateResize;
@property(readonly, nonatomic) MDCChipView *chipView; // @synthesize chipView=_chipView;
- (void).cxx_destruct;
- (struct CGPoint)locationFromTouches:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)createChipView;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
