//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABasicCameraViewController.h"

#import "WALinkLabelDelegate-Protocol.h"

@class NSData, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIView, WACircularProgressView, WADropDownAlertView, WAExactTimer, WANavigationBarTitleView, WAShapeView, WASignalFingerprint, WAUserJID, _WAQRCodeScanResultView, _WAVerificationCodeView;

@interface WAIdentityVerificationViewController : WABasicCameraViewController <WALinkLabelDelegate>
{
    WANavigationBarTitleView *_titleView;
    UIView *_qrCodeContainer;
    UIImageView *_qrCodeImageView;
    _WAQRCodeScanResultView *_qrCodeScanResultView;
    WAExactTimer *_removeQRCodeScanResultTimer;
    UIView *_verificationCodeContainer;
    UIButton *_scanCodeButton;
    _WAVerificationCodeView *_verificationCodeView;
    _Bool _cameraVisible;
    _Bool _qrCodeScanResultVisible;
    _Bool _suppressLayoutOfCameraPreview;
    UITapGestureRecognizer *_qrCodeTapGesture;
    WAShapeView *_maskView;
    WAShapeView *_cameraViewfinder;
    WACircularProgressView *_qrCodeScanProgressView;
    double _viewfinderRadius;
    WADropDownAlertView *_incorrectLocalNumberAlert;
    WADropDownAlertView *_incorrectRemoteNumberAlert;
    WAUserJID *_jid;
    NSString *_verificationCode;
    NSData *_lastQRCode;
    WASignalFingerprint *_fingerprint;
}

+ (long long)cameraMode;
+ (id)dataFromQRCodeData:(id)arg1;
+ (id)formattedVerificationCodeFromCode:(id)arg1 groupingsPerRow:(long long)arg2 formatForCaption:(_Bool)arg3;
+ (id)controllerForJID:(id)arg1 withFingerprint:(id)arg2;
+ (void)presentUnableToVerifyAlertForJID:(id)arg1 fromViewController:(id)arg2;
+ (void)presentIdentityVerificationScreenForJID:(id)arg1 fromViewController:(id)arg2;
@property(retain, nonatomic) WASignalFingerprint *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(copy, nonatomic) NSData *lastQRCode; // @synthesize lastQRCode=_lastQRCode;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(copy, nonatomic) WAUserJID *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (_Bool)startCameraAutomatically;
- (void)shareCodeAction:(id)arg1;
- (void)removeQRCodeScanResultViewAnimated:(_Bool)arg1;
- (void)animateLastPartOfQRCodeScanResult:(_Bool)arg1 ignoreInteractionToken:(id)arg2;
- (void)animateQRCodeScanResult:(_Bool)arg1;
- (void)setCameraVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleTapToFocus:(id)arg1;
- (void)resetLastKnownQRCodeMatchingCode:(id)arg1 afterDelay:(double)arg2;
- (void)cameraController:(id)arg1 didDetectQRCode:(id)arg2;
- (void)cameraControllerSessionDidBeginRunning:(id)arg1;
- (void)didCreateCameraController;
- (void)scanCodeAction:(id)arg1;
- (void)handleQRCodeTap:(id)arg1;
- (void)layoutVerificationCodeText;
- (void)updateTitleViewToCurrentInterfaceOrientation;
- (void)callDidBecomeVideo:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)deviceOrientationForInterfaceDidChangeWithAnimation:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

