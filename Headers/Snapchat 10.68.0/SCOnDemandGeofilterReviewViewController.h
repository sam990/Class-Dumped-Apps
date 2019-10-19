//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCOnDemandGeofilterDataControllerNotificationListener-Protocol.h"
#import "SCOnDemandGeofilterWebViewControllerDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, SCAlertViewActionTextFieldController, SCCardContainerView, SCHeader, SCLoadingIndicatorView, SCOnDemandGeofilterPillButton, SOJUUnlockablesOndemandAggregatedMetricStatsWithMinimum, SOJUUnlockablesOndemandLineItem, UITableView;

@interface SCOnDemandGeofilterReviewViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <UITableViewDelegate, UITableViewDataSource, SCHeaderDelegate, SCHeaderDataSource, TTTAttributedLabelDelegate, UITextFieldDelegate, SCOnDemandGeofilterWebViewControllerDelegate, SCOnDemandGeofilterDataControllerListener, SCOnDemandGeofilterDataControllerNotificationListener>
{
    SCHeader *_header;
    UITableView *_tableView;
    SOJUUnlockablesOndemandLineItem *_onDemandLineItem;
    NSArray *_sectionDataModels;
    SCOnDemandGeofilterPillButton *_floatingButton;
    SCAlertViewActionTextFieldController *_textFieldEmailAction;
    SOJUUnlockablesOndemandAggregatedMetricStatsWithMinimum *_usageMetrics;
    NSString *_userEmail;
    _Bool _isUpdatingLineItem;
    SCLoadingIndicatorView *_activityIndicator;
    _Bool _fromMyGeofiltersView;
    _Bool _autoApprovalState;
    SCCardContainerView *_cardContainerView;
}

@property(retain, nonatomic) SCCardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
- (void).cxx_destruct;
- (id)_generateManageSectionDataModelWithLineItem:(id)arg1;
- (id)_generatePaymentSectionDataModelWithLineItem:(id)arg1;
- (id)_generateDetailSectionDataModelWithLineItem:(id)arg1;
- (id)_generateGeostorySectionDataModelWithLineItem:(id)arg1;
- (id)_generateUsageMetricsSectionDataModelWithUsageMetrics:(id)arg1;
- (id)_generateRejectionReasonSectionDataModelWithLineItem:(id)arg1;
- (id)_generateScreenShotSectionDataModelWithLineItem:(id)arg1;
- (id)_generateSectionDataModelsForLineItem:(id)arg1 usageMetrics:(id)arg2;
- (unsigned long long)_buttonStyle;
- (id)_submitButtonString;
- (void)_updateFloatingButtonState;
- (id)_mobilePaymentEventWithLineItem:(id)arg1;
- (void)_productPurchaseDeferred:(id)arg1;
- (void)_productPurchaseFailed:(id)arg1;
- (void)_productPurchasing:(id)arg1;
- (void)_updateUsageMetricsTableViewData;
- (void)_fetchUsageMetrics;
- (id)_validatedSubmission;
- (id)_submissionLineItem;
- (void)_resetViewHierarchy;
- (void)_submitGeofilter:(_Bool)arg1;
- (void)_initiateIAPPayment;
- (void)_floatingButtonAction;
- (void)_submitCancellation;
- (void)_presentCreativeStudioViewController;
- (void)_presentMapViewController;
- (void)_presentScheduleSettingViewControllerBeginningRow:(unsigned long long)arg1;
- (void)_presentNameSettingViewController;
- (void)_presentGeostoryViewController;
- (void)_presentRejectionReasonModalWithNote:(id)arg1;
- (void)_presentSubmissionAlertView:(_Bool)arg1;
- (void)_presentValidationFailedAlertViewWithLineItemValidationError:(id)arg1;
- (void)_presentCancellationAlertView;
- (void)_presentOrderCopyIdAlertView;
- (void)_presentAutoRejectedAlertView;
- (void)_presentInvalidEmailAddressAlertView;
- (void)_presentEmailAddressAlertView;
- (id)_viewForDefaultTableHeaderWithText:(id)arg1;
- (double)_heightForThumbnailPreviewCell;
- (void)_logAndUpdateBeforeDismissWithExitEvent:(long long)arg1;
- (void)setFromMyGeofiltersView:(_Bool)arg1;
- (void)_updateSessionLineItemPaymentAndOfferWithLineItem:(id)arg1;
- (void)_updatePrice:(id)arg1;
- (void)dataController:(id)arg1 didResubmitLineItem:(id)arg2 success:(_Bool)arg3 autoApproved:(_Bool)arg4 error:(id)arg5;
- (void)dataController:(id)arg1 didSubmitGeofilterWithId:(id)arg2 success:(_Bool)arg3 approved:(_Bool)arg4 error:(id)arg5;
- (void)dataController:(id)arg1 didUpdateCurrentEditingLineItem:(id)arg2 shouldUpdatePrice:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(_Bool)arg3 validationErrors:(id)arg4;
- (void)dataController:(id)arg1 didUploadAssetMetadata:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchLineItem:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchNotificationLineItem:(id)arg2;
- (void)webViewWasDismissed;
- (void)_presentWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)updateCardBackground:(double)arg1;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateViewStateWithLineItem:(id)arg1;
- (void)_setupNotificationObservers;
- (void)leftSwipeSucceed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGeofilterSession:(id)arg1 unlockablesOndemandLineItem:(id)arg2 fromMyGeofiltersView:(_Bool)arg3;
- (id)initWithGeofilterSession:(id)arg1 unlockablesOndemandLineItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
