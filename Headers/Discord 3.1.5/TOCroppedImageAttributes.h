//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TOCroppedImageAttributes : NSObject
{
    long long _angle;
    struct CGSize _originalImageSize;
    struct CGRect _croppedFrame;
}

@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(nonatomic) struct CGRect croppedFrame; // @synthesize croppedFrame=_croppedFrame;
@property(nonatomic) long long angle; // @synthesize angle=_angle;
- (id)initWithCroppedFrame:(struct CGRect)arg1 angle:(long long)arg2 originalImageSize:(struct CGSize)arg3;

@end
