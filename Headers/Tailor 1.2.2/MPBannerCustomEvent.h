//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MPBannerCustomEventDelegate;

@interface MPBannerCustomEvent : NSObject
{
    id <MPBannerCustomEventDelegate> delegate;
}

@property(nonatomic) __weak id <MPBannerCustomEventDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)enableAutomaticImpressionAndClickTracking;
- (void)didDisplayAd;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2;
- (void)startViewabilityTracker;
- (void)trackMPXAndThirdPartyImpressions;

@end
