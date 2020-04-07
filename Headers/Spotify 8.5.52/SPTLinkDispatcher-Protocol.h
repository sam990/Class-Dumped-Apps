//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTLinkDispatcher <NSObject>
- (void)navigateToURI:(NSURL *)arg1 options:(long long)arg2 interactionID:(NSString *)arg3;
- (void)navigateToURI:(NSURL *)arg1 sourceApplication:(NSString *)arg2 annotation:(id)arg3 options:(long long)arg4 interactionID:(NSString *)arg5 completionHandler:(void (^)(_Bool))arg6;
- (_Bool)canOpenURI:(NSURL *)arg1 allowExternalApps:(_Bool)arg2;
@end
