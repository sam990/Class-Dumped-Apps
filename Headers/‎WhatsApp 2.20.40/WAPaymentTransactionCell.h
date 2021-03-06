//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView, WAActivityIndicatorView, WAPaymentBaseTransaction, WAPaymentPrimaryInlineRoundedButton, WAPaymentSecondaryInlineRoundedButton, WAProfilePictureDynamicThumbnailView;
@protocol WAPaymentTransactionCellDelegate;

@interface WAPaymentTransactionCell : UITableViewCell
{
    WAPaymentBaseTransaction *_transaction;
    id <WAPaymentTransactionCellDelegate> _delegate;
    WAProfilePictureDynamicThumbnailView *_profileImageView;
    UIView *_firstRowContainerView;
    UILabel *_nameLabel;
    UILabel *_amountLabel;
    UIView *_secondRowContainerView;
    NSLayoutConstraint *_constraintSecondRowContainerHeight;
    UILabel *_descriptionLabel;
    UILabel *_statusLabel;
    UIView *_thirdRowContainerView;
    NSLayoutConstraint *_constraintThirdRowContainerHeight;
    UILabel *_noteLabel;
    UIView *_fourthRowContainerView;
    NSLayoutConstraint *_constraintFourthRowContainerHeight;
    NSLayoutConstraint *_constraintPrimaryButtonLeading;
    WAPaymentPrimaryInlineRoundedButton *_primaryButton;
    WAPaymentSecondaryInlineRoundedButton *_secondaryButton;
    WAActivityIndicatorView *_activityIndicatorView;
}

+ (id)futureproofTransactionAttributedString;
+ (void)openUpdateURL;
+ (struct UIEdgeInsets)separatorInset;
+ (double)estimatedRowHeight;
@property(nonatomic) __weak WAActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak WAPaymentSecondaryInlineRoundedButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(nonatomic) __weak WAPaymentPrimaryInlineRoundedButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(nonatomic) __weak NSLayoutConstraint *constraintPrimaryButtonLeading; // @synthesize constraintPrimaryButtonLeading=_constraintPrimaryButtonLeading;
@property(nonatomic) __weak NSLayoutConstraint *constraintFourthRowContainerHeight; // @synthesize constraintFourthRowContainerHeight=_constraintFourthRowContainerHeight;
@property(nonatomic) __weak UIView *fourthRowContainerView; // @synthesize fourthRowContainerView=_fourthRowContainerView;
@property(nonatomic) __weak UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(nonatomic) __weak NSLayoutConstraint *constraintThirdRowContainerHeight; // @synthesize constraintThirdRowContainerHeight=_constraintThirdRowContainerHeight;
@property(nonatomic) __weak UIView *thirdRowContainerView; // @synthesize thirdRowContainerView=_thirdRowContainerView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSLayoutConstraint *constraintSecondRowContainerHeight; // @synthesize constraintSecondRowContainerHeight=_constraintSecondRowContainerHeight;
@property(nonatomic) __weak UIView *secondRowContainerView; // @synthesize secondRowContainerView=_secondRowContainerView;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIView *firstRowContainerView; // @synthesize firstRowContainerView=_firstRowContainerView;
@property(nonatomic) __weak WAProfilePictureDynamicThumbnailView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(nonatomic) __weak id <WAPaymentTransactionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WAPaymentBaseTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setContainerBottomLayoutMargins;
- (void)setBoldedPrimaryTextSubstring:(id)arg1;
- (id)formatNoteAttributedString:(id)arg1;
- (void)secondaryButtonTapped:(id)arg1;
- (void)primaryButtonTapped:(id)arg1;
- (void)updateForLoadingState:(_Bool)arg1;
- (_Bool)shouldShowSecondaryButtonForTransaction:(id)arg1;
- (_Bool)shouldShowPrimaryButtonForTransaction:(id)arg1;
- (void)configureWithTransaction:(id)arg1 associatedMessage:(id)arg2 paymentManager:(id)arg3 profilePictureManager:(id)arg4;
- (void)awakeFromNib;

@end

