//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGNetworkSourceDelegate-Protocol.h>

@class IG4BLogger, IGNetworkSource, IGUserSession, NSString;

@interface IGProAccountSuggestionsNetworker : NSObject <IGNetworkSourceDelegate>
{
    IGUserSession *_userSession;
    long long _networkerStep;
    IG4BLogger *_logger;
    IGNetworkSource *_networkSource;
    CDUnknownBlockType __completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
- (void).cxx_destruct;
- (void)_logFetchDataErrorFromError:(id)arg1;
- (void)_logFetchData;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3;
- (void)_fetchUserFollowStatusWithResponse:(id)arg1;
- (id)_fetchProAccountSuggestionsURLRequestWithNetworkerStep:(long long)arg1;
- (void)fetchProAccountSuggestionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1 networkerStep:(long long)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

