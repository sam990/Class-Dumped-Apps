//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTSEffectIntensity : NSObject
{
    float _intensity;
    float _smoothIntensity;
    float _whiteIntensity;
    float _sharpIntensity;
    float _eyeIntensity;
    float _cheekIntensity;
    float _skinDarkIntensity;
    float _nightGamma;
    float _nightContrastK;
    float _nightContrastB;
    float _lipIntensity;
    float _blusherIntensity;
}

+ (struct IESIndensityParam_t)paramFromIntensity:(id)arg1;
+ (id)intensityWithParam:(struct IESIndensityParam_t)arg1;
@property(nonatomic) float blusherIntensity; // @synthesize blusherIntensity=_blusherIntensity;
@property(nonatomic) float lipIntensity; // @synthesize lipIntensity=_lipIntensity;
@property(nonatomic) float nightContrastB; // @synthesize nightContrastB=_nightContrastB;
@property(nonatomic) float nightContrastK; // @synthesize nightContrastK=_nightContrastK;
@property(nonatomic) float nightGamma; // @synthesize nightGamma=_nightGamma;
@property(nonatomic) float skinDarkIntensity; // @synthesize skinDarkIntensity=_skinDarkIntensity;
@property(nonatomic) float cheekIntensity; // @synthesize cheekIntensity=_cheekIntensity;
@property(nonatomic) float eyeIntensity; // @synthesize eyeIntensity=_eyeIntensity;
@property(nonatomic) float sharpIntensity; // @synthesize sharpIntensity=_sharpIntensity;
@property(nonatomic) float whiteIntensity; // @synthesize whiteIntensity=_whiteIntensity;
@property(nonatomic) float smoothIntensity; // @synthesize smoothIntensity=_smoothIntensity;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
- (_Bool)isEqualValueWithAnother:(id)arg1 forType:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

