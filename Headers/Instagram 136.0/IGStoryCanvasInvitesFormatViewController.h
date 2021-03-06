//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGInvitesStickerCreationViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatGradientHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatViewControllerType-Protocol.h>

@class IGInvitesStickerView, IGStoryCanvasToolbarConfig, IGStoryStickerContainerView, IGUserSession, NSString;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasInvitesFormatViewController : UIViewController <IGInvitesStickerCreationViewControllerDelegate, IGStoryCanvasFormatViewControllerType, IGStoryCanvasFormatGradientHandler>
{
    IGUserSession *_userSession;
    struct UIEdgeInsets _contentInset;
    IGStoryStickerContainerView *_stickerContainerView;
    IGInvitesStickerView *_inviteStickerView;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
- (void).cxx_destruct;
- (void)_proceedToPostcapture;
- (void)_presentEditingVC;
- (void)_handleTap:(id)arg1;
- (void)handleGradientChange:(id)arg1;
- (void)invitesStickerCreationViewController:(id)arg1 didFinishEditingInvitesStickerView:(id)arg2;
- (void)invitesStickerCreationViewController:(id)arg1 willFinishEditingInvitesStickerView:(id)arg2;
- (id)createModeSubformatForLogging;
- (void)restoreCompositionState;
- (void)handleCapture;
@property(readonly, nonatomic) IGStoryStickerContainerView *stickerContainerView;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 contentInset:(struct UIEdgeInsets)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

