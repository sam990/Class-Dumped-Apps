//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginContinueWithEmailViewLogger;
@protocol SPTLoginNavigationCoordinator;

@interface SPTLoginContinueWithEmailViewModel : NSObject
{
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    SPTLoginContinueWithEmailViewLogger *_logger;
}

@property(retain, nonatomic) SPTLoginContinueWithEmailViewLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
- (void).cxx_destruct;
- (void)logUserDidTapLogIn;
- (void)logUserDidTapSignup;
- (void)logUserDidSeeView;
- (void)loginButtonPressed;
- (void)signupButtonPressed;
- (id)loginButtonTitle;
- (id)orLabelTitle;
- (id)signupButtonTitle;
- (id)title;
- (id)initWithNavigationCoordinator:(id)arg1 logger:(id)arg2;

@end

