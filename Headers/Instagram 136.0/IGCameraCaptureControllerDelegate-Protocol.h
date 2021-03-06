//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGCameraCaptureController, IGStoryBoomerangManager, NSArray, NSError;
@protocol IGQuickCamInputAsset;

@protocol IGCameraCaptureControllerDelegate <NSObject>
- (void)cameraCaptureController:(IGCameraCaptureController *)arg1 startAudioSessionDidError:(NSError *)arg2;
- (void)cameraCaptureControllerDidStopRecording:(IGCameraCaptureController *)arg1;
- (void)cameraCaptureControllerWillStopRecording:(IGCameraCaptureController *)arg1;
- (void)cameraCaptureControllerDidStartRecording:(IGCameraCaptureController *)arg1;
- (void)cameraCaptureControllerFailedToCapturePhoto:(IGCameraCaptureController *)arg1;
- (void)cameraCaptureControllerSuccessfullyCapturedPhoto:(IGCameraCaptureController *)arg1;
- (void)cameraCaptureController:(IGCameraCaptureController *)arg1 didFinishWithInputAssets:(NSArray *)arg2;
- (void)cameraCaptureController:(IGCameraCaptureController *)arg1 didFinishWithInputAsset:(id <IGQuickCamInputAsset>)arg2;
- (void)cameraCaptureController:(IGCameraCaptureController *)arg1 didFinishWithBoomerangManager:(IGStoryBoomerangManager *)arg2;
- (void)cameraCaptureController:(IGCameraCaptureController *)arg1 didUpdateRecordProgress:(double)arg2;
@end

