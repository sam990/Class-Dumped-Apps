//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/SNAnimationInteractionAction.h>

@class KFCustomActionModel, NSString;

@interface SNAnimationInteractivityInteractionEventAction : SNAnimationInteractionAction
{
    NSString *_eventName;
    KFCustomActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eventName;
@property(readonly, nonatomic) KFCustomActionModel *actionModel;
- (void)dealloc;
- (id)initWithEventName:(id)arg1;

@end

