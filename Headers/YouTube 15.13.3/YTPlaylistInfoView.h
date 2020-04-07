//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UIView, YTFormattedStringLabel;
@protocol YTPageStyleProvider;

@interface YTPlaylistInfoView : UIScrollView <YTPageStyling, YTPageStyleProvider>
{
    YTFormattedStringLabel *_label;
    UIView *_labelContainer;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (void)layoutSubviews;
- (id)initWithDescription:(id)arg1 stringLabelDelegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
