//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEStudioConfig : NSObject
{
    double _reshapeLevelMax;
    double _reshapeLevelDefault;
    double _smoothLevelMax;
    double _smoothLevelDefault;
    double _faceLiftValueMax;
    double _faceLiftValueDefault;
    double _bigEyeValueMax;
    double _bigEyeValueDefault;
    double _lipstickValueMax;
    double _lipstickValueDefault;
    double _blusherValueMax;
    double _blusherValueDefault;
    double _sharpenValueMax;
    double _sharpenValueDefault;
    long long _videoLenthMode;
}

+ (long long)publishMaxTitleLength;
+ (id)defaultConfig;
@property(nonatomic) long long videoLenthMode; // @synthesize videoLenthMode=_videoLenthMode;
@property(nonatomic) double sharpenValueDefault; // @synthesize sharpenValueDefault=_sharpenValueDefault;
@property(nonatomic) double sharpenValueMax; // @synthesize sharpenValueMax=_sharpenValueMax;
@property(nonatomic) double blusherValueDefault; // @synthesize blusherValueDefault=_blusherValueDefault;
@property(nonatomic) double blusherValueMax; // @synthesize blusherValueMax=_blusherValueMax;
@property(nonatomic) double lipstickValueDefault; // @synthesize lipstickValueDefault=_lipstickValueDefault;
@property(nonatomic) double lipstickValueMax; // @synthesize lipstickValueMax=_lipstickValueMax;
@property(nonatomic) double bigEyeValueDefault; // @synthesize bigEyeValueDefault=_bigEyeValueDefault;
@property(nonatomic) double bigEyeValueMax; // @synthesize bigEyeValueMax=_bigEyeValueMax;
@property(nonatomic) double faceLiftValueDefault; // @synthesize faceLiftValueDefault=_faceLiftValueDefault;
@property(nonatomic) double faceLiftValueMax; // @synthesize faceLiftValueMax=_faceLiftValueMax;
@property(nonatomic) double smoothLevelDefault; // @synthesize smoothLevelDefault=_smoothLevelDefault;
@property(nonatomic) double smoothLevelMax; // @synthesize smoothLevelMax=_smoothLevelMax;
@property(nonatomic) double reshapeLevelDefault; // @synthesize reshapeLevelDefault=_reshapeLevelDefault;
@property(nonatomic) double reshapeLevelMax; // @synthesize reshapeLevelMax=_reshapeLevelMax;
- (_Bool)showTitleInVideoCameraBottomView;
- (_Bool)enableUploadClientBOE;
- (_Bool)shouldRememberDurationSelect;
- (_Bool)enablePhotoHashTag;
- (_Bool)enableLongDurationRecordAsTab;
- (long long)currentVideoLenthMode;
- (void)updateCurrentVideoLenthMode:(long long)arg1;
- (id)init;

@end
