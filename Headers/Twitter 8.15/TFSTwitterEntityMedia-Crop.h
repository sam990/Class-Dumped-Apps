//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterEntityMedia.h>

@interface TFSTwitterEntityMedia (Crop)
+ (struct CGRect)clipWithViewAspect:(double)arg1 imageAspect:(double)arg2 crop:(id)arg3;
+ (double)intersectionOverUnionWithViewAspect:(double)arg1 imageAspect:(double)arg2 crop:(id)arg3;
+ (id)selectCropForFocusRects:(id)arg1 viewAspect:(double)arg2 imageAspect:(double)arg3;
+ (struct CGRect)cropImageDimensions:(struct CGSize)arg1 focusRects:(id)arg2 viewDimensions:(struct CGSize)arg3;
- (struct CGRect)cropWithViewDimensions:(struct CGSize)arg1;
@end
