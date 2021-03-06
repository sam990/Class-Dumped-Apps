//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AsyncDisplayKit/ASAsyncTransactionContainer-Protocol.h>

@class ASDisplayNode, _ASAsyncTransaction;

@interface UIView (ASDisplayNodeInternal) <ASAsyncTransactionContainer>
@property __weak ASDisplayNode *asyncdisplaykit_node;
- (void)addSubnode:(id)arg1;
@property(retain, nonatomic, setter=asyncdisplaykit_setCurrentAsyncTransaction:) _ASAsyncTransaction *asyncdisplaykit_currentAsyncTransaction;
- (void)asyncdisplaykit_asyncTransactionContainerStateDidChange;
- (void)asyncdisplaykit_cancelAsyncTransactions;
@property(readonly, nonatomic) unsigned long long asyncdisplaykit_asyncTransactionContainerState;
@property(nonatomic, getter=asyncdisplaykit_isAsyncTransactionContainer, setter=asyncdisplaykit_setAsyncTransactionContainer:) _Bool asyncdisplaykit_asyncTransactionContainer;
@end

