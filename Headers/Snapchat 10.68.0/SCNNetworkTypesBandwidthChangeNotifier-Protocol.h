//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCNNetworkTypesBandwidthChangeListener;

@protocol SCNNetworkTypesBandwidthChangeNotifier
- (long long)registerUploadListener:(SCNNetworkTypesBandwidthChangeListener *)arg1;
- (long long)registerDownloadListener:(SCNNetworkTypesBandwidthChangeListener *)arg1;
- (void)notifyUploadListeners:(long long)arg1;
- (void)notifyDownloadListeners:(long long)arg1;
@end
