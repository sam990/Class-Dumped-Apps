//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/YTAvatarImageObserverDelegate-Protocol.h>
#import <Module_Framework/YTEditMetadataFullViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTPageStyleControllerObserver-Protocol.h>
#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTStyleContextResponderProvider-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>
#import <Module_Framework/YTUploadLocationPermissionsViewControllerDelegate-Protocol.h>

@class GIMMe, NSString, QTMActivityIndicator, UITapGestureRecognizer, YTCommandResponderEvent, YTEditElementsMetadataViewController, YTEditMetadataFullViewController, YTICommand, YTILocationMetadata, YTUploadLocationPermissionsViewController, YTUploadSelectLocationViewController, YTUploadTaskController;
@protocol YTEditMetadataEditor, YTResponder;

@interface YTEditExistingVideoMetadataViewController : YTStyledViewController <YTStyleContextResponderProvider, YTPageStyleProvider, YTAvatarImageObserverDelegate, YTUploadLocationPermissionsViewControllerDelegate, YTEditMetadataFullViewControllerDelegate, YTPageStyleControllerObserver, YTTopController, YTGraftingViewController>
{
    YTICommand *_model;
    UITapGestureRecognizer *_tapRecognizer;
    YTUploadSelectLocationViewController *_selectLocationViewController;
    YTUploadLocationPermissionsViewController *_locationPermissionsViewController;
    QTMActivityIndicator *_activityIndicator;
    YTEditElementsMetadataViewController *_elementViewController;
    _Bool _showEditMdeUIChanges;
    NSString *_videoID;
    YTUploadTaskController *_uploadTaskController;
    YTEditMetadataFullViewController *_detailsController;
    id <YTEditMetadataEditor> _metadataEditor;
}

@property(nonatomic) _Bool showEditMdeUIChanges; // @synthesize showEditMdeUIChanges=_showEditMdeUIChanges;
@property(retain, nonatomic) id <YTEditMetadataEditor> metadataEditor; // @synthesize metadataEditor=_metadataEditor;
@property(retain, nonatomic) YTEditMetadataFullViewController *detailsController; // @synthesize detailsController=_detailsController;
@property(retain, nonatomic) YTUploadTaskController *uploadTaskController; // @synthesize uploadTaskController=_uploadTaskController;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;
- (void)removeLoadingIndicator;
- (void)addLoadingIndicatorIfNeeded;
- (id)createNativeMDEWithResponse:(id)arg1;
- (id)createElementMDEWithResponse:(id)arg1;
@property(readonly, nonatomic) YTILocationMetadata *currentLocation;
- (void)setLocationEditRenderer:(id)arg1;
- (void)setLocationRendererUsingMetadataResponse:(id)arg1;
- (void)fetchNewSuggestions;
- (void)makeLocationRendererRequest;
- (void)registerEventHandlers;
- (void)addLocationSelectionViewController;
- (void)removeLocationSelectionViewController;
- (_Bool)updateLocationWithEndpoint:(id)arg1;
- (void)removeLocationPermissionsViewController;
- (void)addLocationPermissionsViewController;
- (void)stopTextEditing;
- (void)setupAppearance;
- (void)metadataEditorDidTapAddLocation:(id)arg1;
- (void)metadataEditor:(id)arg1 canSaveMetadata:(_Bool)arg2;
- (void)controller:(id)arg1 didTapPrivacyView:(id)arg2;
- (void)locationPermissionsControllerDidAcceptPermissions:(id)arg1;
- (void)locationPermissionsControllerDidTapCloseButton:(id)arg1;
- (void)avatarDidChange;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)handleMetadataResponse:(id)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)pageStyleControllerPageStyleDidChange;
@property(readonly, nonatomic) long long pageStyle;
- (id)navEndpoint;
@property(readonly, nonatomic) NSString *styleContext;
- (void)selectPrivacyOption:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)updateMetadataInUploadStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)makeUpdateMetadataRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)didTapCloseButton;
- (void)didTapSaveButton;
- (void)setupNavigationItems;
- (void)updateAccountView;
- (void)fillViewWithSmallThumbnailURL:(id)arg1 videoDurationText:(id)arg2 metadata:(id)arg3;
- (id)childViewControllerForStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end
