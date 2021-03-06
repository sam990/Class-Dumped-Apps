//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TIMLongConnectionCallback : NSObject
{
    _Bool _skipCallbackIfUserChanged;
    CDUnknownBlockType _successCompletionBlock;
    CDUnknownBlockType _failureCompletionBlock;
    CDUnknownBlockType _beforeFilterBlock;
    CDUnknownBlockType _filterBlock;
    CDUnknownBlockType _mappingBlock;
    CDUnknownBlockType _errorInMappedResponseBlock;
    SEL _configuredSelector;
    id _userinfo;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)callbackWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool skipCallbackIfUserChanged; // @synthesize skipCallbackIfUserChanged=_skipCallbackIfUserChanged;
@property(retain, nonatomic) id userinfo; // @synthesize userinfo=_userinfo;
@property(nonatomic) SEL configuredSelector; // @synthesize configuredSelector=_configuredSelector;
@property(copy, nonatomic) CDUnknownBlockType errorInMappedResponseBlock; // @synthesize errorInMappedResponseBlock=_errorInMappedResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType mappingBlock; // @synthesize mappingBlock=_mappingBlock;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) CDUnknownBlockType beforeFilterBlock; // @synthesize beforeFilterBlock=_beforeFilterBlock;
@property(copy, nonatomic) CDUnknownBlockType failureCompletionBlock; // @synthesize failureCompletionBlock=_failureCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType successCompletionBlock; // @synthesize successCompletionBlock=_successCompletionBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentUserID;
- (id)description;
- (id)init;

@end

