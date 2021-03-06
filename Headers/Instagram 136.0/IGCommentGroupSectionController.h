//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSectionController.h>

#import <InstagramAppCoreFramework/IGCommentBaseSectionController-Protocol.h>
#import <InstagramAppCoreFramework/IGCommentModelUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGCommentNuxThreadingNuxCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCommentRestrictLearnMoreCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListBindingSectionControllerDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListBindingSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGBulkCommentDeleteManager, IGCommentCellController, IGCommentCellRevealManager, IGCommentGroup, IGCommentGroupsManager, IGCommentModel, IGCommentSectionViewModelCache, IGFeedItem, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGCommentGroupSectionDelegate, IGCommentSectionDelegate;

@interface IGCommentGroupSectionController : IGListBindingSectionController <IGCommentNuxThreadingNuxCellDelegate, IGCommentRestrictLearnMoreCellDelegate, IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate, IGCommentModelUpdateListener, IGCommentBaseSectionController, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate>
{
    IGUserSession *_userSession;
    IGFeedItem *_feedItem;
    NSString *_analyticsModule;
    IGCommentGroupsManager *_commentGroupsManager;
    IGBulkCommentDeleteManager *_bulkDeleteManager;
    IGCommentCellRevealManager *_cellRevealManager;
    long long _commentActionPresentationStyle;
    IGCommentGroup *_commentGroup;
    IGCommentGroup *_initialCommentGroup;
    IGCommentCellController *_commentCellController;
    long long _scheduledHighlightIndex;
    _Bool _commentRepliesExpanded;
    NSMutableArray *_collapsedFilteredPreviewComments;
    NSArray *_visibleFilteredPreviewComments;
    long long _likeButtonPosition;
    IGCommentSectionViewModelCache *_viewModelCache;
    IGCommentModel *_deletedRestrictLearnMoreComment;
    _Bool _isReadOnly;
    _Bool _isInEditMode;
    id <IGCommentSectionDelegate> _delegate;
    id <IGCommentGroupSectionDelegate> _groupDelegate;
}

@property(nonatomic) __weak id <IGCommentGroupSectionDelegate> groupDelegate; // @synthesize groupDelegate=_groupDelegate;
@property(nonatomic) __weak id <IGCommentSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapLearnMoreButtonForCell:(id)arg1 viewModel:(id)arg2;
- (void)commentModelDidUpdateRestrictStatus:(id)arg1;
- (void)commentModelDidUpdate:(id)arg1;
- (void)_collapseCommentReplies;
- (void)_removeCommentGroupObserversAndListeners;
- (void)_addCommentGroupObserversAndListeners;
- (id)_commentViewModelForComment:(id)arg1 index:(long long)arg2;
- (long long)_actionsForComment:(id)arg1;
- (_Bool)_canDeleteCommentModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)threadingNuxCell:(id)arg1 didTapCloseButton:(id)arg2;
- (void)sectionController:(id)arg1 didUnhighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didHighlightItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didDeselectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (void)sectionController:(id)arg1 didSelectItemAtIndex:(long long)arg2 viewModel:(id)arg3;
- (struct CGSize)sectionController:(id)arg1 sizeForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)sectionController:(id)arg1 cellForViewModel:(id)arg2 atIndex:(long long)arg3;
- (id)_inlineComposerModelWithReplyToComment:(id)arg1 addTopPadding:(_Bool)arg2;
- (id)sectionController:(id)arg1 viewModelsForObject:(id)arg2;
- (id)commentForCommentCell:(id)arg1;
- (void)hideRestrictLearnMore;
- (void)showRestrictLearnMoreForComment:(id)arg1;
- (void)showHighlightForComment:(id)arg1;
- (long long)indexForInlineComposer;
- (long long)indexForComment:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 feedItem:(id)arg2 analyticsModule:(id)arg3 commentGroupsManager:(id)arg4 bulkDeleteManager:(id)arg5 cellRevealManager:(id)arg6 commentActionPresentationStyle:(long long)arg7 sponsoredSupportConfiguration:(id)arg8 likeButtonPosition:(long long)arg9 viewModelCache:(id)arg10 restrictedUserController:(id)arg11 isReadOnly:(_Bool)arg12 isInEditMode:(_Bool)arg13;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

