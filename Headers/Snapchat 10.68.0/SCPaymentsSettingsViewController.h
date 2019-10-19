//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPaymentsGenericTableViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource-Protocol.h"
#import "SCPaymentsCardCreateUpdateViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCCommerceSession, SCLoadingIndicatorView, SCUserSession, UIVisualEffectView;

@interface SCPaymentsSettingsViewController : SCPaymentsGenericTableViewController <SCPaymentsCardCreateUpdateViewControllerDelegate, SCCommerceLoggerPageMetricsDataSource>
{
    UIVisualEffectView *_loadingBackgroundView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    NSString *_metricsDisplayId;
    _Bool _loadingPayments;
    _Bool _loadingOrders;
    SCUserSession *_userSession;
    SCCommerceSession *_commerceSession;
    NSMutableArray *_orderList;
    long long _numberOfOrdersToShow;
    NSArray *_paymentMethods;
    NSString *_orderHistoryInfoString;
    NSMutableArray *_tableSections;
}

@property(retain) NSMutableArray *tableSections; // @synthesize tableSections=_tableSections;
@property(retain, nonatomic) NSString *orderHistoryInfoString; // @synthesize orderHistoryInfoString=_orderHistoryInfoString;
@property(nonatomic) _Bool loadingOrders; // @synthesize loadingOrders=_loadingOrders;
@property(nonatomic) _Bool loadingPayments; // @synthesize loadingPayments=_loadingPayments;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(nonatomic) long long numberOfOrdersToShow; // @synthesize numberOfOrdersToShow=_numberOfOrdersToShow;
@property(retain, nonatomic) NSMutableArray *orderList; // @synthesize orderList=_orderList;
@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)displayId;
- (void)_hideBlurView;
- (void)_showBlurView;
- (id)_pagenameForPageView;
- (void)paymentsCardCreationEditViewController:(id)arg1 didCreatePaymentsMethod:(id)arg2;
- (void)loadPurchases;
- (void)loadPaymentMethods;
- (void)handleSelectionForPaymentsTableViewCellAtIndexPath:(id)arg1;
- (id)_baseSettingsCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_contactInformationCellForRowAtIndexPath:(id)arg1;
- (id)_shippingAddressCellForRowAtIndexPath:(id)arg1;
- (id)_viewAllCellForRowAtIndexPath:(id)arg1;
- (id)_purchaseCellForRowAtIndexPath:(id)arg1;
- (id)_odgCellForRowAtIndexPath:(id)arg1;
- (id)paymentMethodWrapperForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 paymentsTableViewCellAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)didTapDoneButton;
- (void)setupTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 commerceSession:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
