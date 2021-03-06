//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGAutocompleteControllerTextInput-Protocol.h>

@class IGImageView, IGTVCreationFlowToggle, IGTVCreationMetadataButtonRow, IGTVCreationMetadataTitleRow, IGTVMetadataInputView, IGTVSeparatorView, IGTextView, NSString, UIScrollView, UITextInputPasswordRules;
@protocol IGTVPostUploadMetadataEditorViewDelegate;

@interface IGTVPostUploadMetadataEditorView : UIView <IGAutocompleteControllerTextInput>
{
    IGTVSeparatorView *_sectionSeparator;
    double _keyboardHeight;
    IGTVCreationMetadataTitleRow *_igtvSeriesTitleRow;
    _Bool _addToSeriesAvailable;
    _Bool _monetizationRowAvailable;
    IGTVCreationMetadataTitleRow *_monetizationTitleRow;
    IGTVSeparatorView *_monetizationRowTopSeparator;
    IGTVSeparatorView *_monetizationRowBottomSeparator;
    _Bool _isAutocompleteShown;
    UIView *_autocompleteContainerView;
    long long _autocompleteSource;
    UIScrollView *_contentScrollView;
    IGImageView *_coverPhotoImageView;
    IGTVMetadataInputView *_titleInputView;
    IGTextView *_descriptionTextView;
    IGTVCreationMetadataButtonRow *_addToSeriesRow;
    IGTVCreationFlowToggle *_adsToggle;
    id <IGTVPostUploadMetadataEditorViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVPostUploadMetadataEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTVCreationFlowToggle *adsToggle; // @synthesize adsToggle=_adsToggle;
@property(readonly, nonatomic) IGTVCreationMetadataButtonRow *addToSeriesRow; // @synthesize addToSeriesRow=_addToSeriesRow;
@property(readonly, nonatomic) IGTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly, nonatomic) IGTVMetadataInputView *titleInputView; // @synthesize titleInputView=_titleInputView;
@property(readonly, nonatomic) IGImageView *coverPhotoImageView; // @synthesize coverPhotoImageView=_coverPhotoImageView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) long long autocompleteSource; // @synthesize autocompleteSource=_autocompleteSource;
@property(readonly, nonatomic) IGTVSeparatorView *sectionSeparator; // @synthesize sectionSeparator=_sectionSeparator;
@property(retain, nonatomic) UIView *autocompleteContainerView; // @synthesize autocompleteContainerView=_autocompleteContainerView;
@property(readonly, nonatomic) _Bool isAutocompleteShown; // @synthesize isAutocompleteShown=_isAutocompleteShown;
- (void).cxx_destruct;
- (id)inputTextView;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)beginningOfDocument;
- (struct _NSRange)selectedRange;
- (void)setText:(id)arg1;
- (id)text;
- (void)hideAutocompleteView;
- (void)showAutocompleteViewWithKeyboardHeight:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 addToSeriesAvailable:(_Bool)arg2 monetizationRowAvailable:(_Bool)arg3 monetizationToggleViewModel:(id)arg4;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

