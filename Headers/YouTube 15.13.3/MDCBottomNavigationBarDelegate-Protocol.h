//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/UINavigationBarDelegate-Protocol.h>

@class MDCBottomNavigationBar, UITabBarItem;

@protocol MDCBottomNavigationBarDelegate <UINavigationBarDelegate>

@optional
- (void)bottomNavigationBar:(MDCBottomNavigationBar *)arg1 didSelectItem:(UITabBarItem *)arg2;
- (_Bool)bottomNavigationBar:(MDCBottomNavigationBar *)arg1 shouldSelectItem:(UITabBarItem *)arg2;
@end

