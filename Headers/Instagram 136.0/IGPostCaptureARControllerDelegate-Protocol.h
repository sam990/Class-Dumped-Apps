//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGAREffectModel, IGPostCaptureARController;

@protocol IGPostCaptureARControllerDelegate <NSObject>
- (void)postCaptureControllerWillUnapplyAREffect:(IGPostCaptureARController *)arg1;
- (void)postCaptureController:(IGPostCaptureARController *)arg1 willApplyAREffect:(IGAREffectModel *)arg2;
- (void)postCaptureController:(IGPostCaptureARController *)arg1 didApplyAREffect:(IGAREffectModel *)arg2;
@end

