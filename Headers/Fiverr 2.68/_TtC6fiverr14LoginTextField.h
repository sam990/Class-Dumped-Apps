//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface _TtC6fiverr14LoginTextField : UIControl
{
    // Error parsing type: , name: clearButton
    // Error parsing type: , name: textField
    // Error parsing type: , name: bottomLabel
    // Error parsing type: , name: textFieldContainerView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: validationBlock
    // Error parsing type: , name: descriptionText
    // Error parsing type: , name: errorText
}

- (void).cxx_destruct;
- (void)clearButtonClicked:(id)arg1;
- (_Bool)resignFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
@property(nonatomic, copy) NSString *placeholderText;
@property(nonatomic) __weak UIView *textFieldContainerView; // @synthesize textFieldContainerView;
@property(nonatomic) __weak UILabel *bottomLabel; // @synthesize bottomLabel;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField;
@property(nonatomic) __weak UIButton *clearButton; // @synthesize clearButton;

@end
