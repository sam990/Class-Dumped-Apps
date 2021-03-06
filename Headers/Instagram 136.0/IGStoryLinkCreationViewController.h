//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import <InstagramAppCoreFramework/IGAddPartnerTaggingViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListHeaderViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingBrandSelectionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingStoryProductCollectionSelectViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingTaggingPermissionsHelperDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVChannelDataSourceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTaggingSearchViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGToggleTableViewCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserAREffectsDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UITextFieldDelegate-Protocol.h>

@class IGAddPartnerStateMachine, IGBusinessToolAlertViewController, IGListAdapter, IGShoppingStoryCreationContext, IGShoppingStoryDestination, IGShoppingSwipeUpCreationLogger, IGShoppingTaggingPermissionsHelper, IGStoryBusinessTransactionLinksCreationFormCell, IGStoryLinkAREffectSelectionCell, IGStoryMediaCompositionState, IGStoryWebLinksCreationFormCell, IGSwitch, IGTVChannelDataSource, IGTVStoryLinkSelectionCell, IGUserAREffectsDataSource, IGUserSession, NSArray, NSIndexPath, NSString, NSURL, UIBarButtonItem, UIImage;
@protocol IGAddPartnerInStoryWebLinksCreationViewControllerDelegate, IGStoryLinkCreationViewControllerDelegate;

@interface IGStoryLinkCreationViewController : IGGroupedTableViewController <IGAddPartnerTaggingViewControllerDelegate, IGCoreTextLinkHandler, IGListAdapterDataSource, IGListHeaderViewDelegate, IGShoppingBrandSelectionViewControllerDelegate, IGShoppingStoryProductCollectionSelectViewControllerDelegate, IGShoppingTaggingPermissionsHelperDelegate, IGTaggingSearchViewControllerDelegate, IGToggleTableViewCellDelegate, IGTVChannelDataSourceListener, IGUserAREffectsDataSourceDelegate, UICollectionViewDelegate, UITextFieldDelegate>
{
    IGTVStoryLinkSelectionCell *_igtvLinkCell;
    IGStoryLinkAREffectSelectionCell *_arEffectLinkCell;
    IGSwitch *_allowBrandedContentToBoostSwitch;
    IGTVChannelDataSource *_igtvChannelDataSource;
    IGUserAREffectsDataSource *_userAREffectsDataSource;
    IGListAdapter *_igtvChannelListAdapter;
    IGListAdapter *_arEffectListAdapter;
    NSArray *_menuItems;
    NSIndexPath *_mediaItemIndexPath;
    NSString *_pendingMediaId;
    NSIndexPath *_pendingMediaItemIndexPath;
    IGShoppingStoryDestination *_selectedShoppingDestination;
    UIImage *_storyScreenshot;
    IGBusinessToolAlertViewController *_alertViewController;
    NSArray *_sections;
    unsigned long long _mode;
    IGShoppingSwipeUpCreationLogger *_shoppingSwipeUpLogger;
    IGShoppingStoryCreationContext *_shoppingContext;
    _Bool _hasShownAllowPaidBrandedContentAlert;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    _Bool _businessTransactionLinkAdded;
    _Bool _storyContainsInteractiveElements;
    _Bool _storyWebLinksEnabled;
    _Bool _storyIGTVLinksEnabled;
    _Bool _storyAREffectLinksEnabled;
    _Bool _storyBusinessTransactionLinksEnabled;
    _Bool _hasChanges;
    id <IGStoryLinkCreationViewControllerDelegate> _delegate;
    id <IGAddPartnerInStoryWebLinksCreationViewControllerDelegate> _addPartnerDelegate;
    NSURL *_validatedUrl;
    NSString *_mediaId;
    IGStoryMediaCompositionState *_composition;
    IGStoryWebLinksCreationFormCell *_formCell;
    IGStoryBusinessTransactionLinksCreationFormCell *_businessTransactionsFormCell;
    IGUserSession *_userSession;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    unsigned long long _addLinkSectionState;
    IGAddPartnerStateMachine *_sponsorPartnerTagsStateMachine;
}

@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(retain, nonatomic) IGAddPartnerStateMachine *sponsorPartnerTagsStateMachine; // @synthesize sponsorPartnerTagsStateMachine=_sponsorPartnerTagsStateMachine;
@property(nonatomic) unsigned long long addLinkSectionState; // @synthesize addLinkSectionState=_addLinkSectionState;
@property(nonatomic) _Bool storyBusinessTransactionLinksEnabled; // @synthesize storyBusinessTransactionLinksEnabled=_storyBusinessTransactionLinksEnabled;
@property(nonatomic) _Bool storyAREffectLinksEnabled; // @synthesize storyAREffectLinksEnabled=_storyAREffectLinksEnabled;
@property(nonatomic) _Bool storyIGTVLinksEnabled; // @synthesize storyIGTVLinksEnabled=_storyIGTVLinksEnabled;
@property(nonatomic) _Bool storyWebLinksEnabled; // @synthesize storyWebLinksEnabled=_storyWebLinksEnabled;
@property(readonly, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) IGStoryBusinessTransactionLinksCreationFormCell *businessTransactionsFormCell; // @synthesize businessTransactionsFormCell=_businessTransactionsFormCell;
@property(retain, nonatomic) IGStoryWebLinksCreationFormCell *formCell; // @synthesize formCell=_formCell;
@property(nonatomic) _Bool storyContainsInteractiveElements; // @synthesize storyContainsInteractiveElements=_storyContainsInteractiveElements;
@property(retain, nonatomic) IGStoryMediaCompositionState *composition; // @synthesize composition=_composition;
@property(nonatomic) _Bool businessTransactionLinkAdded; // @synthesize businessTransactionLinkAdded=_businessTransactionLinkAdded;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSURL *validatedUrl; // @synthesize validatedUrl=_validatedUrl;
@property(nonatomic) __weak id <IGAddPartnerInStoryWebLinksCreationViewControllerDelegate> addPartnerDelegate; // @synthesize addPartnerDelegate=_addPartnerDelegate;
@property(nonatomic) __weak id <IGStoryLinkCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (void)_urlTextFieldChanged:(id)arg1;
- (void)_displayTagABusinessPartnersToEnablePromoteToggle;
- (void)toggleTableViewCell:(id)arg1 didSwitchValueTo:(_Bool)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectFBUser:(id)arg2 IGUserResultShown:(id)arg3 searchingString:(id)arg4;
- (void)taggingSearchViewController:(id)arg1 didSelectProductItem:(id)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)taggingSearchViewControllerDidCancel:(id)arg1;
- (void)headerViewActionWasTapped:(id)arg1;
- (void)_removeMedia;
- (void)userAREffectDataSource:(id)arg1 didLoadItems:(id)arg2;
- (void)_selectIGTVCellForPendingMediaIdWithScrollPosition:(unsigned long long)arg1;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2;
- (void)channelDataSourceWillUpdate:(id)arg1;
- (void)_loadMoreIfNeededForScrollView:(id)arg1 contentOffset:(struct CGPoint)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)shoppingBrandSelectionViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)shoppingStoryProductCollectionSelectViewControllerDidCancel;
- (void)shoppingStoryProductCollectionSelectViewControllerDidSelectProductCollection:(id)arg1;
- (void)addPartnerTaggingViewControllerDidCancelOut:(id)arg1;
- (void)addPartnerTaggingViewControllerDidRemoveUser:(id)arg1 viewController:(id)arg2;
- (void)addPartnerTaggingViewControllerDidAddUser:(id)arg1 viewController:(id)arg2;
- (void)_reloadTableAndCloseAddPartnerTaggingViewController:(id)arg1;
- (void)_didSelectTagPartnerCTA;
- (void)_didSelectDismissConfirmationDialog;
- (void)_makeAlertViewControllerIfNeeded;
- (void)_dismissEligibilityLearnMoreViewControllerAndPresentConfirmationDialog:(id)arg1;
- (void)_openEligibilityLearnMoreViewController;
- (void)_openAddPartnerTaggingViewController;
- (void)_configureAllowPartnerBoostFooter:(id)arg1;
- (void)_configureBrandedContentSettingsFooter:(id)arg1;
- (void)_configureAddPartnerFooter:(id)arg1;
- (void)_configureAddPartnerCell:(id)arg1;
- (void)_configurePaidBrandedContentCell:(id)arg1;
- (void)presentAddPartnerFlow;
- (void)_presentChooseCollectionFlow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_currentShoppingLink;
- (id)_tableView:(id)arg1 brandedContentSectionCellForRow:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setupTableviewSections;
- (void)_resetPendingMedia;
- (void)_resetAllMedia;
- (void)_setupMenuItems;
- (void)_didTapBusinessTransactionPreviewLink;
- (void)_updateDoneButtonVisibility;
- (void)_didTapAREffectPreview;
- (void)_didTapIGTVPreviewLink;
- (void)_didTapDismissPresentedViewController;
- (void)_didTapPreviewShoppingLink;
- (void)_webLinksCreationFormViewDidTapPreviewLinkWithUrl:(id)arg1;
- (void)_configureAddLinkFooter:(id)arg1;
- (id)_annotatedAddLinkFooterTextForState:(unsigned long long)arg1;
- (id)_footerTextForState:(unsigned long long)arg1;
- (id)_formatURLFromString:(id)arg1;
- (id)_webViewControllerForURL:(id)arg1;
- (void)_dismiss;
- (void)_updateTableAndDismiss;
- (_Bool)_isBlockedWhileHandlingShoppingPermissions;
- (void)_presentProductTaggingSearchViewController;
- (void)_handleProfileShopSelectedForUser:(id)arg1;
- (void)_requestProductTaggingPermissionsForSponsorIdIfNecessary:(id)arg1;
- (_Bool)_canAddPDPAsCreator;
- (_Bool)_canAddProfileShopAsCreator;
- (_Bool)_isBlockedWhileHandlingRequiredProfileShop;
- (void)_handleProfileShopOptionSelected;
- (void)_showErrorWithMessage:(id)arg1;
- (void)_handleMenuSelectionForRow:(unsigned long long)arg1;
- (unsigned long long)_storyLinkCreationTypeCellStatusForRow:(unsigned long long)arg1;
- (_Bool)_showNUXIndicatorForRow:(unsigned long long)arg1;
- (id)_storyLinkTypeCellTitleForRow:(unsigned long long)arg1;
- (double)_addLinkHeightForRow:(long long)arg1;
- (id)_addLinkCellForRow:(long long)arg1;
- (unsigned long long)_numberOfRowsForCurrentAddLinkSectionState;
- (id)analyticsModule;
- (void)_didTapWebViewCloseButton;
- (void)_onDoneTapped:(id)arg1;
- (void)_onCancelTapped:(id)arg1;
- (int)_countActionsEnabled;
- (void)configureSponsorPartnerStateMachineWithSelectedUsers:(id)arg1 allowedPartnerToBoost:(_Bool)arg2;
- (void)configureWithStoryScreenshot:(id)arg1;
- (void)clearStoryLink;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 mode:(unsigned long long)arg2 storyWebLinksEnabled:(_Bool)arg3 storyIGTVLinksEnabled:(_Bool)arg4 storyAREffectLinksEnabled:(_Bool)arg5 storyBusinessTransactionLinksEnabled:(_Bool)arg6 shoppingStoryCreationContext:(id)arg7 storyContainsInteractiveElements:(_Bool)arg8 sponsorPartnerOrderedSet:(id)arg9 storyLink:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

