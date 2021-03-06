//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGQuizStickerSummaryViewDelegate-Protocol.h>

@class IGQuizStickerConsumptionModel, NSString;
@protocol IGQuizStickerSummarySectionControllerDelegate;

@interface IGQuizStickerSummarySectionController : IGListSectionController <IGQuizStickerSummaryViewDelegate>
{
    _Bool _resharingEnabled;
    id <IGQuizStickerSummarySectionControllerDelegate> _delegate;
    IGQuizStickerConsumptionModel *_model;
    struct CGSize _cachedSize;
}

@property(readonly, nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property(readonly, nonatomic) IGQuizStickerConsumptionModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGQuizStickerSummarySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)quizStickerSummaryView:(id)arg1 didTapOptionAtIndex:(long long)arg2;
- (void)quizStickerSummaryViewDidTapShareResults:(id)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithResharingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

