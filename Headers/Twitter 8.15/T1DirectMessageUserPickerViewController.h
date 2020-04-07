//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1DirectMessageUserPickerViewControllerSelectionBehaviorDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageUserTypeaheadRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TypeaheadUserTableRowHost-Protocol.h>
#import <T1Twitter/TFNTokenFieldDelegate-Protocol.h>

@class NSArray, NSString, T1DirectMessageParticipantValidator, T1DirectMessageTypeaheadDataSource, T1DirectMessageUserPickerViewControllerSelectionBehavior, T1UserTypeaheadSearchView, TFNBarButtonItem, TFNTwitterAccount;
@protocol T1DirectMessageUserPickerViewControllerDelegate;

@interface T1DirectMessageUserPickerViewController : TFNItemsDataViewController <TFNTokenFieldDelegate, T1DirectMessageUserPickerViewControllerSelectionBehaviorDelegate, T1DirectMessageUserTypeaheadRowAdapterDelegate, T1TypeaheadUserTableRowHost>
{
    struct {
        unsigned int hasFullyAppeared:1;
    } _flags;
    TFNBarButtonItem *_cancelBarButtonItem;
    TFNBarButtonItem *_doneBarButtonItem;
    T1UserTypeaheadSearchView *_searchView;
    T1DirectMessageParticipantValidator *_participantValidator;
    id <T1DirectMessageUserPickerViewControllerDelegate> _delegate;
    NSString *_scribePage;
    NSString *_scribeSection;
    TFNTwitterAccount *_account;
    T1DirectMessageTypeaheadDataSource *_dataSource;
    T1DirectMessageUserPickerViewControllerSelectionBehavior *_selectionBehavior;
    id _resultsObserver;
}

@property(retain, nonatomic) id resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(retain, nonatomic) T1DirectMessageUserPickerViewControllerSelectionBehavior *selectionBehavior; // @synthesize selectionBehavior=_selectionBehavior;
@property(retain, nonatomic) T1DirectMessageTypeaheadDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(nonatomic) __weak id <T1DirectMessageUserPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1DirectMessageParticipantValidator *participantValidator; // @synthesize participantValidator=_participantValidator;
- (void).cxx_destruct;
- (id)scribe;
- (_Bool)tokenField:(id)arg1 shouldReturnFromEditing:(id)arg2;
- (void)tokenField:(id)arg1 didRemoveToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)tokenField:(id)arg1 shouldRemoveToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)tokenField:(id)arg1 didAddToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)tokenField:(id)arg1 shouldAddToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)tokenFieldWillAttemptToBecomeFirstResponder:(id)arg1;
- (void)directMessageUserTypeaheadRowAdapter:(id)arg1 didSelectUser:(id)arg2 atIndexPath:(id)arg3;
- (void)typeaheadUserAdapter:(id)arg1 didSelectUser:(id)arg2 atIndexPath:(id)arg3;
- (void)_searchTokenFieldEditingChanged:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_updateDoneBarButtonItem;
- (void)_resetSearch;
- (void)_updateSectionsWithResults:(id)arg1;
- (void)_performSearch;
- (void)_layoutSearchView;
@property(readonly, copy, nonatomic) NSArray *selectedUsers;
@property(readonly, nonatomic) T1UserTypeaheadSearchView *searchView; // @synthesize searchView=_searchView;
@property(readonly, nonatomic) TFNBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(readonly, nonatomic) TFNBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateSelectionStates;
- (unsigned long long)addressingToolbarTokenCount;
- (void)addressingToolbarRemoveTokenAtIndex:(unsigned long long)arg1;
- (void)didSelectUser:(id)arg1;
- (void)addressingToolbarAddToken:(id)arg1;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithValidator:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
