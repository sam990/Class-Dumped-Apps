//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSDeferrableTimer;
@protocol T1SearchTextObserverDelegate;

@interface T1SearchTextObserver : NSObject
{
    NSString *_mode;
    NSString *_text;
    TFSDeferrableTimer *_timer;
    id <T1SearchTextObserverDelegate> _delegate;
    double _debounceDelay;
}

@property(readonly, nonatomic) double debounceDelay; // @synthesize debounceDelay=_debounceDelay;
@property(nonatomic) __weak id <T1SearchTextObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_t1_notifyDidObserveText;
- (void)textDidChange:(id)arg1;
- (id)init;
- (id)initWithDebounceDelay:(double)arg1 forMode:(id)arg2;

@end
