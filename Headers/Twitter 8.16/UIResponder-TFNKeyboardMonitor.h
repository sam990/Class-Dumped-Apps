//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class NSArray, TFNResponderSnapshot;

@interface UIResponder (TFNKeyboardMonitor)
+ (void)tfn_clearLastRecordedFirstResponder;
+ (id)tfn_lastRecordedFirstResponder;
@property(nonatomic) _Bool tfn_canRestoreFirstResponderOnEnteringForeground;
@property(readonly, nonatomic) _Bool tfn_dashGestureEnabled;
@property(readonly, nonatomic) TFNResponderSnapshot *tfn_snapshotOfResponder;
@property(readonly, nonatomic) _Bool tfn_isLayoutSuppressed;
@property(readonly, nonatomic) _Bool tfn_isResponderChainVetoed;
- (_Bool)tfn_becomeFirstResponderIfNotInResponderChain;
- (void)_tfn_constructResponderChain:(id)arg1;
@property(readonly, nonatomic) NSArray *tfn_responderChain;
@property(readonly, nonatomic) _Bool tfn_acceptsKeyboardInput;
- (void)tfn_recordAsFirstResponder;
@end

