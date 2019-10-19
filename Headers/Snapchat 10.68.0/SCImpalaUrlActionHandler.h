//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaUrlActionHandling-Protocol.h"

@class NSString, SCDeeplinkShareController, SCLazy, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCImpalaUrlActionHandler : NSObject <SCImpalaUrlActionHandling>
{
    long long _pageType;
    SCLazy *_storiesEverywhereService;
    SCDeeplinkShareController *_deeplinkShareController;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)sendUrlWithUrl:(id)arg1;
- (void)openUrlWithUrl:(id)arg1 sourceType:(id)arg2;
- (void)shareUrlWithUrl:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 viewController:(id)arg3 pageType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
