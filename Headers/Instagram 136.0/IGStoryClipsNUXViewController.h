//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGPageViewControllerDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPageViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryClipsNUXCreatePageViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryClipsNUXExplorePageViewControllerDelegate-Protocol.h>

@class IGPageViewController, IGStoryClipsNUXCreatePageViewController, IGStoryClipsNUXExplorePageViewController, IGTapButton, IGUserSession, NSArray, NSString, UIPageControl, UIView;
@protocol IGStoryClipsNUXViewControllerDelegate;

@interface IGStoryClipsNUXViewController : UIViewController <IGPageViewControllerDelegate, IGPageViewControllerDataSource, IGStoryClipsNUXCreatePageViewControllerDelegate, IGStoryClipsNUXExplorePageViewControllerDelegate>
{
    IGTapButton *_dismissButton;
    IGPageViewController *_pageVC;
    NSArray *_contentViewControllers;
    IGStoryClipsNUXCreatePageViewController *_createPageViewController;
    IGStoryClipsNUXExplorePageViewController *_explorePageViewController;
    IGUserSession *_userSession;
    UIView *_backdropView;
    id <IGStoryClipsNUXViewControllerDelegate> _delegate;
    UIPageControl *_pageControl;
}

@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak id <IGStoryClipsNUXViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didChangePageControl:(id)arg1;
- (void)storyClipsNUXExplorePageViewControllerDidTapGetStartedButton:(id)arg1;
- (void)storyClipsNUXCreatePageViewControllerDidTapNextButton:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(long long)arg3;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

