//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAd, GADNExpandActionMonitorConfiguration, GADNFullScreenAdViewController, GADNObserverCollection, GADNWebAdView;
@protocol GADNEventContextSource;

@interface GADNExpandActionMonitor : NSObject
{
    GADNAd *_ad;
    id <GADNEventContextSource> _messageSource;
    GADNWebAdView *_adView;
    GADNObserverCollection *_observers;
    GADNFullScreenAdViewController *_expandableViewController;
    GADNObserverCollection *_expandableObservers;
    GADNExpandActionMonitorConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)handleTwoPartExpandAction:(id)arg1;
- (void)handleOnePartExpandAction:(id)arg1;
- (_Bool)createAndPresentExpandable:(id)arg1 context:(id)arg2 notification:(id)arg3;
- (void)expandDidEnd;
- (_Bool)shouldAllowExpandAction;
- (id)initWithAd:(id)arg1 webAdView:(id)arg2 messageSource:(id)arg3 configuration:(id)arg4;

@end

