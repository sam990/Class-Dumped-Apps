//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

@class NSDate, NSDateFormatter, NSLocale, UIColor, UIDatePicker;

@interface XLFormDateCell : XLFormBaseCell
{
    UIColor *_beforeChangeColor;
    NSDateFormatter *_dateFormatter;
    unsigned long long _formDatePickerMode;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _minuteInterval;
    NSLocale *_locale;
    UIDatePicker *_datePicker;
}

@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) unsigned long long formDatePickerMode; // @synthesize formDatePickerMode=_formDatePickerMode;
- (void).cxx_destruct;
- (void)datePickerValueChanged:(id)arg1;
- (void)setModeToDatePicker:(id)arg1;
- (id)formattedDate:(id)arg1;
- (id)valueDisplayText;
- (void)unhighlight;
- (void)highlight;
- (_Bool)formDescriptorCellBecomeFirstResponder;
- (_Bool)formDescriptorCellCanBecomeFirstResponder;
- (void)formDescriptorCellDidSelectedWithFormController:(id)arg1;
- (void)update;
- (void)configure;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)inputView;

@end
