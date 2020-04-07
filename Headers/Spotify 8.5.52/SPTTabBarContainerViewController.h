//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTTabBarContainer-Protocol.h"

@class NSArray, NSString, SPTStatusBarToken, SPTTabBarContainerLayout, SPTTheme, UIView;
@protocol SPTTabBar, SPTTabBarControllerProtocol><SPContentInsetViewController;

@interface SPTTabBarContainerViewController : UIViewController <SPTTabBarContainer>
{
    struct UIViewController *_tabBarController;
    SPTTabBarContainerLayout *_containerLayout;
    SPTTheme *_theme;
    SPTStatusBarToken *_statusBarToken;
}

@property(retain, nonatomic) SPTStatusBarToken *statusBarToken; // @synthesize statusBarToken=_statusBarToken;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTTabBarContainerLayout *containerLayout; // @synthesize containerLayout=_containerLayout;
@property(readonly, nonatomic) UIViewController<SPTTabBarControllerProtocol><SPContentInsetViewController> *tabBarController; // @synthesize tabBarController=_tabBarController;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentTabBarItems;
@property(copy, nonatomic) CDUnknownBlockType visibleStateCallback;
- (void)sp_updateContentInsets;
- (id)createDummyHeaderView;
- (void)setContentHeaderView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIView *contentHeaderView;
@property(nonatomic) __weak UIViewController *selectedViewController;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setSelectedViewController:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
@property(nonatomic) unsigned long long selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView<SPTTabBar> *spt_tabBar;
- (void)addFixedConstraints;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithTabBarController:(struct UIViewController *)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
