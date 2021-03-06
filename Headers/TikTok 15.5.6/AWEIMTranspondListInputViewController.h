//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEGrowingTextViewDelegate-Protocol.h"

@class AWEGrowingTextView;
@protocol AWEIMTranspondListInputViewControllerDelegate;

@interface AWEIMTranspondListInputViewController : UIViewController <AWEGrowingTextViewDelegate>
{
    id <AWEIMTranspondListInputViewControllerDelegate> _delegate;
    AWEGrowingTextView *_textView;
}

@property(retain, nonatomic) AWEGrowingTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <AWEIMTranspondListInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_setupUI;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)handleKeyboardHideNoti:(id)arg1;
- (void)handleKeyboardShowNoti:(id)arg1;
- (void)p_removeObservers;
- (void)p_addObservers;
- (void)clearInputView;
- (void)dealloc;
- (void)viewDidLoad;

@end

