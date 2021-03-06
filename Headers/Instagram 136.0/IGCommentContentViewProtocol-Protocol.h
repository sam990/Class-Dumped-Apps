//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGCommentSectionViewModel, UIButton;
@protocol IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate;

@protocol IGCommentContentViewProtocol <NSObject>
+ (double)profilePictureColumnWidthWithUseInlineStyle:(_Bool)arg1;
+ (double)heightForCommentViewModel:(IGCommentSectionViewModel *)arg1 useInlineStyle:(_Bool)arg2 removeLikeButtonPadding:(_Bool)arg3 width:(double)arg4;
- (UIButton *)likeButton;
- (void)updateViewWithCommentViewModel:(IGCommentSectionViewModel *)arg1;
- (void)setProfilePicViewDelegate:(id <IGProfilePictureImageViewDelegate>)arg1;
- (void)setCoreTextLinkHandler:(id <IGCoreTextLinkHandler>)arg1;
@end

