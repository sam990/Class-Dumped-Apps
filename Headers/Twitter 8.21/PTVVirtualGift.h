//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PTVGiftStyle;

@interface PTVVirtualGift : NSObject
{
    NSString *_remoteID;
    long long _coin_amount;
    NSString *_giftStyleID;
    PTVGiftStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVGiftStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *giftStyleID; // @synthesize giftStyleID=_giftStyleID;
@property(readonly, nonatomic) long long coin_amount; // @synthesize coin_amount=_coin_amount;
@property(readonly, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
@property(readonly, nonatomic) _Bool supportsAvatar;
- (id)initWithMessage:(id)arg1;
- (id)initWithRemoteID:(id)arg1 coinAmount:(long long)arg2 styleID:(id)arg3;

@end

