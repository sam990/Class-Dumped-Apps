//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGShoppingVariantDimensionViewModel, NSString;

@protocol IGShoppingVariantSelectionFlowStepType <NSObject>
@property(readonly, copy, nonatomic) IGShoppingVariantDimensionViewModel *variantDimensionViewModel;
- (void)unresolve;
- (void)resolveWithSelectedVariantValue:(NSString *)arg1 nextStepHandler:(void (^)(id <IGShoppingVariantSelectionFlowStepType>))arg2 productItemHandler:(void (^)(IGProductItem *))arg3;
@end

