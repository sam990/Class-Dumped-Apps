//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIView, YTEditTextStickerView;

@protocol YTEditStickerOverlayDelegate <NSObject>
- (void)takeAndEditTextSticker:(YTEditTextStickerView *)arg1;
- (void)didSwipeWithDirection:(unsigned long long)arg1;
- (void)didTap;
- (void)didDeleteSticker;
- (void)didFocusOnActiveView:(UIView *)arg1;
@end
