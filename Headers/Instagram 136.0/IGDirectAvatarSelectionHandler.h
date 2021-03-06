//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectAvatarSelectionDelegate-Protocol.h>

@class IGDirectInboxService, IGReelSeenStateStore, IGStoryViewerPresentationController, IGUserSession, NSString;
@protocol IGDirectAvatarSelectionHandlerDelegate;

@interface IGDirectAvatarSelectionHandler : NSObject <IGDirectAvatarSelectionDelegate>
{
    IGUserSession *_userSession;
    IGStoryViewerPresentationController *_storyViewerPresentationController;
    IGDirectInboxService *_inboxService;
    IGReelSeenStateStore *_seenStateStore;
    id <IGDirectAvatarSelectionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didSelectAvatarForThreadId:(id)arg1 threadMetadata:(id)arg2 viewController:(id)arg3 sourceView:(id)arg4;
- (id)initWithUserSession:(id)arg1 storyPresentationCoordinator:(id)arg2 inboxService:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

