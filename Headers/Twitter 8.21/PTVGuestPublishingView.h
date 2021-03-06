//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/PTVGuestContainerViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGuestViewDelegate-Protocol.h>

@class NSObject, NSString, PTVContextualMenuView, PTVGuestCallerSession, PTVGuestContainerView, PTVGuestView, UIStackView;
@protocol PTVGuestPublishingViewDelegate, PTVLoggedInUserProtocol;

@interface PTVGuestPublishingView : UIView <PTVGuestContainerViewDelegate, PTVGuestViewDelegate>
{
    UIStackView *_horizontalGuestStackView;
    PTVGuestContainerView *_leadingGuestContainerView;
    PTVGuestContainerView *_centerGuestContainerView;
    PTVGuestContainerView *_trailingGuestContainerView;
    double _bottomBarFrameHeight;
    _Bool _isDoubleTapToFlipCameraPreviewViewEnabled;
    _Bool _canHangUpGuestViews;
    id <PTVGuestPublishingViewDelegate> _delegate;
    PTVGuestView *_cameraPreviewView;
    PTVGuestView *_primaryGuestView;
    PTVGuestCallerSession *_primaryCallerSession;
    PTVGuestCallerSession *_leadingCallerSession;
    PTVGuestCallerSession *_centerCallerSession;
    PTVGuestCallerSession *_trailingCallerSession;
    long long _interfaceOrientation;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVContextualMenuView *_displayedGuestContextMenuView;
    struct UIEdgeInsets _guestViewsMargins;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PTVContextualMenuView *displayedGuestContextMenuView; // @synthesize displayedGuestContextMenuView=_displayedGuestContextMenuView;
@property(retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(nonatomic) _Bool canHangUpGuestViews; // @synthesize canHangUpGuestViews=_canHangUpGuestViews;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) _Bool isDoubleTapToFlipCameraPreviewViewEnabled; // @synthesize isDoubleTapToFlipCameraPreviewViewEnabled=_isDoubleTapToFlipCameraPreviewViewEnabled;
@property(retain, nonatomic) PTVGuestCallerSession *trailingCallerSession; // @synthesize trailingCallerSession=_trailingCallerSession;
@property(retain, nonatomic) PTVGuestCallerSession *centerCallerSession; // @synthesize centerCallerSession=_centerCallerSession;
@property(retain, nonatomic) PTVGuestCallerSession *leadingCallerSession; // @synthesize leadingCallerSession=_leadingCallerSession;
@property(retain, nonatomic) PTVGuestCallerSession *primaryCallerSession; // @synthesize primaryCallerSession=_primaryCallerSession;
@property(retain, nonatomic) PTVGuestView *primaryGuestView; // @synthesize primaryGuestView=_primaryGuestView;
@property(retain, nonatomic) PTVGuestView *cameraPreviewView; // @synthesize cameraPreviewView=_cameraPreviewView;
@property(nonatomic) struct UIEdgeInsets guestViewsMargins; // @synthesize guestViewsMargins=_guestViewsMargins;
@property(nonatomic) __weak id <PTVGuestPublishingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateChatSectionBottomBarHeight:(double)arg1;
- (void)guestView:(id)arg1 renderingDidChange:(_Bool)arg2;
- (void)updateActionButtonForContainerView:(id)arg1;
- (void)actionButtonsStateDidChange;
- (void)hideAllLoadingBars;
- (void)showLoadingBars:(_Bool)arg1 atPosition:(unsigned long long)arg2;
- (void)didUpdateGuestCallerSession:(id)arg1;
- (void)setGuestViewsNeedLayout;
- (void)setTrailingGuestUsername:(id)arg1;
- (void)setTrailingParticipantIndex:(long long)arg1;
@property(retain, nonatomic) PTVGuestView *trailingGuestView;
- (void)setTrailingGuestView:(id)arg1 forcedReset:(_Bool)arg2;
- (void)setCenterGuestUsername:(id)arg1;
- (void)setCenterParticipantIndex:(long long)arg1;
@property(retain, nonatomic) PTVGuestView *centerGuestView;
- (void)setCenterGuestView:(id)arg1 forcedReset:(_Bool)arg2;
- (void)setLeadingGuestUsername:(id)arg1;
- (void)setLeadingParticipantIndex:(long long)arg1;
@property(retain, nonatomic) PTVGuestView *leadingGuestView;
- (void)setLeadingGuestView:(id)arg1 forcedReset:(_Bool)arg2;
- (unsigned long long)nGuestViews;
@property(readonly, nonatomic) struct CGRect cameraPreviewRect;
- (void)updateCameraDisplayViewOrientationIfNeeded;
- (void)setPrimaryGuestView:(id)arg1 forcedReset:(_Bool)arg2;
- (void)handleDoubleTap:(id)arg1;
- (void)createTapRecognizers;
- (void)guestView:(id)arg1 isHighlighted:(_Bool)arg2;
- (void)didTapUsernameButtonOnGuestView:(id)arg1;
- (void)didTapFlipCameraButtonOnGuestView:(id)arg1;
- (void)didTapHangUpButtonOnGuestView:(id)arg1;
- (void)didTapCancelCountdownOnGuestView:(id)arg1;
- (void)didTapOnGuestView:(id)arg1;
@property(readonly, nonatomic) double guestViewsMaxY;
- (id)convertedHitViewFromPoint:(struct CGPoint)arg1 insideGuestContainerView:(id)arg2 withEvent:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)observeGuestViewChanges:(id)arg1;
- (void)updateGuestViewAtPosition:(unsigned long long)arg1;
- (void)updateGuestViews;
- (id)guestViewAtPosition:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

