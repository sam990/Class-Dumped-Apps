//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ImageTransitionDelegate-Protocol.h>

@class NSString, T1PrepopulatedSlideshowDataSource;

@interface T1CardSlideshowPresenter : NSObject <T1ImageTransitionDelegate>
{
    T1PrepopulatedSlideshowDataSource *_dataSource;
}

@property(retain, nonatomic) T1PrepopulatedSlideshowDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (void)presentSlideshowControllerForVideoInStatusViewModel:(id)arg1 presentingController:(id)arg2 context:(id)arg3;
- (void)presentSlideshowControllerForPreviewImages:(id)arg1 imageViews:(id)arg2 imageSpecs:(id)arg3 selectedIndex:(long long)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

