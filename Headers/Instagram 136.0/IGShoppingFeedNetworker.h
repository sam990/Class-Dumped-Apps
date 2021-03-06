//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingFeedNetworkFetchState, NSString;
@protocol IGAPIClient, IGRequestToken, IGShoppingFeedNetworkerDelegate;

@interface IGShoppingFeedNetworker : NSObject
{
    id <IGAPIClient> _apiClient;
    CDUnknownBlockType _parsingHandler;
    CDUnknownBlockType _stateUpdateHandler;
    CDUnknownBlockType _responseHandler;
    NSString *_path;
    id <IGRequestToken> _currentRequestToken;
    IGShoppingFeedNetworkFetchState *_fetchState;
    id <IGShoppingFeedNetworkerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingFeedNetworkerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGShoppingFeedNetworkFetchState *fetchState; // @synthesize fetchState=_fetchState;
- (void).cxx_destruct;
- (void)_handleRequestFailureWithErrorInfo:(id)arg1;
- (void)_handleRequestSuccessWithResponse:(id)arg1;
- (_Bool)requestFeedWithConfiguration:(id)arg1;
- (id)initWithAPIClient:(id)arg1 path:(id)arg2 hasLoadedOnce:(_Bool)arg3 parsingHandler:(CDUnknownBlockType)arg4;
- (id)initWithAPIClient:(id)arg1 path:(id)arg2 hasLoadedOnce:(_Bool)arg3 parsingHandler:(CDUnknownBlockType)arg4 stateUpdateHandler:(CDUnknownBlockType)arg5 responseHandler:(CDUnknownBlockType)arg6;

@end

