//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDCCollectionInfoBarView;

@protocol MDCCollectionInfoBarViewDelegate <NSObject>
- (void)updateControllerWithInfoBar:(MDCCollectionInfoBarView *)arg1;

@optional
- (void)infoBar:(MDCCollectionInfoBarView *)arg1 didDismissAnimated:(_Bool)arg2 didAutoDismiss:(_Bool)arg3;
- (void)infoBar:(MDCCollectionInfoBarView *)arg1 willDismissAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)infoBar:(MDCCollectionInfoBarView *)arg1 didShowAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)infoBar:(MDCCollectionInfoBarView *)arg1 willShowAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)didTapInfoBar:(MDCCollectionInfoBarView *)arg1;
@end

