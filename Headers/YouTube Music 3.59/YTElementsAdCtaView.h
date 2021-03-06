//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTInstreamAdCtaViewProtocol-Protocol.h"

@class GIMMe, GPBMessage, NSString, YTICommand;

@interface YTElementsAdCtaView : UIView <YTInstreamAdCtaViewProtocol>
{
    int _currentState;
    GPBMessage *_ctaClickTargetRenderer;
    YTICommand *_ctaClickTargetCommand;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) int state; // @synthesize state=_currentState;
@property(readonly, nonatomic) YTICommand *ctaClickTargetCommand; // @synthesize ctaClickTargetCommand=_ctaClickTargetCommand;
@property(readonly, nonatomic) GPBMessage *ctaClickTargetRenderer; // @synthesize ctaClickTargetRenderer=_ctaClickTargetRenderer;
- (void).cxx_destruct;
- (void)populateViewFromRenderer:(id)arg1;
- (void)addUserDidTapCallToActionTarget:(id)arg1 action:(SEL)arg2;
- (void)visualStateDidChangeToState:(int)arg1 animate:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

