//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCCameraViewConfiguration, SCCameraViewContaining, SCCaptureWorkflow, SCCaptureWorkflowResultDelegate, SCLensCameraScreenDataProviderProtocol;

@protocol SCCaptureLauncher <NSObject>
- (id <SCCaptureWorkflow>)launchCaptureWithCameraFeatureProvider:(struct SCFeatureProvider *)arg1 cameraViewConfigurationController:(id <SCCameraViewConfiguration>)arg2 cameraViewContainer:(id <SCCameraViewContaining>)arg3 captureWorkflowResultDelegate:(id <SCCaptureWorkflowResultDelegate>)arg4 lensDataProvider:(id <SCLensCameraScreenDataProviderProtocol>)arg5;
@end
