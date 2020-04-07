//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <TFNUI/UIGestureRecognizerDelegate-Protocol.h>
#import <TFNUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSMutableAttributedString, NSString, TFNTouchDownGestureRecognizer, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TFSActiveTextRange;

@interface TFNRichTextView : UITextView <UIGestureRecognizerDelegate, UITextViewDelegate>
{
    NSArray *_activeRanges;
    UIColor *_selectionColor;
    CDUnknownBlockType _didTapActiveRange;
    CDUnknownBlockType _didLongPressActiveRange;
    CDUnknownBlockType _didCopySelectedText;
    CDUnknownBlockType _didSearchSelectedText;
    CDUnknownBlockType _didMuteSelectedText;
    CDUnknownBlockType _didUpdateSelectedActiveRange;
    TFNTouchDownGestureRecognizer *_touchDownGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <TFSActiveTextRange> _selectedActiveRange;
    NSMutableAttributedString *_shadowAttributedText;
    NSArray *_axElements;
}

@property(retain, nonatomic) NSArray *axElements; // @synthesize axElements=_axElements;
@property(retain, nonatomic) NSMutableAttributedString *shadowAttributedText; // @synthesize shadowAttributedText=_shadowAttributedText;
@property(retain, nonatomic) id <TFSActiveTextRange> selectedActiveRange; // @synthesize selectedActiveRange=_selectedActiveRange;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer; // @synthesize touchDownGestureRecognizer=_touchDownGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType didUpdateSelectedActiveRange; // @synthesize didUpdateSelectedActiveRange=_didUpdateSelectedActiveRange;
@property(copy, nonatomic) CDUnknownBlockType didMuteSelectedText; // @synthesize didMuteSelectedText=_didMuteSelectedText;
@property(copy, nonatomic) CDUnknownBlockType didSearchSelectedText; // @synthesize didSearchSelectedText=_didSearchSelectedText;
@property(copy, nonatomic) CDUnknownBlockType didCopySelectedText; // @synthesize didCopySelectedText=_didCopySelectedText;
@property(copy, nonatomic) CDUnknownBlockType didLongPressActiveRange; // @synthesize didLongPressActiveRange=_didLongPressActiveRange;
@property(copy, nonatomic) CDUnknownBlockType didTapActiveRange; // @synthesize didTapActiveRange=_didTapActiveRange;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(copy, nonatomic) NSArray *activeRanges; // @synthesize activeRanges=_activeRanges;
- (void).cxx_destruct;
- (void)tfn_unhighlightTextAtRange:(struct _NSRange)arg1;
- (void)tfn_highlightTextAtRange:(struct _NSRange)arg1;
- (struct CGRect)tfn_boundingRectForCharacterRange:(struct _NSRange)arg1 outFirstRect:(struct CGRect *)arg2;
- (id)tfn_hitTestRanges:(id)arg1 forPoint:(struct CGPoint)arg2;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (struct CGRect)_tfn_accesibilityFrameForCharacterRange:(struct _NSRange)arg1 outActivationPoint:(struct CGPoint *)arg2;
- (struct CGRect)_tfn_accessibilityFrameForFullText;
- (void)_tfn_createAccessibilityElementsIfNeeded;
- (id)tfn_rectsForRange:(struct _NSRange)arg1;
- (id)_tfn_activeRangeAtPoint:(struct CGPoint)arg1 inRanges:(id)arg2;
- (id)_tfn_activeRangeForTouch:(id)arg1;
- (void)_tfn_updateAttributedText;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)_tfn_mute:(id)arg1;
- (void)_tfn_search:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_tfn_longPressAction:(id)arg1;
- (void)_tfn_tapAction:(id)arg1;
- (void)_tfn_touchDownAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
