//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, UIScrollView;

@interface _WAForwardPickerMultiselectBar : UIView
{
    UIButton *_buttonForward;
    UILabel *_labelRecipients;
    UIScrollView *_scrollView;
    UIView *_borderView;
    NSLayoutConstraint *_multiSelectbarBorderHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *multiSelectbarBorderHeight; // @synthesize multiSelectbarBorderHeight=_multiSelectbarBorderHeight;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *labelRecipients; // @synthesize labelRecipients=_labelRecipients;
@property(retain, nonatomic) UIButton *buttonForward; // @synthesize buttonForward=_buttonForward;
- (void).cxx_destruct;
- (void)scrollContactListAnimated:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

