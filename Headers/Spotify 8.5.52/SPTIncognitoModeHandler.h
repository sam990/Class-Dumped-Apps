//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol SPTAsyncScheduler, SPTProductState;

@interface SPTIncognitoModeHandler : NSObject
{
    struct IncognitoModeHandler *_incognitoModeHandler;
    struct scoped_connection _incognitoModeHandlerConnection;
    _Bool _incognitoModeEnabled;
    id <SPTProductState> _productState;
    id <SPTAsyncScheduler> _scheduler;
    NSMapTable *_observers;
}

+ (id)incognitoModeHandlerWithIncognitoModeHandler:(struct IncognitoModeHandler *)arg1 productState:(id)arg2 scheduler:(id)arg3;
@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <SPTAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic, getter=isIncognitoModeEnabled) _Bool incognitoModeEnabled; // @synthesize incognitoModeEnabled=_incognitoModeEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double incognitoModeTimeout;
- (void)processIncognitoModeEvent:(_Bool)arg1 timeout:(_Bool)arg2;
- (void)disableIncognitoMode;
- (void)enableIncognitoMode;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1 onQueue:(id)arg2;
- (void)addObserver:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (id)initWithIncognitoModeHandler:(struct IncognitoModeHandler *)arg1 productState:(id)arg2 scheduler:(id)arg3;

@end
