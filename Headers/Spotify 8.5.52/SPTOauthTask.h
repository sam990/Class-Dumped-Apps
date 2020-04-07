//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTOauthTaskDelegate;

@interface SPTOauthTask : NSObject
{
    struct unique_ptr<spotify::connectivity::oauth::objc::SPTAuthSchedulerBridge, std::__1::default_delete<spotify::connectivity::oauth::objc::SPTAuthSchedulerBridge>> _scheduler;
    function_88b465b1 _callback;
    shared_ptr_b60d0e1e _completion;
    CDUnknownBlockType _startOperation;
    id <SPTOauthTaskDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SPTOauthTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) shared_ptr_b60d0e1e *completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) const function_88b465b1 *callback; // @synthesize callback=_callback;
@property(copy, nonatomic) CDUnknownBlockType startOperation; // @synthesize startOperation=_startOperation;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Scheduler *scheduler;
- (void)cancel;
- (void)start;
- (void)setDelegate:(id)arg1 onScheduler:(id)arg2;
- (id)initWithStartOperation:(CDUnknownBlockType)arg1;

@end
