//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGPromoteEnrolledCouponDataModel, IGPromoteInitDataModel, IGPromotePaymentDataModel, IGPromotePrevalidationViewController, NSArray;

@protocol IGPromotePrevalidationViewControllerDelegate <NSObject>
- (void)promotePrevalidationViewControllerDidTapCancelBarButton:(IGPromotePrevalidationViewController *)arg1;
- (void)promotePrevalidationViewController:(IGPromotePrevalidationViewController *)arg1 didFinishWithInitDataModel:(IGPromoteInitDataModel *)arg2 couponDataModel:(IGPromoteEnrolledCouponDataModel *)arg3 initPaymentDataModel:(IGPromotePaymentDataModel *)arg4 initAudienceDataModelList:(NSArray *)arg5 initSavedSettingsDataModelList:(NSArray *)arg6 shouldEnterQuickPromote:(_Bool)arg7;
@end

