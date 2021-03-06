//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import <InstagramAppCoreFramework/IGBusinessConversionCityViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGBusinessConversionEditableCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDismissableViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGSuggestionHScrollViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGSuggestionHScrollViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDelegate-Protocol.h>

@class IG4BLogger, IGBottomButtonsView, IGBusinessConversionLocationSuggestionParser, IGFacebookPageInfo, IGSuggestionHScrollView, IGUserSession, NSArray, NSDictionary, NSString, UIView;
@protocol IGBusinessConversionAddressViewControllerDelegate, IGFBIdentityProvisioning;

@interface IGBusinessConversionAddressViewController : IGGroupedTableViewController <IGBusinessConversionCityViewControllerDelegate, IGBusinessConversionEditableCellDelegate, UITableViewDataSource, UITableViewDelegate, IGDismissableViewController, IGSuggestionHScrollViewDataSource, IGSuggestionHScrollViewDelegate>
{
    IGBottomButtonsView *_continueButton;
    _Bool _useBottomContinueButton;
    _Bool _isEditing;
    _Bool _allowCitySuggestion;
    id <IGBusinessConversionAddressViewControllerDelegate> _delegate;
    IGFacebookPageInfo *_pageInfo;
    UIView *_headerView;
    IG4BLogger *_logger;
    IGUserSession *_userSession;
    NSArray *_suggestedCities;
    NSArray *_rows;
    IGSuggestionHScrollView *_citySuggestionScrollView;
    NSDictionary *_deviceCoordinates;
    IGBusinessConversionLocationSuggestionParser *_locationSuggestionParser;
    long long _editingCellIndex;
    id <IGFBIdentityProvisioning> _fbIdProvisioning;
}

@property(retain, nonatomic) id <IGFBIdentityProvisioning> fbIdProvisioning; // @synthesize fbIdProvisioning=_fbIdProvisioning;
@property(nonatomic) long long editingCellIndex; // @synthesize editingCellIndex=_editingCellIndex;
@property(retain, nonatomic) IGBusinessConversionLocationSuggestionParser *locationSuggestionParser; // @synthesize locationSuggestionParser=_locationSuggestionParser;
@property(retain, nonatomic) NSDictionary *deviceCoordinates; // @synthesize deviceCoordinates=_deviceCoordinates;
@property(retain, nonatomic) IGSuggestionHScrollView *citySuggestionScrollView; // @synthesize citySuggestionScrollView=_citySuggestionScrollView;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSArray *suggestedCities; // @synthesize suggestedCities=_suggestedCities;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool allowCitySuggestion; // @synthesize allowCitySuggestion=_allowCitySuggestion;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IGFacebookPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) __weak id <IGBusinessConversionAddressViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)_rowsWithCitySuggestion;
- (id)_rowsWithoutCitySuggestion;
- (void)cityViewController:(id)arg1 dismissWithCity:(id)arg2;
- (void)_updateButtonState;
- (void)editableCellDidEndEditing:(id)arg1;
- (_Bool)editableCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
- (void)editableCellBeganEditing:(id)arg1;
- (void)editableCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_removeAddress;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)_cellToRemoveAddressAtIndexPath:(id)arg1;
- (id)_addressFieldCellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (id)dataForItems;
- (void)_handleQueryLocationSuggestionsCompleted:(id)arg1 error:(id)arg2;
- (void)_queryLocationSugguestions;
- (void)_resetSuggestions;
- (void)_continueButtonTapped:(id)arg1;
- (void)_backgroundViewTapped:(id)arg1;
- (void)_dismiss;
- (void)_saveChanges;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didDismissViewController;
- (id)_address;
- (id)initWithPageInfo:(id)arg1 logger:(id)arg2 userSession:(id)arg3 allowCitySuggestion:(_Bool)arg4 useBottomContinueButton:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

