//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

#import "XLFormInlineRowDescriptorCell-Protocol.h"

@class NSString, UIDatePicker, XLFormRowDescriptor;

@interface XLFormDatePickerCell : XLFormBaseCell <XLFormInlineRowDescriptorCell>
{
    UIDatePicker *_datePicker;
    XLFormRowDescriptor *_inlineRowDescriptor;
}

+ (double)formDescriptorCellHeightForRowDescriptor:(id)arg1;
@property(nonatomic) __weak XLFormRowDescriptor *inlineRowDescriptor; // @synthesize inlineRowDescriptor=_inlineRowDescriptor;
- (void).cxx_destruct;
- (void)update;
- (void)configure;
- (void)datePickerValueChanged:(id)arg1;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (_Bool)canResignFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak XLFormRowDescriptor *rowDescriptor;
@property(readonly) Class superclass;

@end

