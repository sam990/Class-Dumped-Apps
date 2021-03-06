//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEQRCodeAlbumManagerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEViewControllerProtocol-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEAdvanceQRScanView, AWEAdvanceQRScanViewModel, NSString, UIView;

@interface AWEAdvanceQRScanViewController : UIViewController <AWEQRCodeAlbumManagerDelegate, BTDRouterViewControllerProtocol, AWEUserMessage, AWEViewControllerProtocol>
{
    AWEAdvanceQRScanViewModel *_viewModel;
    UIView *_navigationRightView;
    AWEAdvanceQRScanView *_qrScanView;
    long long _enterFromType;
}

+ (void)__awe__codeRunnerRun_61;
@property(nonatomic) long long enterFromType; // @synthesize enterFromType=_enterFromType;
@property(retain, nonatomic) AWEAdvanceQRScanView *qrScanView; // @synthesize qrScanView=_qrScanView;
@property(nonatomic) __weak UIView *navigationRightView; // @synthesize navigationRightView=_navigationRightView;
@property(retain, nonatomic) AWEAdvanceQRScanViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)availableCaptureSessionPresetForDevice;
- (void)processNetworkView;
- (void)didFinishLogin;
- (void)didLoginFailed;
- (void)didCancelLogin;
- (void)QRCodeAlbumManagerDidReadQRCodeFailure:(id)arg1;
- (void)QRCodeAlbumManager:(id)arg1 didFinishPickingMediaWithResult:(id)arg2 isDouyinType:(_Bool)arg3;
- (void)QRCodeAlbumManagerDidCancelWithImagePickerController:(id)arg1;
- (void)handleAPPDidBecomeActiveNotification;
- (void)handleCameraResult:(id)arg1 isDouyinType:(_Bool)arg2 isEntityResult:(_Bool)arg3;
- (void)removeSelfWhenPushed;
- (void)myQRCodeButtonTapped;
- (void)companyCouponManualInputTapped;
- (void)backAction;
- (void)couponVerificationListAction;
- (void)rightBarButtonItenAction;
- (void)setupNavigationBar;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configUIAnimationForScanMode:(_Bool)arg1;
- (void)updateScaningUIBeforeAnimation:(_Bool)arg1;
- (void)fetchData;
- (void)setupNotification;
- (void)setupConstraints;
- (void)setupBinding;
- (void)setupUI;
- (void)viewDidLoad;
- (id)init;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

