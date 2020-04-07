//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMNavigationHierarchyController-Protocol.h>

@class ASMHeaderViewController, UIScrollView;
@protocol ASMScrollViewTrackingDelegate;

@protocol ASMHeaderContentViewController <ASMNavigationHierarchyController>
@property(readonly, nonatomic) double topContentOffset;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(nonatomic) __weak id <ASMScrollViewTrackingDelegate> scrollViewTrackingDelegate;
@property(nonatomic) __weak ASMHeaderViewController *headerViewController;

@optional
@property(nonatomic) _Bool headerViewHasBeenInstalled;
@property(readonly, nonatomic) unsigned long long headerElevationBehavior;
@property(readonly, nonatomic) unsigned long long dismissButtonStyle;
@end
