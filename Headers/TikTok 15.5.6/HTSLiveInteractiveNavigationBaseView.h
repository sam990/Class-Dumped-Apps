//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSLiveInteractiveNavigationContainer, HTSLivePopupNavigationBar;

@interface HTSLiveInteractiveNavigationBaseView : UIView
{
    HTSLivePopupNavigationBar *_navBar;
    HTSLiveInteractiveNavigationContainer *_navigation;
}

@property(nonatomic) __weak HTSLiveInteractiveNavigationContainer *navigation; // @synthesize navigation=_navigation;
@property(nonatomic) __weak HTSLivePopupNavigationBar *navBar; // @synthesize navBar=_navBar;
- (void).cxx_destruct;
- (void)setupNavBar;

@end

