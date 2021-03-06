//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WAPaymentServiceThemeProtocol-Protocol.h>

@class UIColor, UIFont, WATheme;
@protocol WAPaymentMXRegThemeProtocol, WAPaymentServiceThemeProtocol, WAPaymentsAmountTextContainerThemeProtocol, WAPaymentsAmountTextViewThemeProtocol, WAPaymentsBubbleThemeProtocol, WAPaymentsPaymentDetailsCellThemeProtocol, WAPaymentsSendPaymentThemeProtocol;

@interface WAPaymentsTheme : NSObject <WAPaymentServiceThemeProtocol>
{
    UIColor *_actionButtonDisabledColor;
    UIColor *_iconTextColor;
    UIColor *_grayBackgroundColor;
    UIColor *_highlightedTextBackgroundColor;
    double _actionButtonHeight;
    id <WAPaymentsAmountTextViewThemeProtocol> _qrAmountTextView;
    id <WAPaymentsBubbleThemeProtocol> _bubble;
    id <WAPaymentsAmountTextContainerThemeProtocol> _transactionDetailsAmountTheme;
    id <WAPaymentsPaymentDetailsCellThemeProtocol> _paymentDetailsCell;
    id <WAPaymentsSendPaymentThemeProtocol> _sendPayment;
    id <WAPaymentMXRegThemeProtocol> _mxRegistration;
    id <WAPaymentServiceThemeProtocol> _fbPayTheme;
    id <WAPaymentServiceThemeProtocol> _clbTheme;
    UIFont *_titleFont;
    UIFont *_headlineFont;
    UIFont *_bodyFont;
    UIFont *_subheadlineFont;
    UIFont *_footnoteFont;
    UIFont *_captionFont;
    UIColor *_tintColor;
    UIColor *_primaryButtonTitleColor;
    UIColor *_blueRoundedButtonBackgroundColor;
    UIColor *_navigationItemTintColor;
    UIColor *_settingsActionRowTintColor;
    WATheme *_parentTheme;
}

@property(nonatomic) __weak WATheme *parentTheme; // @synthesize parentTheme=_parentTheme;
@property(readonly, nonatomic) UIColor *settingsActionRowTintColor; // @synthesize settingsActionRowTintColor=_settingsActionRowTintColor;
@property(readonly, nonatomic) UIColor *navigationItemTintColor; // @synthesize navigationItemTintColor=_navigationItemTintColor;
@property(readonly, nonatomic) UIColor *blueRoundedButtonBackgroundColor; // @synthesize blueRoundedButtonBackgroundColor=_blueRoundedButtonBackgroundColor;
@property(readonly, nonatomic) UIColor *primaryButtonTitleColor; // @synthesize primaryButtonTitleColor=_primaryButtonTitleColor;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIFont *captionFont; // @synthesize captionFont=_captionFont;
@property(readonly, nonatomic) UIFont *footnoteFont; // @synthesize footnoteFont=_footnoteFont;
@property(readonly, nonatomic) UIFont *subheadlineFont; // @synthesize subheadlineFont=_subheadlineFont;
@property(readonly, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(readonly, nonatomic) UIFont *headlineFont; // @synthesize headlineFont=_headlineFont;
@property(readonly, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, nonatomic) id <WAPaymentServiceThemeProtocol> clbTheme; // @synthesize clbTheme=_clbTheme;
@property(readonly, nonatomic) id <WAPaymentServiceThemeProtocol> fbPayTheme; // @synthesize fbPayTheme=_fbPayTheme;
@property(readonly, nonatomic) id <WAPaymentMXRegThemeProtocol> mxRegistration; // @synthesize mxRegistration=_mxRegistration;
@property(readonly, nonatomic) id <WAPaymentsSendPaymentThemeProtocol> sendPayment; // @synthesize sendPayment=_sendPayment;
@property(readonly, nonatomic) id <WAPaymentsPaymentDetailsCellThemeProtocol> paymentDetailsCell; // @synthesize paymentDetailsCell=_paymentDetailsCell;
@property(readonly, nonatomic) id <WAPaymentsAmountTextContainerThemeProtocol> transactionDetailsAmountTheme; // @synthesize transactionDetailsAmountTheme=_transactionDetailsAmountTheme;
@property(readonly, nonatomic) id <WAPaymentsBubbleThemeProtocol> bubble; // @synthesize bubble=_bubble;
@property(readonly, nonatomic) id <WAPaymentsAmountTextViewThemeProtocol> qrAmountTextView; // @synthesize qrAmountTextView=_qrAmountTextView;
@property(nonatomic) double actionButtonHeight; // @synthesize actionButtonHeight=_actionButtonHeight;
@property(readonly, nonatomic) UIColor *highlightedTextBackgroundColor; // @synthesize highlightedTextBackgroundColor=_highlightedTextBackgroundColor;
@property(readonly, nonatomic) UIColor *grayBackgroundColor; // @synthesize grayBackgroundColor=_grayBackgroundColor;
@property(readonly, nonatomic) UIColor *iconTextColor; // @synthesize iconTextColor=_iconTextColor;
@property(readonly, nonatomic) UIColor *actionButtonDisabledColor; // @synthesize actionButtonDisabledColor=_actionButtonDisabledColor;
- (void).cxx_destruct;
- (void)reloadFonts;
- (id)initWithParentTheme:(id)arg1;

@end

