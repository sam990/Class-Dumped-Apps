//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeSDK/PTVPipelineOwner-Protocol.h>
#import <PeriscopeSDK/PTVPublishingPipelineDelegate-Protocol.h>

@class NSString, PTVGuestPublishingViewController, PTVPublishingPipeline, PTVPublishingViewController;
@protocol PTVPipelineContainerViewControllerDelegate;

@interface PTVPipelineContainerViewController : UIViewController <PTVPublishingPipelineDelegate, PTVPipelineOwner>
{
    PTVPipelineContainerViewController *_weakSelf;
    _Bool _isObservingPublishingViewController;
    _Bool _isObservingGuestPublishingViewController;
    _Bool _isObservingGuestPublishingCoordinator;
    PTVPublishingPipeline *_sourcePipeline;
    UIViewController *_currentPublishingViewController;
    _Bool _stabilizationEnabled;
    _Bool _saveAsHQEnabled;
    _Bool _isHostedByNewsCamera;
    id <PTVPipelineContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool isHostedByNewsCamera; // @synthesize isHostedByNewsCamera=_isHostedByNewsCamera;
@property(nonatomic) __weak id <PTVPipelineContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)publishingPipelineDefaultsInFrontPosition;
- (void)publishingPipeline:(id)arg1 didReceiveLogEntry:(id)arg2;
- (void)didChangeLocalAudioSource:(_Bool)arg1 isUsingHeadphones:(_Bool)arg2;
- (void)attemptReconnect;
- (void)onCameraTypeChange:(long long)arg1;
- (void)noteCameraChange;
- (void)updateVideoOrientation;
- (void)imageRotation:(double)arg1 immediate:(_Bool)arg2;
- (void)cameraStartFailed;
- (void)cameraStartComplete;
- (void)didChangeSourcePipelineBroadcastingState;
- (void)showCameraPreviewIfNeeded;
@property(retain) PTVPublishingPipeline *sourcePipeline;
@property(readonly) PTVPublishingPipeline *sourcePipelineIfLoaded;
- (void)unobserveGuestPublishingCoordinator;
- (void)observeGuestPublishingCoordinator;
- (void)unobserveGuestPublishingViewController;
- (void)observeGuestPublishingViewController;
- (id)guestPublishingCoordinator;
@property(readonly, nonatomic) PTVGuestPublishingViewController *guestPublishingViewController;
- (_Bool)isUsingGuestPublishingViewController;
- (void)unobservePublishingViewController;
- (void)observePublishingViewController;
@property(readonly, nonatomic) PTVPublishingViewController *publishingViewController;
- (_Bool)isUsingDefaultPublishingViewController;
- (void)unobserveViewControllers;
- (void)observeViewControllers;
- (void)didChangePipelineUser;
- (void)willChangePipelineUser;
- (id)currentPipelineUser;
- (void)didReplaceCurrentPublishingViewControllerWithViewController:(id)arg1;
- (void)updateViewHierarchy;
- (void)willReplaceCurrentPublishingViewControllerWithViewController:(id)arg1;
@property(retain) UIViewController *currentPublishingViewController;
- (_Bool)audioPresent;
- (void)becomeActive;
- (void)resignActive;
- (void)onEnterBackgroundOrIncomingPhoneCall;
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;
- (void)disconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)startCamera;
@property(readonly, nonatomic) _Bool isPublishing;
- (void)audioPresentStateDidChange;
- (void)publishingStateDidChange;
- (unsigned long long)ntpForCurrentFrame;
- (void)handleInterfaceOrientation:(long long)arg1;
- (id)initWithDelegate:(id)arg1 stabilizationEnabled:(_Bool)arg2 saveAsHQEnabled:(_Bool)arg3;
- (id)publishingContainerView;
- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
