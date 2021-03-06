//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/INKMultiTextManagerState.h>

@class UITextView;

@interface EditState : INKMultiTextManagerState
{
    id _undoObserver;
    id _redoObserver;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)willExitState;
- (void)didEnterState;
- (id)queryToolUp:(struct CGPoint)arg1 down:(struct CGPoint)arg2 withQueryItems:(const vector_46416846 *)arg3;
- (id)initWithTextView:(id)arg1 inManager:(id)arg2;

@end

