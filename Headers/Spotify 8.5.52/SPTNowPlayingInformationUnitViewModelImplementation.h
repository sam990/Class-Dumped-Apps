//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingAuxiliaryActionsHandlerObserver-Protocol.h"
#import "SPTNowPlayingInformationUnitViewModel-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingLogger, SPTNowPlayingModel;
@protocol SPTLinkDispatcher, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingInformationUnitViewModelDelegate, SPTNowPlayingTestManager;

@interface SPTNowPlayingInformationUnitViewModelImplementation : NSObject <SPTNowPlayingModelObserver, SPTNowPlayingAuxiliaryActionsHandlerObserver, SPTNowPlayingInformationUnitViewModel>
{
    _Bool _shouldShowPositiveFeedback;
    id <SPTNowPlayingInformationUnitViewModelDelegate> _delegate;
    SPTNowPlayingModel *_model;
    NSString *_title;
    NSString *_subtitle;
    SPTNowPlayingLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    id <SPTNowPlayingTestManager> _testManager;
}

@property(nonatomic) _Bool shouldShowPositiveFeedback; // @synthesize shouldShowPositiveFeedback=_shouldShowPositiveFeedback;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTNowPlayingInformationUnitViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)auxiliaryActionsHandlerDidToggleCollectionState:(id)arg1;
- (id)getCurrentSubtitleWithNowPlayingModel:(id)arg1;
- (void)updateWithNowPlayingModel:(id)arg1 trackDidChange:(_Bool)arg2;
- (void)navigateToCurrentArtist;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
@property(readonly, nonatomic, getter=isFeedbackButtonSelected) _Bool feedbackButtonSelected;
@property(readonly, nonatomic, getter=isFeedbackButtonEnabled) _Bool feedbackButtonEnabled;
- (void)toggleCollectionStateFromViewController:(id)arg1 andActionControl:(id)arg2;
- (void)navigateToSubtitleLink;
- (void)navigateToCurrentAlbum;
- (void)dealloc;
- (void)stopObservers;
- (void)startObservers;
- (id)initWithNowPlayingModel:(id)arg1 linkDispatcher:(id)arg2 logger:(id)arg3 auxiliaryActionsHandler:(id)arg4 shouldShowPositiveFeedback:(_Bool)arg5 testManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
