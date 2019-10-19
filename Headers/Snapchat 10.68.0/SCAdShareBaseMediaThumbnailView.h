//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseMediaThumbnailView.h"

@class SCBaseMediaThumbnailViewModel, UIViewController, UIWindow;
@protocol SCAdShareMediaThumbnailViewModel, SCChatCellBaseGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCAdShareBaseMediaThumbnailView : SCBaseMediaThumbnailView
{
    SCBaseMediaThumbnailViewModel<SCAdShareMediaThumbnailViewModel> *_adShareMediaViewModel;
    UIViewController<SCChatCellBaseGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    UIWindow *_mediaFullScreenWindow;
    UIWindow *_originalKeyWindow;
}

- (void).cxx_destruct;
- (id)baseView;
- (void)_hideBaseView:(_Bool)arg1;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)createFullScreenView;
- (void)onRenderingDoneWithMediaType:(id)arg1;
- (void)setMediaViewModel:(id)arg1;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

@end
