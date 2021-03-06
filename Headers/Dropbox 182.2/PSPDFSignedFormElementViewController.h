//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFBaseTableViewController.h>

#import <PSPDFKitUI/PSPDFThemeObserver-Protocol.h>

@class NSObject, NSString, PSPDFSignatureFormElement, UILabel;
@protocol OS_dispatch_queue, PSPDFSignedFormElementViewControllerDelegate, PSPDFSignedFormElementViewControllerDelegate><PSPDFDelegateProxying;

@interface PSPDFSignedFormElementViewController : PSPDFBaseTableViewController <PSPDFThemeObserver>
{
    _Bool _isRemovingSignaturesAllowed;
    PSPDFSignatureFormElement *_formElement;
    UILabel *_label;
    NSObject<OS_dispatch_queue> *_queue;
    id <PSPDFSignedFormElementViewControllerDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
}

@property(retain) id <PSPDFSignedFormElementViewControllerDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(nonatomic) _Bool isRemovingSignaturesAllowed; // @synthesize isRemovingSignaturesAllowed=_isRemovingSignaturesAllowed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PSPDFSignatureFormElement *formElement; // @synthesize formElement=_formElement;
- (void).cxx_destruct;
- (void)applyTheme:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)verifySignatureAndUpdateStatus;
- (id)verifySignatureWithTrustedCertificates:(id)arg1 error:(id *)arg2;
- (void)removeSignatureConfirmed;
- (void)removeSignature:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (struct CGSize)pspdf_preferredContentOrPopoverSize;
- (void)commonInit;
- (id)initWithSignatureFormElement:(id)arg1 allowRemovingSignature:(_Bool)arg2;
- (id)initWithSignatureFormElement:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) id <PSPDFSignedFormElementViewControllerDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFSignedFormElementViewControllerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

