//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "YTResponder.h"
#import "YTTopController.h"

@class NSString, OSSLicensesViewController, YTQTMButton;

@interface YTModalLicensesViewController : UINavigationController <YTResponder, YTTopController>
{
    OSSLicensesViewController *_licensesViewController;
    YTQTMButton *_backButton;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didPressBack;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
