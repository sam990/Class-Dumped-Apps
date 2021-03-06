//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCChipView.h"

@class UIButton;
@protocol GDKClearButtonChipDelegate;

@interface GDKClearButtonChip : MDCChipView
{
    id <GDKClearButtonChipDelegate> _clearDelegate;
    UIButton *_clearButton;
}

@property(readonly, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) __weak id <GDKClearButtonChipDelegate> clearDelegate; // @synthesize clearDelegate=_clearDelegate;
- (void).cxx_destruct;
- (void)clearButtonTapped:(id)arg1;
- (_Bool)accessibilityActivate;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

