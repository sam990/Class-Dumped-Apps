//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSArray, NSNumber, NSString, TNUServiceHTTPConfiguration;
@protocol TNLRequestRetryPolicyProvider;

@interface TFSTwitterAPIDirectMessageNewCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _dmUsers;
    NSString *_conversationID;
    NSArray *_recipientIDs;
    NSString *_text;
    NSString *_mediaID;
    NSNumber *_tweetID;
    NSString *_fleetID;
    NSString *_cardURI;
    NSString *_requestID;
    NSString *_quickReplyRequestID;
    NSString *_quickReplyResponseSelectedOptionID;
    NSString *_placeID;
    NSNumber *_locationLatitude;
    NSNumber *_locationLongitude;
    TNUServiceHTTPConfiguration *_httpRequestConfiguration;
    id <TNLRequestRetryPolicyProvider> _retryPolicyProvider;
}

@property(readonly, nonatomic) id <TNLRequestRetryPolicyProvider> retryPolicyProvider; // @synthesize retryPolicyProvider=_retryPolicyProvider;
@property(readonly, nonatomic) TNUServiceHTTPConfiguration *httpRequestConfiguration; // @synthesize httpRequestConfiguration=_httpRequestConfiguration;
@property(readonly, nonatomic) _Bool dmUsers; // @synthesize dmUsers=_dmUsers;
@property(readonly, copy, nonatomic) NSNumber *locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(readonly, copy, nonatomic) NSNumber *locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(readonly, copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(readonly, copy, nonatomic) NSString *quickReplyResponseSelectedOptionID; // @synthesize quickReplyResponseSelectedOptionID=_quickReplyResponseSelectedOptionID;
@property(readonly, copy, nonatomic) NSString *quickReplyRequestID; // @synthesize quickReplyRequestID=_quickReplyRequestID;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSString *cardURI; // @synthesize cardURI=_cardURI;
@property(readonly, copy, nonatomic) NSString *fleetID; // @synthesize fleetID=_fleetID;
@property(readonly, nonatomic) NSNumber *tweetID; // @synthesize tweetID=_tweetID;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSArray *recipientIDs; // @synthesize recipientIDs=_recipientIDs;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)scribeCommandAttemptResponse:(id)arg1 willRetry:(_Bool)arg2 to:(id)arg3;
- (void)scribeCommandResponse:(id)arg1 to:(id)arg2;
- (id)request;
- (long long)networkTransactionMetricsStatusForResponse:(id)arg1;
- (id)initWithService:(id)arg1 accountID:(id)arg2 conversationID:(id)arg3 recipientIDs:(id)arg4 text:(id)arg5 mediaID:(id)arg6 tweetID:(id)arg7 fleetID:(id)arg8 cardURI:(id)arg9 quickReplyRequestID:(id)arg10 quickReplyResponseSelectedOptionID:(id)arg11 placeID:(id)arg12 locationLatitude:(id)arg13 locationLongitude:(id)arg14 requestID:(id)arg15 dmUsers:(_Bool)arg16 source:(unsigned long long)arg17 responseModelBuilder:(id)arg18 completionBlock:(CDUnknownBlockType)arg19;
- (id)initWithService:(id)arg1 accountID:(id)arg2 recipientIDs:(id)arg3 text:(id)arg4 mediaID:(id)arg5 tweetID:(id)arg6 fleetID:(id)arg7 cardURI:(id)arg8 placeID:(id)arg9 locationLatitude:(id)arg10 locationLongitude:(id)arg11 requestID:(id)arg12 dmUsers:(_Bool)arg13 source:(unsigned long long)arg14 responseModelBuilder:(id)arg15 completionBlock:(CDUnknownBlockType)arg16;
- (id)initWithService:(id)arg1 accountID:(id)arg2 conversationID:(id)arg3 text:(id)arg4 mediaID:(id)arg5 tweetID:(id)arg6 fleetID:(id)arg7 cardURI:(id)arg8 quickReplyRequestID:(id)arg9 quickReplyResponseSelectedOptionID:(id)arg10 placeID:(id)arg11 locationLatitude:(id)arg12 locationLongitude:(id)arg13 requestID:(id)arg14 dmUsers:(_Bool)arg15 source:(unsigned long long)arg16 responseModelBuilder:(id)arg17 completionBlock:(CDUnknownBlockType)arg18;

@end

