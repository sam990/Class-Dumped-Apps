//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TFSTimer;

@interface TDTPerformanceTest : NSObject
{
    TFSTimer *_timeoutTimer;
    _Bool _timedOut;
    _Bool _cancelled;
    _Bool _restarting;
    _Bool _running;
    _Bool _sendResults;
    _Bool _exitOnCompletion;
    NSDictionary *_parameters;
    NSString *_name;
    double _timeoutDuration;
}

@property(readonly, nonatomic) _Bool exitOnCompletion; // @synthesize exitOnCompletion=_exitOnCompletion;
@property(readonly, nonatomic) _Bool sendResults; // @synthesize sendResults=_sendResults;
@property(readonly, nonatomic) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (void)_didCompleteWithReport:(id)arg1;
- (void)_sendReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reportResults:(id)arg1 error:(id)arg2;
- (void)_timeout;
- (void)_exit;
- (void)_applicationDidCompleteBackgroundFetch:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)restartWithParameters:(id)arg1;
- (void)finishWithResults:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)run;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;
- (id)init;

@end

