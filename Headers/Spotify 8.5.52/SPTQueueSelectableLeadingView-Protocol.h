//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTQueueSelectableLeadingViewDelegate, SPTQueueTrack;

@protocol SPTQueueSelectableLeadingView <NSObject>
@property(nonatomic, getter=isDragging) _Bool dragging;
@property(nonatomic, getter=isTrackSelected) _Bool trackSelected;
@property(retain, nonatomic) id <SPTQueueTrack> track;
@property(nonatomic) __weak id <SPTQueueSelectableLeadingViewDelegate> delegate;
@end

