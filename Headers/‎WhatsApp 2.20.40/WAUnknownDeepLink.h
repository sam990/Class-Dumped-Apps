//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADeepLink.h"

@class NSURL;

@interface WAUnknownDeepLink : WADeepLink
{
    NSURL *_url;
}

- (void).cxx_destruct;
- (_Bool)consumerAppCanOpenURL;
- (_Bool)smbAppCanOpenURL;
- (void)handleDeepLinkOpenRequestWithError:(id)arg1 stanza:(id)arg2 rootVC:(id)arg3;
- (void)openURLWithRootVC:(id)arg1;
- (_Bool)parseURL:(id)arg1 sourceApplication:(id)arg2;

@end

