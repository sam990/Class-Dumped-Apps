//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBPassthroughView.h"

#import "DBCommentsObserver-Protocol.h"

@class DBObserverHandle, NSMutableDictionary;
@protocol DBCommentAnnotationsOverlayViewDelegate, DBCommentsObservable;

@interface DBCommentAnnotationsOverlayView : DBPassthroughView <DBCommentsObserver>
{
    NSMutableDictionary *_annotationViewsByCommentActivityKey;
    DBObserverHandle *_commentsObserver;
    id <DBCommentAnnotationsOverlayViewDelegate> _delegate;
    id <DBCommentsObservable> _commentsObservable;
    CDUnknownBlockType _didTapAnnotationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didTapAnnotationHandler; // @synthesize didTapAnnotationHandler=_didTapAnnotationHandler;
@property(retain, nonatomic) id <DBCommentsObservable> commentsObservable; // @synthesize commentsObservable=_commentsObservable;
@property(nonatomic) __weak id <DBCommentAnnotationsOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdateCommentsStateWithObservable:(id)arg1 count:(unsigned long long)arg2 subscribed:(_Bool)arg3 locked:(_Bool)arg4 annotationCommentsAllowed:(_Bool)arg5;
- (id)createAnnotationViewsForComment:(id)arg1;
- (_Bool)supportsViewingAnnotation:(id)arg1;
- (struct CGPoint)convertAnnotationCoordinateToOverlayPoint:(id)arg1;
- (void)animateAnnotationForComment:(id)arg1;
- (void)db_didTapAnnotationView:(id)arg1;
- (void)db_updateCommentAnnotationOverlays:(id)arg1;
- (void)db_handleCommentsUpdate:(id)arg1;
- (void)db_updateCommentsObserverForCurrentObservable;
- (void)layoutSubviews;
- (id)annotationAtPoint:(struct CGPoint)arg1;
- (id)displayRectForAnnotation:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

