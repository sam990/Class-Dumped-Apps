//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol YTGLSphericalControl <NSObject>
- (void)handlePanEnded;
- (void)handlePanChangedWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)handlePanBegan;
- (void)updateWithDevicePitch:(float)arg1 deviceYaw:(float)arg2 deviceRoll:(float)arg3 isPartialSpherical:(_Bool)arg4;
- (void)calibrateFrontAndCenterWithDevicePitch:(float)arg1 deviceYaw:(float)arg2;
- (float)getRoll;
- (float)getYaw;
- (float)getPitch;
- (void)onVideoStart;
- (void)setCameraHorizontalFieldOfView:(float)arg1 verticalFieldOfView:(float)arg2;
@end
