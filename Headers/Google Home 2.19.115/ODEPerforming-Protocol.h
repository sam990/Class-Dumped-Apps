//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ODEChoreographing-Protocol.h"
#import "ODEStage-Protocol.h"
#import "ODEStageManagement-Protocol.h"

@class NSArray, NSString, UIView;
@protocol ODEDynamicIntention, ODENamedIntention><ODEDynamicIntention, ODETimelineControl;

@protocol ODEPerforming <ODEStage, ODEStageManagement, ODEChoreographing>
@property(nonatomic) unsigned long long currentDirection;
- (double)acquireTimelineControl;
- (id <ODETimelineControl>)timelineControl;
- (unsigned long long)numberOfActiveGestures;
- (void)terminateImmediately;
- (void)startCanceling;
- (void)startCompleting;
- (ODEDynamicIntentionMaker * (^)(NSArray *))describeIntentionsForViews;
- (ODEDynamicIntentionMaker * (^)(UIView *))describeIntentionsForView;
- (void)setIntention:(id <ODENamedIntention><ODEDynamicIntention>)arg1 withName:(NSString *)arg2 toView:(UIView *)arg3;
- (void)addIntentions:(NSArray *)arg1 toView:(UIView *)arg2;
- (void)addIntention:(id <ODEDynamicIntention>)arg1 toView:(UIView *)arg2;
- (UIView *)referenceView;
@end

