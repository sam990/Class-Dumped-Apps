//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTDAIAdBreakStateReporter-Protocol.h>

@class NSMutableArray, NSString;

@interface YTDAIAdBreakState : NSObject <YTDAIAdBreakStateReporter>
{
    NSString *_externalChannelId;
    NSString *_contentCPN;
    NSMutableArray *_reportedAdBreakStateErrorTypes;
    NSMutableArray *_bindingCuepoints;
    _Bool _missingCueIdentifier;
    _Bool _hasStartCuepoint;
    _Bool _adBreakAddedToTimeline;
    _Bool _hasLateCuepoint;
    _Bool _hasOutdatedCuepoint;
    NSString *_cueIdentifier;
}

@property(nonatomic) _Bool hasOutdatedCuepoint; // @synthesize hasOutdatedCuepoint=_hasOutdatedCuepoint;
@property(nonatomic) _Bool hasLateCuepoint; // @synthesize hasLateCuepoint=_hasLateCuepoint;
@property(nonatomic) _Bool adBreakAddedToTimeline; // @synthesize adBreakAddedToTimeline=_adBreakAddedToTimeline;
@property(readonly, nonatomic) _Bool hasStartCuepoint; // @synthesize hasStartCuepoint=_hasStartCuepoint;
@property(readonly, nonatomic) _Bool missingCueIdentifier; // @synthesize missingCueIdentifier=_missingCueIdentifier;
@property(readonly, nonatomic) NSString *cueIdentifier; // @synthesize cueIdentifier=_cueIdentifier;
- (void).cxx_destruct;
- (id)cuepointsDescription;
@property(readonly, copy) NSString *description;
- (_Bool)hasStartCuepointWithCueIdentifier;
- (_Bool)hasDeferredMalformedCueStateError;
- (_Bool)containsReportedErrorType:(long long)arg1;
- (void)addReportedErrorType:(long long)arg1;
- (void)addCuepoint:(id)arg1;
- (id)initWithCueIdentifier:(id)arg1 externalChannelId:(id)arg2 contentCPN:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

