//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1NewsCameraCaptureCameraModeEditViewController, T1NewsCameraComposition;

@protocol T1NewsCameraCaptureCameraModeEditViewControllerDelegate <NSObject>
- (void)newsCameraCaptureCameraModeEditViewController:(T1NewsCameraCaptureCameraModeEditViewController *)arg1 requestsUpdateCurrentLocationWithCompletion:(void (^)(_Bool))arg2;

@optional
- (void)newsCameraCaptureCameraModeEditViewController:(T1NewsCameraCaptureCameraModeEditViewController *)arg1 didSendNewsCameraComposition:(T1NewsCameraComposition *)arg2;
- (void)newsCameraCaptureCameraModeEditViewControllerDidCancel:(T1NewsCameraCaptureCameraModeEditViewController *)arg1;
@end

