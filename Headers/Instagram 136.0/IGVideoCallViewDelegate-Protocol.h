//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGVideoCallView, UIPanGestureRecognizer;

@protocol IGVideoCallViewDelegate <NSObject>
- (void)videoCallViewDidBeginPanUp:(IGVideoCallView *)arg1 withGestureRecognizer:(UIPanGestureRecognizer *)arg2;
- (void)videoCallViewDidSwipeDown:(IGVideoCallView *)arg1;
- (void)videoCallViewDidDoubleTap:(IGVideoCallView *)arg1;
- (void)videoCallViewDidSingleTap:(IGVideoCallView *)arg1;
@end

