//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFAutoLayoutViewController.h"

#import "AKFKeyboardObserverDelegate-Protocol.h"

@class AKFKeyboardObserver, NSString, UIScrollView, UIView;

@interface AKFContainerViewController : AKFAutoLayoutViewController <AKFKeyboardObserverDelegate>
{
    UIView *_contentView;
    AKFKeyboardObserver *_keyboardObserver;
    UIScrollView *_scrollView;
    UIView *_actionBarView;
    double _contentMaxWidth;
    double _contentMinHeight;
    UIView *_bottomView;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) double contentMinHeight; // @synthesize contentMinHeight=_contentMinHeight;
@property(nonatomic) double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIView *actionBarView; // @synthesize actionBarView=_actionBarView;
- (void).cxx_destruct;
- (_Bool)_isDismissing;
- (void)_updateActionBarView:(_Bool)arg1;
- (_Bool)_defaultNavigationBarHidden;
- (id)viewForKeyboardObserver:(id)arg1;
- (void)keyboardObserverWillShowKeyboard:(id)arg1;
- (void)keyboardObserverWillHideKeyboard:(id)arg1;
- (id)scrollViewAboveKeyboardConstraint;
- (void)addConstraintsToHorizontallyFillScrollView:(id)arg1;
- (void)addViewConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) UIView *contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
