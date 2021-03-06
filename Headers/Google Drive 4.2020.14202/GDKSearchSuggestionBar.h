//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDKSearchFilterChipBar, GDKSearchSuggestion, UILabel;
@protocol GDKSearchChipFactory, GDKSearchSuggestionBarDelegate;

@interface GDKSearchSuggestionBar : UIView
{
    id <GDKSearchSuggestionBarDelegate> _delegate;
    GDKSearchSuggestion *_suggestion;
    UILabel *_prefixLabel;
    UILabel *_suggestionView;
    GDKSearchFilterChipBar *_filterChipBar;
    id <GDKSearchChipFactory> _filterChipFactory;
}

+ (double)preferredHeight;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) id <GDKSearchChipFactory> filterChipFactory; // @synthesize filterChipFactory=_filterChipFactory;
@property(retain, nonatomic) GDKSearchFilterChipBar *filterChipBar; // @synthesize filterChipBar=_filterChipBar;
@property(retain, nonatomic) UILabel *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(retain, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(copy, nonatomic) GDKSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) __weak id <GDKSearchSuggestionBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)chipsForFilters:(id)arg1;
- (void)suggestionWasTapped:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 filterChipFactory:(id)arg2;

@end

