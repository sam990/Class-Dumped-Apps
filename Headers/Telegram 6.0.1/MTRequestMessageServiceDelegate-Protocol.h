//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramCore/NSObject-Protocol.h>

@class MTRequestMessageService;

@protocol MTRequestMessageServiceDelegate <NSObject>

@optional
- (void)requestMessageServiceDidCompleteAllRequests:(MTRequestMessageService *)arg1;
- (void)requestMessageServiceAuthorizationRequired:(MTRequestMessageService *)arg1;
@end

