//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ArgoCore/CSLogMetricViewDelegateProtocol-Protocol.h>
#import <ArgoCore/UIGestureRecognizerDelegate-Protocol.h>
#import <ArgoCore/UIScrollViewDelegate-Protocol.h>

@class CAShapeLayer, CSLogMetricContextView, NSArray, NSString, UIColor, UIScrollView;
@protocol CSLogMetricViewDelegateProtocol;

@interface CSLogMetricView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, CSLogMetricViewDelegateProtocol>
{
    _Bool reloading;
    _Bool thresholdCrossed;
    NSArray *_metrics;
    id <CSLogMetricViewDelegateProtocol> _delegate;
    UIScrollView *_scrollView;
    CSLogMetricContextView *_enlargedView;
    UIView *_refreshView;
    CAShapeLayer *_refreshLayer;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) __weak CAShapeLayer *refreshLayer; // @synthesize refreshLayer=_refreshLayer;
@property(nonatomic) __weak UIView *refreshView; // @synthesize refreshView=_refreshView;
@property(nonatomic) __weak CSLogMetricContextView *enlargedView; // @synthesize enlargedView=_enlargedView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <CSLogMetricViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (void)exploreMetric:(id)arg1;
- (void)refreshForMetric:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)resetContextViews;
- (void)dropView:(id)arg1;
- (id)viewAnimationWithKeyPath:(id)arg1;
- (void)enlargeView:(id)arg1 tranform:(struct CATransform3D)arg2;
- (void)enlargeView:(id)arg1;
- (void)metricViewPanned:(id)arg1;
- (void)metricViewTapped:(id)arg1;
- (id)metricsViewForMetric:(id)arg1;
- (void)reloadViewsAndScrollToBottom:(_Bool)arg1;
- (void)scrollTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

