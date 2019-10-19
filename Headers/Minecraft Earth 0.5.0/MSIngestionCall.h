//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_source>, NSString;

@interface MSIngestionCall : NSObject
{
    _Bool _submitted;
    CDUnknownBlockType _completionHandler;
    NSObject *_data;
    NSString *_callId;
    id <MSIngestionCallDelegate> _delegate;
    NSString *_eTag;
    NSString *_authToken;
    NSObject<OS_dispatch_source> *_timerSource;
    unsigned long long _retryCount;
    NSArray *_retryIntervals;
}

@property(retain, nonatomic) NSArray *retryIntervals; // @synthesize retryIntervals=_retryIntervals;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(nonatomic) __weak id <MSIngestionCallDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSubmitted) _Bool submitted; // @synthesize submitted=_submitted;
@property(copy, nonatomic) NSString *callId; // @synthesize callId=_callId;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)ingestion:(id)arg1 callCompletedWithResponse:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)resetRetry;
- (void)resetTimer;
- (void)startRetryTimerWithStatusCode:(unsigned long long)arg1;
- (unsigned int)delayForRetryCount:(unsigned long long)arg1;
- (_Bool)hasReachedMaxRetries;
- (id)initWithRetryIntervals:(id)arg1;

@end
