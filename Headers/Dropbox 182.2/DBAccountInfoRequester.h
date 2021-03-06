//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBRestClientRequestDataTask-Protocol.h>

@protocol DBAccountInfoRequesterInternal;

@interface DBAccountInfoRequester : NSObject <DBRestClientRequestDataTask>
{
    id <DBAccountInfoRequesterInternal> _internalRequest;
    DBAccountInfoRequester *_selfStrongReference;
    CDUnknownBlockType _completion;
}

+ (id)test_apiV2requestForUserId:(id)arg1 completion:(CDUnknownBlockType)arg2 apiClient:(id)arg3;
+ (id)test_apiV1requestForUserId:(id)arg1 completion:(CDUnknownBlockType)arg2 requestsTestManager:(id)arg3;
+ (id)requestWithoutUnlinkCleanupForUserId:(id)arg1 accountManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)requestForAccount:(id)arg1 accountManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setApiV2Enabled:(_Bool)arg1;
- (void).cxx_destruct;
- (id)test_internalRequest;
- (void)db_handleResultWithInfoDict:(id)arg1 error:(id)arg2;
- (void)cancel;
- (id)startWithPriority:(float)arg1;
- (id)start;
- (id)initWithInternalRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initForAPIV2TestingWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2 apiClient:(id)arg3;
- (id)initForAPIV1TestingWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2 requestsTestManager:(id)arg3;
- (id)initWithUserId:(id)arg1 authToken:(id)arg2 authTokenSecret:(id)arg3 accountManager:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

