//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGAnnotationOriginator, UIImage;

@interface IBGAnnotationViewFactory : NSObject
{
    IBGAnnotationOriginator *_annotationOriginator;
    UIImage *_bluredScreenshotImage;
    long long _numberOfCreatedAnnotationViews;
    struct CGSize _screenshotSize;
}

@property(nonatomic) long long numberOfCreatedAnnotationViews; // @synthesize numberOfCreatedAnnotationViews=_numberOfCreatedAnnotationViews;
@property(retain, nonatomic) UIImage *bluredScreenshotImage; // @synthesize bluredScreenshotImage=_bluredScreenshotImage;
@property(retain, nonatomic) IBGAnnotationOriginator *annotationOriginator; // @synthesize annotationOriginator=_annotationOriginator;
@property(nonatomic) struct CGSize screenshotSize; // @synthesize screenshotSize=_screenshotSize;
- (void).cxx_destruct;
- (void)setAccessibilityIdentifier:(id)arg1 annotationView:(id)arg2;
- (id)annotationViewWithFrame:(struct CGRect)arg1 type:(long long)arg2 annotatingColor:(id)arg3 angle:(double)arg4;
- (id)initWithAnnotationOriginator:(id)arg1 screenshotSize:(struct CGSize)arg2;

@end

