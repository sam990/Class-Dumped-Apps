//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHotConfigObserver-Protocol.h"
#import "YTMPrefetchController-Protocol.h"

@class GIMMe, NSString, YTAutoplayPrefetchController, YTHotConfig;

@interface YTMAutoplayPrefetchController : NSObject <YTHotConfigObserver, YTMPrefetchController>
{
    YTAutoplayPrefetchController *_prefetchController;
    YTHotConfig *_hotConfig;
    GIMMe *_gimme;
}

+ (id)prebufferConfigFromHotConfig:(id)arg1;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateHotConfigValues;
- (void)hotConfigDidChange:(id)arg1;
- (void)queueModificationNotifier:(id)arg1 queueController:(id)arg2 contentVideoMediaTimeDidChangeToTime:(double)arg3 totalMediaTime:(double)arg4;
- (void)queueModificationNotifier:(id)arg1 observedModificationToQueueController:(id)arg2;
- (void)cleanUp;
- (void)stopPrefetching;
- (void)startPrefetching;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

