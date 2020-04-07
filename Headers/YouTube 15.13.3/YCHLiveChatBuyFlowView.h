//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/MDCSliderDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatMessageTierViewDelegate-Protocol.h>
#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>

@class GIMMe, MDCSlider, NSArray, NSNotification, NSString, QTMActivityIndicator, QTMButton, UILabel, YCHLiveChatMessageTierView, YTFormattedStringLabel, YTICommand, YTILiveChatDialogEndpoint, YTILiveChatPaidMessageTemplateSupportedRenderers, YTILiveChatRichMessageInput;
@protocol YCHLiveChatBuyFlowViewDelegate, YCHLiveChatStyleProtocol;

@interface YCHLiveChatBuyFlowView : UIView <MDCSliderDelegate, YCHLiveChatMessageTierViewDelegate, YTFormattedStringLabelDelegate>
{
    _Bool _overCharacterLimit;
    GIMMe *_gimme;
    id <YCHLiveChatBuyFlowViewDelegate> _delegate;
    double _maxWidth;
    MDCSlider *_tierSlider;
    NSArray *_appStoreProducts;
    YTICommand *_buyButtonEndpoint;
    QTMButton *_backButton;
    UILabel *_titleLabel;
    YTFormattedStringLabel *_headingTitleLabel;
    YTFormattedStringLabel *_headingTextLabel;
    QTMButton *_helpButton;
    YTILiveChatDialogEndpoint *_liveChatDialogEndpoint;
    YCHLiveChatMessageTierView *_messageTier;
    QTMButton *_validateErrorButton;
    UILabel *_validateErrorLabel;
    QTMButton *_buyButton;
    QTMActivityIndicator *_buyButtonActivityIndicator;
    NSArray *_messageTiers;
    id <YCHLiveChatStyleProtocol> _style;
    NSNotification *_lastKeyboardNotification;
    UIView *_containerView;
    UIView *_headerStroke;
    UIView *_containerBackgroundView;
    QTMActivityIndicator *_containerActivityIndicator;
    UIView *_dimView;
    NSString *_validationFailedMessage;
    YTILiveChatRichMessageInput *_validationFailedRichMessage;
}

@property(nonatomic) _Bool overCharacterLimit; // @synthesize overCharacterLimit=_overCharacterLimit;
@property(retain, nonatomic) YTILiveChatRichMessageInput *validationFailedRichMessage; // @synthesize validationFailedRichMessage=_validationFailedRichMessage;
@property(retain, nonatomic) NSString *validationFailedMessage; // @synthesize validationFailedMessage=_validationFailedMessage;
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) QTMActivityIndicator *containerActivityIndicator; // @synthesize containerActivityIndicator=_containerActivityIndicator;
@property(retain, nonatomic) UIView *containerBackgroundView; // @synthesize containerBackgroundView=_containerBackgroundView;
@property(retain, nonatomic) UIView *headerStroke; // @synthesize headerStroke=_headerStroke;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) NSNotification *lastKeyboardNotification; // @synthesize lastKeyboardNotification=_lastKeyboardNotification;
@property(readonly, nonatomic) __weak id <YCHLiveChatStyleProtocol> style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *messageTiers; // @synthesize messageTiers=_messageTiers;
@property(retain, nonatomic) QTMActivityIndicator *buyButtonActivityIndicator; // @synthesize buyButtonActivityIndicator=_buyButtonActivityIndicator;
@property(retain, nonatomic) QTMButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *validateErrorLabel; // @synthesize validateErrorLabel=_validateErrorLabel;
@property(retain, nonatomic) QTMButton *validateErrorButton; // @synthesize validateErrorButton=_validateErrorButton;
@property(retain, nonatomic) YCHLiveChatMessageTierView *messageTier; // @synthesize messageTier=_messageTier;
@property(retain, nonatomic) YTILiveChatDialogEndpoint *liveChatDialogEndpoint; // @synthesize liveChatDialogEndpoint=_liveChatDialogEndpoint;
@property(retain, nonatomic) QTMButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) YTFormattedStringLabel *headingTextLabel; // @synthesize headingTextLabel=_headingTextLabel;
@property(retain, nonatomic) YTFormattedStringLabel *headingTitleLabel; // @synthesize headingTitleLabel=_headingTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QTMButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) YTICommand *buyButtonEndpoint; // @synthesize buyButtonEndpoint=_buyButtonEndpoint;
@property(retain, nonatomic) NSArray *appStoreProducts; // @synthesize appStoreProducts=_appStoreProducts;
@property(retain, nonatomic) MDCSlider *tierSlider; // @synthesize tierSlider=_tierSlider;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <YCHLiveChatBuyFlowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)updateElementVisibility:(_Bool)arg1;
- (id)localeForAppStoreProductID:(id)arg1;
- (void)didSwipeDown:(id)arg1;
- (void)didTapBackground:(id)arg1;
- (void)animateKeyboard;
- (void)onKeyboardChange:(id)arg1;
- (void)tierSliderValueDidChange:(id)arg1;
- (void)onHelpButton;
- (void)onBuyButton;
- (void)onValidateErrorButton;
- (void)onBackButton;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)layoutSubviews;
- (id)slider:(id)arg1 accessibilityLabelForValue:(double)arg2;
- (void)textViewDidChange;
- (void)overCharacterLimitDidUpdate:(_Bool)arg1;
- (void)setEmojiController:(id)arg1;
- (void)finish;
- (void)reset;
- (void)cancel;
- (void)backToEditing;
- (void)setValidateMessageError:(id)arg1;
- (void)setRenderer:(id)arg1;
@property(readonly, nonatomic) YTILiveChatPaidMessageTemplateSupportedRenderers *messageTierTemplate;
@property(readonly, nonatomic) NSString *purchasePriceText;
@property(readonly, nonatomic) long long priceMicros;
@property(readonly, nonatomic) NSString *appStoreProductID;
@property(readonly, nonatomic) NSString *currency;
@property(readonly, nonatomic) YTILiveChatRichMessageInput *richMessage;
@property(copy, nonatomic) NSString *message;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
