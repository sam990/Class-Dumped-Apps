//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBNavigationController.h"

@class DBDocscannerAnalyticsLogger;

@interface DBScanNavigationController : DBNavigationController
{
    _Bool _didAddAppObservers;
    DBDocscannerAnalyticsLogger *_analyticsLogger;
}

- (void).cxx_destruct;
- (void)db_appDidReceiveMemoryWarningNotification:(id)arg1;
- (void)db_appDidEnterBackground:(id)arg1;
- (void)db_appWillEnterForeground:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1 analyticsLogger:(id)arg2;

@end

