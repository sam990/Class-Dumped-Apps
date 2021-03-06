//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIContentSizeCategoryAdjusting-Protocol.h"

@class CAShapeLayer, NSString, UIColor, UIFont, UILabel;

@interface MDCNumericValueLabel : UIView <UIContentSizeCategoryAdjusting>
{
    CAShapeLayer *_marker;
    UILabel *_label;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) double fontSize;
@property(retain, nonatomic) UIColor *textColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

