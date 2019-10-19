//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AWEAccountPhoneNumber, NSString, TTTAttributedLabel, UIButton, UILabel;
@protocol AWEQuickBindViewDelegate;

@interface AWEQuickBindView : UIView <TTTAttributedLabelDelegate>
{
    id <AWEQuickBindViewDelegate> _delegate;
    AWEAccountPhoneNumber *_phoneNumber;
    long long _carrierType;
    UILabel *_quickBindHintLabel;
    UILabel *_phoneNumberLabel;
    UILabel *_hintLabel;
    TTTAttributedLabel *_agreeHintLabel;
    UIView *_containerView;
    UIView *_placeholderView;
    UIButton *_bindButton;
    UIButton *_otherButton;
}

@property(retain, nonatomic) UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) UIButton *bindButton; // @synthesize bindButton=_bindButton;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TTTAttributedLabel *agreeHintLabel; // @synthesize agreeHintLabel=_agreeHintLabel;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(retain, nonatomic) UILabel *quickBindHintLabel; // @synthesize quickBindHintLabel=_quickBindHintLabel;
@property(nonatomic) long long carrierType; // @synthesize carrierType=_carrierType;
@property(retain, nonatomic) AWEAccountPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) __weak id <AWEQuickBindViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_carrierItemURL;
- (id)_getCarrierName;
- (void)_setAgreeHintText;
- (void)_showBindVC;
- (void)_bindAction;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setupUI;
- (id)initWithPhoneNumber:(id)arg1 carrierType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
