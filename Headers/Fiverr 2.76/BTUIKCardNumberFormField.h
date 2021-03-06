//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreeDropIn/BTUIKFormField.h>

@class BTUIKCardType, BTUIKPaymentOptionCardView, NSString, UIActivityIndicatorView, UIButton;
@protocol BTUIKCardNumberFormFieldDelegate;

@interface BTUIKCardNumberFormField : BTUIKFormField
{
    NSString *_number;
    BTUIKCardType *_cardType;
    long long _state;
    id <BTUIKCardNumberFormFieldDelegate> _cardNumberDelegate;
    BTUIKPaymentOptionCardView *_hint;
    UIButton *_validateButton;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *validateButton; // @synthesize validateButton=_validateButton;
@property(retain, nonatomic) BTUIKPaymentOptionCardView *hint; // @synthesize hint=_hint;
@property(nonatomic) __weak id <BTUIKCardNumberFormFieldDelegate> cardNumberDelegate; // @synthesize cardNumberDelegate=_cardNumberDelegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) BTUIKCardType *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (void)updateCardHint;
- (_Bool)isValidLength;
- (_Bool)isPotentiallyValid;
- (_Bool)isValidCardType;
- (_Bool)isShowingValidateButton;
- (void)showCardHintAccessory;
- (void)resetFormField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)formatCardNumber;
- (void)fieldContentDidChange;
- (void)setText:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)entryComplete;
- (_Bool)valid;
- (void)updateValidationButton;
- (void)validateButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

