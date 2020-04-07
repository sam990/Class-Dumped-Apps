//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTResponder-Protocol.h"

@class NSArray, NSMutableArray, NSString, YTICompactMultiOfferRenderer_OfferRow, YTViewGroup;
@protocol YTInteractionLoggingButtonDelegate, YTResponder;

@interface YTMoviesAndShowsOfferRowView : UIView <YTResponder>
{
    id <YTResponder> _parentResponder;
    YTICompactMultiOfferRenderer_OfferRow *_renderer;
    NSArray *_visibleRenderers;
    id <YTInteractionLoggingButtonDelegate> _interactionLoggingDelegate;
    YTViewGroup *_buttonViews;
    NSMutableArray *_offerButtons;
}

@property(retain, nonatomic) NSMutableArray *offerButtons; // @synthesize offerButtons=_offerButtons;
@property(retain, nonatomic) YTViewGroup *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(nonatomic) __weak id <YTInteractionLoggingButtonDelegate> interactionLoggingDelegate; // @synthesize interactionLoggingDelegate=_interactionLoggingDelegate;
@property(readonly, nonatomic) NSArray *visibleRenderers; // @synthesize visibleRenderers=_visibleRenderers;
@property(retain, nonatomic) YTICompactMultiOfferRenderer_OfferRow *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didTapOffer:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
