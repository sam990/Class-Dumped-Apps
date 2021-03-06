//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStaticTableViewController.h>

#import <PSPDFKitUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PSPDFKitUI/MFMessageComposeViewControllerDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFDocumentSharingContextDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFDocumentSharingPageSelectionViewControllerDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFDocumentSharingProcessingManagerDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFOverridable-Protocol.h>
#import <PSPDFKitUI/PSPDFProcessorDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFStatusHUDItemDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFStyleable-Protocol.h>
#import <PSPDFKitUI/PSPDFThemeObserver-Protocol.h>
#import <PSPDFKitUI/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <PSPDFKitUI/UIDocumentPickerDelegate-Protocol.h>
#import <PSPDFKitUI/UIPrintInteractionControllerDelegate-Protocol.h>
#import <PSPDFKitUI/UIPrinterPickerControllerDelegate-Protocol.h>

@class MFMailComposeViewController, NSArray, NSString, PSPDFActivityLabel, PSPDFCellModel, PSPDFCheckboxSectionModel, PSPDFDocumentSecurityOptions, PSPDFDocumentSharingConfiguration, PSPDFDocumentSharingContext, PSPDFDocumentSharingPageSelectionDataSource, PSPDFDocumentSharingProcessingManager, PSPDFDocumentSharingTableViewData, PSPDFStatusHUDItem, UIColor, UIPrintInfo, UIPrintInteractionController, UISegmentedControl, UITableViewCell, UIViewController;
@protocol PSPDFDocumentSharingViewControllerDelegate, PSPDFDocumentSharingViewControllerDelegate><PSPDFDelegateProxying, PSPDFPresentationActions, PSPDFVisiblePagesDataSource;

@interface PSPDFDocumentSharingViewController : PSPDFStaticTableViewController <MFMessageComposeViewControllerDelegate, UIDocumentPickerDelegate, MFMailComposeViewControllerDelegate, UIPrintInteractionControllerDelegate, UIPrinterPickerControllerDelegate, PSPDFDocumentSharingPageSelectionViewControllerDelegate, PSPDFProcessorDelegate, UIDocumentInteractionControllerDelegate, PSPDFStatusHUDItemDelegate, PSPDFDocumentSharingProcessingManagerDelegate, PSPDFThemeObserver, PSPDFDocumentSharingContextDelegate, PSPDFStyleable, PSPDFOverridable>
{
    struct {
        unsigned int executeActionDirectly:1;
        unsigned int shouldHideConfigurationOptions:1;
        unsigned int preventFullTableViewReload:1;
    } _flags;
    _Bool _forcesStatusBarHidden;
    _Bool _printInProgress;
    _Bool _didStartSendingToOtherApplication;
    NSString *_selectedDestination;
    NSString *_commitButtonTitle;
    NSArray *_sharingConfigurationsWithState;
    PSPDFCellModel *_pageRangeCellModel;
    PSPDFStatusHUDItem *_statusHUD;
    UISegmentedControl *_destinationsSegmentedControl;
    PSPDFActivityLabel *_emptyViewLabel;
    UITableViewCell *_annotationProgressCell;
    UIColor *_disabledTextColor;
    id <PSPDFDocumentSharingViewControllerDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
    PSPDFDocumentSharingContext *_sharingContext;
    PSPDFDocumentSharingProcessingManager *_processingManager;
    PSPDFDocumentSharingConfiguration *_currentSharingState;
    PSPDFDocumentSharingTableViewData *_tableViewData;
    UIPrintInteractionController *_printInteractionController;
    MFMailComposeViewController *_mailComposeViewController;
    PSPDFCheckboxSectionModel *_annotationSection;
    UIViewController<PSPDFPresentationActions> *_targetController;
    id _sender;
}

@property(nonatomic) __weak id sender; // @synthesize sender=_sender;
@property(nonatomic) __weak UIViewController<PSPDFPresentationActions> *targetController; // @synthesize targetController=_targetController;
@property(retain, nonatomic) PSPDFCheckboxSectionModel *annotationSection; // @synthesize annotationSection=_annotationSection;
@property(nonatomic) _Bool didStartSendingToOtherApplication; // @synthesize didStartSendingToOtherApplication=_didStartSendingToOtherApplication;
@property(nonatomic) __weak MFMailComposeViewController *mailComposeViewController; // @synthesize mailComposeViewController=_mailComposeViewController;
@property(nonatomic) __weak UIPrintInteractionController *printInteractionController; // @synthesize printInteractionController=_printInteractionController;
@property(nonatomic) _Bool printInProgress; // @synthesize printInProgress=_printInProgress;
@property(readonly, nonatomic) PSPDFDocumentSharingTableViewData *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) PSPDFDocumentSharingConfiguration *currentSharingState; // @synthesize currentSharingState=_currentSharingState;
@property(readonly, nonatomic) PSPDFDocumentSharingProcessingManager *processingManager; // @synthesize processingManager=_processingManager;
@property(readonly, nonatomic) PSPDFDocumentSharingContext *sharingContext; // @synthesize sharingContext=_sharingContext;
@property(retain) id <PSPDFDocumentSharingViewControllerDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(retain, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(retain, nonatomic) UITableViewCell *annotationProgressCell; // @synthesize annotationProgressCell=_annotationProgressCell;
@property(retain, nonatomic) PSPDFActivityLabel *emptyViewLabel; // @synthesize emptyViewLabel=_emptyViewLabel;
@property(retain, nonatomic) UISegmentedControl *destinationsSegmentedControl; // @synthesize destinationsSegmentedControl=_destinationsSegmentedControl;
@property(retain, nonatomic) PSPDFStatusHUDItem *statusHUD; // @synthesize statusHUD=_statusHUD;
@property(retain, nonatomic) PSPDFCellModel *pageRangeCellModel; // @synthesize pageRangeCellModel=_pageRangeCellModel;
@property(retain, nonatomic) NSArray *sharingConfigurationsWithState; // @synthesize sharingConfigurationsWithState=_sharingConfigurationsWithState;
@property(copy, nonatomic) NSString *commitButtonTitle; // @synthesize commitButtonTitle=_commitButtonTitle;
@property(retain, nonatomic) NSString *selectedDestination; // @synthesize selectedDestination=_selectedDestination;
@property(nonatomic) _Bool forcesStatusBarHidden; // @synthesize forcesStatusBarHidden=_forcesStatusBarHidden;
- (void).cxx_destruct;
- (_Bool)sharingProcessingManager:(id)arg1 shouldSaveDocument:(id)arg2 withOptions:(id *)arg3;
- (id)temporaryDirectoryForOutputFilesForProcessingManager:(id)arg1;
- (void)sharingProcessingManager:(id)arg1 processorConfiguration:(id)arg2;
- (void)sharingProcessingManagerDidCancelFileCrunching:(id)arg1;
- (_Bool)sharingProcessingManager:(id)arg1 shouldShareFiles:(id)arg2 toDestination:(id)arg3;
- (void)sharingProcessingManager:(id)arg1 didFinishProcessingWithFiles:(id)arg2 error:(id)arg3;
- (id)sharingProcessingManager:(id)arg1 filenameForGeneratedFileForDocument:(id)arg2 destination:(id)arg3;
- (id)securityOptionForSharingProcessingManager:(id)arg1;
- (void)sharingProcessingManager:(id)arg1 didUpdateProgress:(double)arg2;
- (void)cleanUpSharedFilesCache;
- (void)statusHUDItemDidTapActionButton:(id)arg1;
@property(nonatomic) __weak id <PSPDFVisiblePagesDataSource> visiblePagesDataSource;
@property(retain, nonatomic) NSArray *sharingConfigurations; // @dynamic sharingConfigurations;
@property(readonly, nonatomic) NSArray *documents;
- (void)documentSharingPageSelectionViewController:(id)arg1 didUpdateOptionSelection:(unsigned long long)arg2 selectedPageRange:(struct _NSRange)arg3;
- (void)documentSharingContextDidUpdateDocuments:(id)arg1;
- (void)documentSharingContextDidUpdateSharingConfigurations:(id)arg1;
- (struct CGSize)requiredPopoverSize;
- (id)actionTitleForDestination:(id)arg1;
- (void)destinationSelected:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)setSections:(id)arg1;
- (void)setupFileOptionCell:(id)arg1;
- (void)setupCommitSection;
- (void)setupAnnotationSection;
- (void)setupPageRangeSection;
- (void)setUpFileOptionsSection;
- (void)setupTableViewDataSections;
- (void)resolveControllerState;
- (void)refreshTable;
- (void)cancelButtonPressed:(id)arg1;
- (void)commitWithCurrentConfiguration;
- (void)commitButtonPressed:(id)arg1;
- (id)currentSharingConfigurationForDestination:(id)arg1;
- (void)setCurrentSharingConfiguration:(id)arg1;
@property(readonly, nonatomic) PSPDFDocumentSharingConfiguration *currentSharingConfiguration; // @dynamic currentSharingConfiguration;
@property(readonly, nonatomic) PSPDFDocumentSharingPageSelectionDataSource *pageSelectionDataSource;
- (void)updateUIForSelectedDestination;
- (void)configureTableForAvailableConfigurations;
- (id)convertConfiguraturationToState:(id)arg1;
- (unsigned long long)selectedConfigurationIndex;
- (void)syncSharingStateForDestinationAtIndex:(unsigned long long)arg1;
- (void)cancelDocumentPreparationIfAny;
@property(readonly, nonatomic) _Bool checkIfControllerHasOptionsAvailableAndCallDelegateIfNot;
- (void)presentFromViewController:(id)arg1 sender:(id)arg2;
@property(nonatomic) unsigned long long selectedFileFormatOption;
@property(nonatomic) struct _NSRange shareablePageRange;
@property(nonatomic) unsigned long long selectedPageSelectionOption;
@property(nonatomic) unsigned long long selectedAnnotationOption;
- (void)didFinishConfiguringSections;
- (void)updateCurrentTableSelectionState;
- (id)currentPageSelectionTitle;
- (void)updateSharingStateWithBuilder:(CDUnknownBlockType)arg1;
- (void)hideProgressHUD;
- (void)showProgressAndNotifyDelegates:(double)arg1;
@property(readonly, nonatomic) NSString *documentsTitle;
- (_Bool)allowsAnnotationFeatures;
- (void)didMoveToParentViewController:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)pspdf_willTransitionToPresentationStyle:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool shouldCommitImmediately; // @dynamic shouldCommitImmediately;
- (void)configureTitleForOptions;
- (void)applyTheme:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDocuments:(id)arg1 sharingConfigurations:(id)arg2;
- (id)initWithDocuments:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) id <PSPDFDocumentSharingViewControllerDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFDocumentSharingViewControllerDelegate> delegate;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)configureMailComposeViewController:(id)arg1;
- (void)configureProcessorConfigurationOptions:(id)arg1;
@property(readonly, nonatomic) PSPDFDocumentSecurityOptions *documentSecurityOptions;
- (id)temporaryDirectoryForSharingToDestination:(id)arg1;
- (id)subtitleForAnnotationsOptions:(unsigned long long)arg1 sharingConfiguration:(id)arg2;
- (id)titleForAnnotationOptions:(unsigned long long)arg1;
- (id)optionTitleForPrintingDestination:(unsigned long long)arg1;
- (id)titleForDestination:(id)arg1;
- (id)activityViewControllerForSharingItems:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) UIPrintInfo *printInfo;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)sendMessageWithSender:(id)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)exportWithSender:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendEmailWithSender:(id)arg1;
- (void)printerPickerControllerDidSelectPrinter:(id)arg1;
- (_Bool)printerPickerController:(id)arg1 shouldShowPrinter:(id)arg2;
- (id)printerPickerControllerParentViewController:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (id)printConfiguration;
- (void)dismissSharingViewController;
- (void)configurePrintInteractionControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)print;
@property(readonly, nonatomic) NSArray *effectiveExcludedActivityTypes;
- (void)shareToActivityWithSender:(id)arg1;
- (id)activityViewControllerForFiles:(id)arg1 sender:(id)arg2;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)cleanupTemporaryFile:(id)arg1;
- (id)fileURLForSharingData:(id)arg1 destinationFileName:(id)arg2;
- (id)fileURLForSharingFileAtURL:(id)arg1 destinationFileName:(id)arg2;
- (id)fileURLFromFiles:(id)arg1;
- (void)openInOtherApplicationWithSender:(id)arg1;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBarTranslucent;
@property(readonly) Class superclass;

@end

