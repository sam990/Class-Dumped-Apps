//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOAd, GADOSlot;

@protocol GADOSlotAdResponseDelegate <NSObject>
- (void)slot:(GADOSlot *)arg1 willProcessMediatedAdResponse:(GADOAd *)arg2;
- (_Bool)slot:(GADOSlot *)arg1 shouldProcessAdResponse:(GADOAd *)arg2 error:(id *)arg3;
@end

