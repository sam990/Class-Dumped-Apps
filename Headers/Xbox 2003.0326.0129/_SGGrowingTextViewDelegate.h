//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SGGrowingTextViewDelegate-Protocol.h"

@class NSString;
@protocol XBXGrowingTextViewDelegate;

@interface _SGGrowingTextViewDelegate : NSObject <SGGrowingTextViewDelegate>
{
    id <XBXGrowingTextViewDelegate> _userDelegate;
}

@property(nonatomic) __weak id <XBXGrowingTextViewDelegate> userDelegate; // @synthesize userDelegate=_userDelegate;
- (void).cxx_destruct;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

