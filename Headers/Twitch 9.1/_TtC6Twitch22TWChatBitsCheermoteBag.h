//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface _TtC6Twitch22TWChatBitsCheermoteBag : NSObject
{
    // Error parsing type: , name: totalBitCount
    // Error parsing type: , name: totalBitCountColor
    // Error parsing type: , name: cheermotes
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)initWithTotalBitCount:(long long)arg1 totalBitCountColor:(id)arg2 cheermotes:(id)arg3;
- (id)initWithCheermote:(id)arg1 totalBitCountColor:(id)arg2;
- (id)init;
@property(nonatomic, readonly) NSArray *cheermotes;
@property(nonatomic, readonly) UIColor *totalBitCountColor; // @synthesize totalBitCountColor;
@property(nonatomic, readonly) long long totalBitCount; // @synthesize totalBitCount;

@end

