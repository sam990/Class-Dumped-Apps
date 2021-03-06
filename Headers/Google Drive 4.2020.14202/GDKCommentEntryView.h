//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class MDCButton, MDCMultilineTextField, NSString;
@protocol GDKCommentEntryViewDelegate;

@interface GDKCommentEntryView : UIView <UITextViewDelegate>
{
    id <GDKCommentEntryViewDelegate> _delegate;
    NSString *_textFieldPlaceholder;
    UIView *_contentView;
    UIView *_horizontalSeparator;
    MDCButton *_sendButton;
    MDCMultilineTextField *_textField;
}

@property(retain, nonatomic) MDCMultilineTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MDCButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *horizontalSeparator; // @synthesize horizontalSeparator=_horizontalSeparator;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *textFieldPlaceholder; // @synthesize textFieldPlaceholder=_textFieldPlaceholder;
@property(nonatomic) __weak id <GDKCommentEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)makeConstraints;
- (void)updateTextFieldPlaceholder;
@property(nonatomic, getter=isTextFieldEnabled) _Bool textFieldEnabled;
@property(nonatomic, getter=isSendButtonEnabled) _Bool sendButtonEnabled;
- (_Bool)hasProvisionallyEnteredText;
@property(retain, nonatomic) NSString *text;
- (_Bool)resignFirstResponder;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

