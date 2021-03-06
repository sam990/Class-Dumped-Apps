//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESlidingViewControllerDelegate-Protocol.h"

@class AWERecordTutorialCollectionViewController, AWESlidingTabbarView, AWESlidingViewController, NSString, UIView;
@protocol AWEStudioRecordTutorialComponentProtocol;

@interface AWERecordTutorialViewController : UIViewController <AWESlidingViewControllerDelegate>
{
    id <AWEStudioRecordTutorialComponentProtocol> _component;
    CDUnknownBlockType _closeBlock;
    AWERecordTutorialCollectionViewController *_basicTutorialViewController;
    AWERecordTutorialCollectionViewController *_hotTutorialViewController;
    AWESlidingTabbarView *_slidingTabView;
    AWESlidingViewController *_slidingViewController;
    long long _currentSelectedIndex;
}

@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) AWESlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWESlidingTabbarView *slidingTabView; // @synthesize slidingTabView=_slidingTabView;
@property(retain, nonatomic) AWERecordTutorialCollectionViewController *hotTutorialViewController; // @synthesize hotTutorialViewController=_hotTutorialViewController;
@property(retain, nonatomic) AWERecordTutorialCollectionViewController *basicTutorialViewController; // @synthesize basicTutorialViewController=_basicTutorialViewController;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) __weak id <AWEStudioRecordTutorialComponentProtocol> component; // @synthesize component=_component;
- (void).cxx_destruct;
- (unsigned long long)currentSelectIndex;
@property(readonly, nonatomic) UIView *contentView;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (void)p_closeButtonPressed:(id)arg1;
- (void)p_trackSwitchTabWithIndex:(long long)arg1;
- (void)p_repeatTapIndex:(long long)arg1;
- (long long)p_initialSelectIndex;
- (id)p_backgroundColor;
- (void)addNavigationView;
- (void)setupUI;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

