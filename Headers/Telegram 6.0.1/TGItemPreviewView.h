//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TGItemPreviewView : UIView
{
    _Bool _disappearing;
    _Bool _eccentric;
    _Bool _isLocked;
    UIView *_dimView;
    UIView *_wrapperView;
    CDUnknownBlockType _sourcePointForItem;
    CDUnknownBlockType _onDismiss;
    CDUnknownBlockType _willDismiss;
    id _item;
    struct UIEdgeInsets _safeAreaInset;
}

@property(nonatomic) struct UIEdgeInsets safeAreaInset; // @synthesize safeAreaInset=_safeAreaInset;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) _Bool eccentric; // @synthesize eccentric=_eccentric;
@property(copy, nonatomic) CDUnknownBlockType willDismiss; // @synthesize willDismiss=_willDismiss;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(copy, nonatomic) CDUnknownBlockType sourcePointForItem; // @synthesize sourcePointForItem=_sourcePointForItem;
@property(readonly, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(readonly, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)_maybeLockWithVelocity:(double)arg1;
- (void)_handlePressEnded;
- (void)_handlePanOffset:(double)arg1;
- (struct CGPoint)_wrapperViewContainerCenter;
- (void)_willDisappear;
- (void)_didAppear;
- (void)animateDismiss:(CDUnknownBlockType)arg1;
- (void)animateAppear;
- (id)initWithFrame:(struct CGRect)arg1;

@end

