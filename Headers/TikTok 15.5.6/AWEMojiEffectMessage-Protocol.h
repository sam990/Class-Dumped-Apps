//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEMemojiModel, NSError, NSString;

@protocol AWEMojiEffectMessage <NSObject>
- (void)mojiResourceLoadForEffectMD5:(NSString *)arg1 completionHandler:(void (^)(void (^)(AWEMojiScanTask *, NSError *, AWEMemojiModel *)))arg2;
- (void)mojiResourceWillApplyForEffectMD5:(NSString *)arg1 completionHandler:(void (^)(void (^)(AWEMojiScanTask *, NSError *, AWEMemojiModel *)))arg2;

@optional
- (void)didFinishDownloadNewResourcesProcessWithMoji:(AWEMemojiModel *)arg1 error:(NSError *)arg2;
@end

