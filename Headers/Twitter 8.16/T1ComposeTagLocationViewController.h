//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1ComposeTagLocationViewDelegate-Protocol.h>

@class NSArray, NSString, T1ComposeTagLocationView, TFSTwitterPlace;
@protocol T1ComposeTagLocationViewControllerDelegate;

@interface T1ComposeTagLocationViewController : UIViewController <T1ComposeTagLocationViewDelegate>
{
    _Bool _shouldShowAdditionalPOISuggestions;
    id <T1ComposeTagLocationViewControllerDelegate> _delegate;
    NSArray *_suggestedPlaces;
    TFSTwitterPlace *_selectedPlace;
    T1ComposeTagLocationView *_tagLocationView;
}

@property(retain, nonatomic) T1ComposeTagLocationView *tagLocationView; // @synthesize tagLocationView=_tagLocationView;
@property(retain, nonatomic) TFSTwitterPlace *selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(nonatomic) _Bool shouldShowAdditionalPOISuggestions; // @synthesize shouldShowAdditionalPOISuggestions=_shouldShowAdditionalPOISuggestions;
@property(retain, nonatomic) NSArray *suggestedPlaces; // @synthesize suggestedPlaces=_suggestedPlaces;
@property(nonatomic) __weak id <T1ComposeTagLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)showAdditionalPOISuggestionsForComposeTagLocationView:(id)arg1;
- (void)composeTagLocationView:(id)arg1 didTapButtonWithPlace:(id)arg2 index:(unsigned long long)arg3;
- (void)composeTagLocationViewDidTapSearchButton:(id)arg1;
- (void)composeTagLocationViewDidTapGeoButton:(id)arg1;
- (void)_t1_updateFilteredPlaces;
- (void)setFilteredPlaces:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

