//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NPFVirtualCurrencyTransaction : NSObject
{
    int _state;
    NSString *_orderId;
    NSString *_sku;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

