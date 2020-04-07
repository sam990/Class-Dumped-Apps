//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextField.h>

@class UILabel;

@interface T1ComposePollingCardTextField : TFNTextField
{
    _Bool _inErrorState;
    _Bool _isRTL;
    UILabel *_remainingCountLabel;
}

@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) UILabel *remainingCountLabel; // @synthesize remainingCountLabel=_remainingCountLabel;
@property(nonatomic, getter=isInErrorState) _Bool inErrorState; // @synthesize inErrorState=_inErrorState;
- (void).cxx_destruct;
- (void)_updateBorderColor;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)_updateRemainingCountLabelTextColor;
- (void)_updateTextColor;
- (void)setPlaceholder:(id)arg1;
- (void)setRemainingCharacterCount:(long long)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
