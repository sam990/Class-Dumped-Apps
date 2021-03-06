//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBCXMPPStreaming;

@interface WBCXMPPStreamProvider : NSObject
{
    double _defaultTimeout;
    int _executionContext;
    struct __WESSignalContext *_signalContext;
    id <WBCXMPPStreaming> _wamsysXmppRawStream;
    id <WBCXMPPStreaming> _nativeXmppRawStream;
    _Bool _wamsysEnabled;
    _Bool _fallbackMode;
    int _successiveFailures;
    id <WBCXMPPStreaming> _currentStream;
}

@property(readonly, nonatomic) id <WBCXMPPStreaming> currentStream; // @synthesize currentStream=_currentStream;
- (void).cxx_destruct;
- (void)recordConnectionFailure;
- (void)recordConnectionSuccess;
- (void)prepareNextStream;
- (void)dealloc;
- (id)initWithDefaultTimeout:(double)arg1 executionContext:(int)arg2;

@end

