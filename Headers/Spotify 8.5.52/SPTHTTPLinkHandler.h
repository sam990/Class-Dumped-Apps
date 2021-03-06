//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTSpotifyLinkHandler;
@protocol SPTExternalLinkControllerCampaignDelegate;

@interface SPTHTTPLinkHandler : NSObject
{
    SPTSpotifyLinkHandler *_spotifyLinkHandler;
    id <SPTExternalLinkControllerCampaignDelegate> _campaignDelegate;
}

@property(nonatomic) __weak id <SPTExternalLinkControllerCampaignDelegate> campaignDelegate; // @synthesize campaignDelegate=_campaignDelegate;
@property(retain, nonatomic) SPTSpotifyLinkHandler *spotifyLinkHandler; // @synthesize spotifyLinkHandler=_spotifyLinkHandler;
- (void).cxx_destruct;
- (long long)handleHTTPURI:(id)arg1 context:(id)arg2;
- (_Bool)canHandleHTTPURI:(id)arg1;
- (id)initWithSpotifyLinkHandler:(id)arg1 campaignDelegate:(id)arg2;

@end

