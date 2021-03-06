//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashQualitySelecting-Protocol.h>

@class FNFAssetResourceLoader, FNFDashPlaylist, NSString;
@protocol FNFDashQualitySelecting;

@interface FNFDashCacheQualitySelector : NSObject <FNFDashQualitySelecting>
{
    FNFDashPlaylist *_playlist;
    struct FNFDashConfig _config;
    FNFAssetResourceLoader *_resourceLoader;
    id <FNFDashQualitySelecting> _fallbackSelector;
}

- (void).cxx_destruct;
- (id)selectQuality;
- (id)initWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 resourceLoader:(id)arg3 fallbackSelector:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

