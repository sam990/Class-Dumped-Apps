//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class GMDCTypographyScheme, NSMutableArray, NSString, UIColor, UILabel, UIScrollView;

@interface HMEThermostatFanTimerSheetSettingsView : UIView <UIScrollViewDelegate>
{
    CDUnknownBlockType _cancelSettingsCallback;
    CDUnknownBlockType _startSettingsCallback;
    UIScrollView *_durationPicker;
    UILabel *_unitsLabel;
    double _itemWidth;
    NSMutableArray *_durations;
    UIColor *_primaryDurationColor;
    UIColor *_secondaryDurationColor;
    GMDCTypographyScheme *_typographyScheme;
}

@property(retain, nonatomic) GMDCTypographyScheme *typographyScheme; // @synthesize typographyScheme=_typographyScheme;
@property(retain, nonatomic) UIColor *secondaryDurationColor; // @synthesize secondaryDurationColor=_secondaryDurationColor;
@property(retain, nonatomic) UIColor *primaryDurationColor; // @synthesize primaryDurationColor=_primaryDurationColor;
@property(retain, nonatomic) NSMutableArray *durations; // @synthesize durations=_durations;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) UILabel *unitsLabel; // @synthesize unitsLabel=_unitsLabel;
@property(retain, nonatomic) UIScrollView *durationPicker; // @synthesize durationPicker=_durationPicker;
@property(copy, nonatomic) CDUnknownBlockType startSettingsCallback; // @synthesize startSettingsCallback=_startSettingsCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelSettingsCallback; // @synthesize cancelSettingsCallback=_cancelSettingsCallback;
- (void).cxx_destruct;
- (long long)indexOfCenterItemWithXOffset:(double)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setLabelColorForDurationElementAtIndex:(long long)arg1 color:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)startTimerTapped:(id)arg1;
- (void)cancelTimerTapped:(id)arg1;
- (id)unitsForDuration:(id)arg1;
- (id)stringForDuration:(id)arg1;
- (void)initializePickerWithWidth:(double)arg1;
- (void)initializeViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

