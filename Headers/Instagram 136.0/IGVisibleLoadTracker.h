//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGVisibleLoadTracker : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    long long _mode;
    NSString *_analyticsModule;
    double _visibleLoadStartTime;
}

- (void).cxx_destruct;
- (void)_tryToLog;
- (id)viewpointAction;
- (id)initWithMode:(long long)arg1 analyticsModule:(id)arg2 analyticsLogger:(id)arg3;

@end

