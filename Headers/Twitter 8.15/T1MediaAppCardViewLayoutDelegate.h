//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutDelegate.h>

#import <T1Twitter/T1EmbeddedCarouselLayoutDelegate-Protocol.h>

@class NSString;

@interface T1MediaAppCardViewLayoutDelegate : T1CardViewLayoutDelegate <T1EmbeddedCarouselLayoutDelegate>
{
}

+ (id)viewModelWithCardContext:(id)arg1;
+ (id)sharedLayoutDelegate;
- (struct CGSize)targetImageSizeForViewModel:(id)arg1 cardWidth:(double)arg2;
- (void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2;
- (id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
