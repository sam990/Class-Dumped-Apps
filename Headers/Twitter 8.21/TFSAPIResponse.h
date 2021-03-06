//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLResponse.h>

@class NSArray, NSError;

@interface TFSAPIResponse : TNLResponse
{
    NSError *_RESTError;
    NSError *_parseError;
    NSArray *_APIErrors;
    id _model;
    NSError *_internalAuthenticationError;
}

+ (_Bool)HTTPStatusCodeShouldYieldRESTError:(long long)arg1;
- (void).cxx_destruct;
@property(retain) NSError *internalAuthenticationError; // @synthesize internalAuthenticationError=_internalAuthenticationError;
@property(readonly, nonatomic) id model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSArray *APIErrors; // @synthesize APIErrors=_APIErrors;
@property(readonly, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(readonly, nonatomic) NSError *RESTError; // @synthesize RESTError=_RESTError;
- (id)APIErrorsWithData:(id)arg1 parseError:(out id *)arg2;
- (id)modelWithParseError:(out id *)arg1 APIErrors:(out id *)arg2;
@property(readonly, nonatomic) NSError *anyError;
- (void)finalizeAuthenticationError:(id)arg1;
@property(readonly, nonatomic) NSError *authenticationError;
@property(readonly, nonatomic) NSError *APIError;
- (void)prepare;

@end

