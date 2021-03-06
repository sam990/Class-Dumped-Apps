//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;
@protocol SPTAccountProductInformationObserver;

@protocol SPTAccountProductInformationController <NSObject>
@property(readonly, nonatomic) _Bool isPremiumOnlyMarket;
@property(readonly, nonatomic) _Bool upgradeAvailableButCantPurchase;
@property(readonly, nonatomic) _Bool hasCanActivatePremiumTrialValue;
@property(readonly, nonatomic) _Bool canActivatePremiumTrial;
@property(readonly, nonatomic) long long availableProduct;
@property(readonly, copy, nonatomic) NSString *currentProductMarketingName;
@property(readonly, nonatomic) NSDate *currentProductExpieryDate;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long currentProduct;
- (void)removeProductInformationObserver:(id <SPTAccountProductInformationObserver>)arg1;
- (void)addProductInformationObserver:(id <SPTAccountProductInformationObserver>)arg1;
- (NSString *)marketingNameForProduct:(long long)arg1;
@end

