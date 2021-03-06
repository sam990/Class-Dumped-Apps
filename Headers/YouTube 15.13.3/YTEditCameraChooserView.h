//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YTEditCameraChooserButton;

@interface YTEditCameraChooserView : UIView
{
    UIView *_separatorView;
    UIView *_bottomBorderView;
    _Bool _liveEnabled;
    _Bool _active;
    YTEditCameraChooserButton *_cameraButton;
    YTEditCameraChooserButton *_liveCreationButton;
    double _marginBottom;
}

@property(nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isLiveEnabled) _Bool liveEnabled; // @synthesize liveEnabled=_liveEnabled;
@property(readonly, nonatomic) YTEditCameraChooserButton *liveCreationButton; // @synthesize liveCreationButton=_liveCreationButton;
@property(readonly, nonatomic) YTEditCameraChooserButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

