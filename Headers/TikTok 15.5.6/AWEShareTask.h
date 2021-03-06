//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEShareStageDelegate-Protocol.h"

@class AWEShareContext, NSEnumerator, NSMutableArray, NSString;
@protocol AWEShareChannel, AWEShareStage, AWEShareView;

@interface AWEShareTask : NSObject <AWEShareStageDelegate>
{
    unsigned long long _state;
    id <AWEShareView> _shareView;
    AWEShareContext *_context;
    id <AWEShareChannel> _channel;
    id <AWEShareStage> _currentStage;
    NSEnumerator *_stageEnumerator;
    NSMutableArray *_completions;
}

@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSEnumerator *stageEnumerator; // @synthesize stageEnumerator=_stageEnumerator;
@property(retain, nonatomic) id <AWEShareStage> currentStage; // @synthesize currentStage=_currentStage;
@property(retain, nonatomic) id <AWEShareChannel> channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) AWEShareContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <AWEShareView> shareView; // @synthesize shareView=_shareView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)allStages;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)finishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)shareStage:(id)arg1 didFinishWithResult:(unsigned long long)arg2 error:(id)arg3;
- (void)runStage:(id)arg1;
- (_Bool)shouldRunStage:(id)arg1;
- (_Bool)continueToNextStage;
- (void)execute;
- (_Bool)prepareWithChannel:(id)arg1 inView:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

