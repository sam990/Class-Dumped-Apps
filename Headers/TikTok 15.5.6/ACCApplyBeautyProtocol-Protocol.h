//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ACCApplyBeautyProtocol <NSObject>
@property(nonatomic) _Bool acc_maleDetected;
@property(nonatomic) _Bool forceApply;
- (void)acc_applySharpenValue:(float)arg1;
- (void)acc_applyBlusherValue:(float)arg1;
- (void)acc_applyLipValue:(float)arg1;
- (void)acc_applyBigEyeValue:(float)arg1 strategy:(unsigned long long)arg2;
- (void)acc_applyBigEyeValue:(float)arg1;
- (void)acc_applyFaceLiftValue:(float)arg1 strategy:(unsigned long long)arg2;
- (void)acc_applyFaceLiftValue:(float)arg1;
- (void)acc_applySmoothWithValue:(float)arg1;
- (float)acc_sharpenIndensity;
- (float)acc_blusherIndensity;
- (float)acc_lipIndensity;
- (float)acc_bigEyeIndensity;
- (float)acc_faceLiftIndensity;
- (float)acc_smoothIndensity;
@end

