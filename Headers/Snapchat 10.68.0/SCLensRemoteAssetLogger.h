//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensRemoteAssetLoggerProtocol-Protocol.h"

@class NSString;
@protocol SCGraphene;

@interface SCLensRemoteAssetLogger : NSObject <SCLensRemoteAssetLoggerProtocol>
{
    id <SCGraphene> _graphene;
}

+ (unsigned long long)_sizeInKB:(unsigned long long)arg1;
+ (id)_assetTypeToString:(long long)arg1;
- (void).cxx_destruct;
- (void)assetLensResourceLookupFinishedWithDuration:(double)arg1 success:(_Bool)arg2 type:(long long)arg3;
- (void)assetUploadFinishedWithDuration:(double)arg1 assetSize:(unsigned long long)arg2 type:(long long)arg3;
- (void)assetUploadStarted;
- (void)assetDownloadFinishedWithDuration:(double)arg1 assetSize:(unsigned long long)arg2 type:(long long)arg3 source:(unsigned long long)arg4;
- (void)assetDownloadStartedWithType:(long long)arg1;
- (id)initWithGraphene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
