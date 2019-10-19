//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATask.h>

@class NSPredicate, WAChatStorage;

@interface WAMessagesBySessionTask : WATask
{
    WAChatStorage *_chatStorage;
    NSPredicate *_chatPredicate;
    NSPredicate *_messagePredicate;
    CDUnknownBlockType _yieldMessages;
    CDUnknownBlockType _didFinish;
}

@property(copy) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
- (void).cxx_destruct;
- (void)invokeDoneWithResult:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pickMessagesWithContext:(id)arg1 fromChat:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pickChatWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runTaskFromQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchRequestForNextMessagesIn:(id)arg1;
- (id)fetchRequestForNextChatSession;
- (id)predicateForNextMessages;
- (id)predicateForNextChatSession;
- (id)initWithDescription:(id)arg1 chatStorage:(id)arg2 chatPredicate:(id)arg3 messagePredicate:(id)arg4 block:(CDUnknownBlockType)arg5;

@end
