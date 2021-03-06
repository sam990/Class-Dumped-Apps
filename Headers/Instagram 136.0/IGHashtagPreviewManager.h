//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGHashtagNetworkerDelegate-Protocol.h>

@class IGHashtagNetworker, IGUserSession, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol IGHashtagPreviewManagerDelegate;

@interface IGHashtagPreviewManager : NSObject <IGHashtagNetworkerDelegate>
{
    IGUserSession *_userSession;
    NSArray *_hashtagNames;
    NSMutableDictionary *_hashtagFeedItems;
    NSMutableDictionary *_hashtags;
    NSMutableOrderedSet *_hashtagsToFetch;
    IGHashtagNetworker *_hashtagNetworker;
    id <IGHashtagPreviewManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGHashtagPreviewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hashtagNetworker:(id)arg1 didFailDataRequest:(id)arg2 networkRequestType:(long long)arg3 config:(id)arg4;
- (void)hashtagNetworker:(id)arg1 didCompleteHeaderEYMFRequestRequest:(id)arg2;
- (void)hashtagNetworker:(id)arg1 didCompleteReelRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didCompleteMainFeedRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didCompleteInfoRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didStartLoadingWithConfig:(id)arg2 networkRequestType:(long long)arg3;
- (void)_requestFeedItemsForHashtags;
- (id)suggestedHashtagInfos;
- (void)requestPreviewsForHashtags:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

