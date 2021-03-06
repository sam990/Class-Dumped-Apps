//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTVSeparatorView, UIImageView, UILabel, UITextField;

@interface IGTVMetadataInputView : UIView
{
    UILabel *_requiredLabel;
    UIImageView *_errorIconImageView;
    IGTVSeparatorView *_separator;
    _Bool _showsRequiredError;
    UITextField *_textField;
}

@property(nonatomic) _Bool showsRequiredError; // @synthesize showsRequiredError=_showsRequiredError;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange selectedRange;
- (void)_updateRequiredErrorVisibility;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithPlaceholderText:(id)arg1;

@end

