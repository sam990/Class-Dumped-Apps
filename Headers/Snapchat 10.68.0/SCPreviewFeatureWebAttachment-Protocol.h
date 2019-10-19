//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, SCPreviewToolBarButtonItem;
@protocol SCPreviewFeatureWebAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing;

@protocol SCPreviewFeatureWebAttachment
@property(readonly, nonatomic) NSString *attachmentUrlString;
@property(nonatomic) __weak id <SCPreviewFeatureWebAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate;
- (void)attachmentLoggingWithExtraData:(NSDictionary *)arg1;
- (void)updateForAttachmentItem:(_Bool)arg1;
- (void)updateAttachmentToolBarAttachmentStatus;
- (_Bool)shouldShowToolbarAttachment;
- (SCPreviewToolBarButtonItem *)createWebAttachmentToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2 currentAttachmentUrl:(NSString *)arg3;
- (void)updateWithNewAttachmentUrlString:(NSString *)arg1;
@end
