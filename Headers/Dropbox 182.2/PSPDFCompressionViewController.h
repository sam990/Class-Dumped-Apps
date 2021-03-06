//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStaticTableViewController.h>

#import <PSPDFKitUI/PSPDFDocumentEditorConfigurationConfigurable-Protocol.h>

@class NSString, PSPDFDocumentEditorConfiguration;
@protocol PSPDFCompressionViewControllerDelegate, PSPDFCompressionViewControllerDelegate><PSPDFDelegateProxying;

@interface PSPDFCompressionViewController : PSPDFStaticTableViewController <PSPDFDocumentEditorConfigurationConfigurable>
{
    PSPDFDocumentEditorConfiguration *_documentEditorConfiguration;
    id <PSPDFCompressionViewControllerDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
}

@property(retain) id <PSPDFCompressionViewControllerDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(readonly, nonatomic) PSPDFDocumentEditorConfiguration *documentEditorConfiguration; // @synthesize documentEditorConfiguration=_documentEditorConfiguration;
- (void).cxx_destruct;
- (id)modelMatchingCompression:(id)arg1 inModels:(id)arg2;
- (id)cellModelForCompression:(id)arg1;
- (id)compressionCellModels;
- (void)updateSections;
- (void)viewDidLoad;
- (void)setDocumentEditorConfiguration:(id)arg1;
- (id)initWithDocumentEditorConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) id <PSPDFCompressionViewControllerDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFCompressionViewControllerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

