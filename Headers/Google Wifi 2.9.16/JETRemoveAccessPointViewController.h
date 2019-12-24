//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

@class NSString, QTMButton;

@interface JETRemoveAccessPointViewController : JETGroupAwareCollectionViewController
{
    NSString *_accessPointID;
    QTMButton *_continueButton;
}

@property(retain, nonatomic) QTMButton *continueButton; // @synthesize continueButton=_continueButton;
@property(copy, nonatomic) NSString *accessPointID; // @synthesize accessPointID=_accessPointID;
- (void).cxx_destruct;
- (void)accessPointsGroupIsGone;
- (_Bool)accessPointIsOnline;
- (void)displayOfflineDeviceAlert;
- (void)unclaimAccessPoint;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (void)constructModel;
- (void)continueButtonTapped;
- (void)cancelButtonTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldShowOfflineTopBar;
- (void)accessPointsGroupIsUpdated;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 accessPointID:(id)arg3;

@end
