//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCContextV2Session, UIView, UIViewController;
@protocol SCContextMessagingController, SCSizeChangeAnnouncingView;

@protocol SCContextV2ChatPresenting <NSObject>
- (id <SCContextMessagingController>)createContextMessagingControllerWithParentViewController:(UIViewController *)arg1 withViewAboveKeyboard:(UIView<SCSizeChangeAnnouncingView> *)arg2 options:(unsigned long long)arg3 contextSession:(SCContextV2Session *)arg4;
@end
