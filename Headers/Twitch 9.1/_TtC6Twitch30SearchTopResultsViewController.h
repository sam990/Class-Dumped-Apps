//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseTableViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch30SearchTopResultsViewController : TWBaseTableViewController
{
    // Error parsing type: , name: sessionID
    // Error parsing type: , name: delegate
    // Error parsing type: , name: screenName
    // Error parsing type: , name: query
    // Error parsing type: , name: _sections
    // Error parsing type: , name: searchResults
    // Error parsing type: , name: requestToken
    // Error parsing type: , name: queryKind
    // Error parsing type: , name: graphQL
    // Error parsing type: , name: $__lazy_storage_$_loadingIndicator
    // Error parsing type: , name: $__lazy_storage_$_emptyStateView
}

- (void).cxx_destruct;
- (id)initWithTableViewStyle:(long long)arg1 themeManager:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)requestTopResultsWithCurrentQuery;
@property(nonatomic, readonly) NSString *subscreenName;
@property(nonatomic, readonly) NSString *screenName;

@end

