//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXViewModel.h"

#import "SGActivityPreviewDataModelDelegate-Protocol.h"

@class NSString, SGActivityItemDataContext, SGShareToFeedLaunchContext;
@protocol SGIActivityFeedDataModel, SGIActivityPreviewDataModel, SGIUserDataModel;

@interface SGShareToFeedViewModel : XBXViewModel <SGActivityPreviewDataModelDelegate>
{
    _Bool _pinShare;
    SGActivityItemDataContext *_activityItemDataContext;
    long long _shareState;
    unsigned long long _shareToFeedType;
    NSString *_pinOptionText;
    NSString *_shareRoot;
}

@property(retain, nonatomic) NSString *shareRoot; // @synthesize shareRoot=_shareRoot;
@property(nonatomic) _Bool pinShare; // @synthesize pinShare=_pinShare;
@property(retain, nonatomic) NSString *pinOptionText; // @synthesize pinOptionText=_pinOptionText;
@property(readonly, nonatomic) unsigned long long shareToFeedType; // @synthesize shareToFeedType=_shareToFeedType;
@property(nonatomic) long long shareState; // @synthesize shareState=_shareState;
@property(retain, nonatomic) SGActivityItemDataContext *activityItemDataContext; // @synthesize activityItemDataContext=_activityItemDataContext;
- (void).cxx_destruct;
- (void)completeShareToFeed;
- (void)showPinErrorWithConfirmBlock:(CDUnknownBlockType)arg1;
- (void)tryPinShare:(id)arg1;
- (void)onPinShareToggled;
@property(readonly, nonatomic) id <SGIUserDataModel> userDataModel;
@property(readonly, nonatomic) id <SGIActivityFeedDataModel> activityFeedDataModel;
@property(readonly, nonatomic) id <SGIActivityPreviewDataModel> activityPreviewDataModel;
- (void)onActivityPreviewRequestSucceeded:(id)arg1 withRequestContext:(id)arg2;
- (void)onActivityPreviewRequestFailed:(id)arg1 withRequestContext:(id)arg2;
- (void)internalPostShareWithCaption:(id)arg1;
- (void)postShareWithCaption:(id)arg1;
- (void)onDestroy;
- (void)onDeactivate;
- (void)onActivate;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SGShareToFeedLaunchContext *launchContext; // @dynamic launchContext;
@property(readonly) Class superclass;

@end

