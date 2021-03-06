//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTMultiSizeViewController.h>

#import "YTAutonavPermittingPresentedViewController-Protocol.h"

@class GIMMe, MPVolumeView, NSString, UIViewController, YTHotConfig, YTNGWatchLayerViewController, YTVolumeBarView;
@protocol YTNGWatchContainerViewController;

@interface YTNGWatchFullscreenViewController : YTMultiSizeViewController <YTAutonavPermittingPresentedViewController>
{
    YTVolumeBarView *_volumeBarView;
    MPVolumeView *_hiddenVolumeView;
    YTNGWatchLayerViewController *_watchLayerViewController;
    YTHotConfig *_hotConfig;
    _Bool _didSetFullscreenInViewWillAppear;
    _Bool _rotating;
    _Bool _miniBarTransition;
    GIMMe *_gimme;
    UIViewController *_fullscreenPresenter;
    UIViewController<YTNGWatchContainerViewController> *_collectionViewController;
}

@property(readonly, nonatomic) __weak UIViewController<YTNGWatchContainerViewController> *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(readonly, nonatomic) __weak UIViewController *fullscreenPresenter; // @synthesize fullscreenPresenter=_fullscreenPresenter;
@property(readonly, nonatomic, getter=isMiniBarTransition) _Bool miniBarTransition; // @synthesize miniBarTransition=_miniBarTransition;
@property(readonly, nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)moveCollectionViewControllerToParent:(id)arg1;
- (_Bool)isParentOfCollectionViewController;
- (void)didTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)willTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithFullscreenPresenter:(id)arg1 collectionViewController:(id)arg2 watchLayerViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

