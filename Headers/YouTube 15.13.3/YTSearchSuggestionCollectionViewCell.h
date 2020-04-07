//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTPageStyling-Protocol.h"
#import "YTSlideForActionsViewDelegate-Protocol.h"

@class NSAttributedString, NSString, QTMButton, UIImageView, UIView, YTLabel, YTQTMButton, YTSlideForActionsView;
@protocol YTSearchSuggestionCollectionViewCellDelegate;

@interface YTSearchSuggestionCollectionViewCell : YTCollectionViewCell <YTPageStyling, YTSlideForActionsViewDelegate>
{
    YTQTMButton *_appendButton;
    UIImageView *_searchHistoryImageView;
    UIImageView *_searchMagnifyingGlassImageView;
    UIImageView *_trendingImageView;
    UIView *_containerView;
    YTSlideForActionsView *_slideForActionsView;
    QTMButton *_deleteButton;
    YTLabel *_suggestionLabel;
    long long _pageStyle;
    NSString *_queryText;
    NSAttributedString *_displayedText;
    _Bool _useServerSideBolding;
    _Bool _largeSuggestionTextEnabled;
    _Bool _searchBarEnabled;
    id <YTSearchSuggestionCollectionViewCellDelegate> _delegate;
}

+ (id)cellIdentifier;
+ (double)fixedCellHeight;
@property(nonatomic) _Bool searchBarEnabled; // @synthesize searchBarEnabled=_searchBarEnabled;
@property(nonatomic) _Bool largeSuggestionTextEnabled; // @synthesize largeSuggestionTextEnabled=_largeSuggestionTextEnabled;
@property(nonatomic) __weak id <YTSearchSuggestionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useServerSideBolding; // @synthesize useServerSideBolding=_useServerSideBolding;
- (void).cxx_destruct;
- (void)setMaxLines:(int)arg1;
- (id)textColorMatchingQuery:(_Bool)arg1;
- (id)attributedTextFromAttributedText:(id)arg1;
- (id)attributedTextFromText:(id)arg1;
- (void)didTapDeleteSuggestionButton:(id)arg1;
- (void)didTapAppendSuggestionButton:(id)arg1;
- (void)updateColors;
- (void)slideForActionsViewDidFinishExitConfirmationModeAnimation;
- (void)slideForActionsViewDidFinishEnterConfirmationModeAnimation;
- (void)slideForActionsViewDidExitConfirmationMode:(id)arg1;
- (void)slideForActionsViewDidEnterConfirmationMode:(id)arg1;
- (void)exitActionConfirmationMode;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)exitActionConfirmationModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)cellHeight:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureCellWithText:(id)arg1 query:(id)arg2 isFromSearchHistory:(_Bool)arg3 isTrending:(_Bool)arg4 isDeletable:(_Bool)arg5;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
