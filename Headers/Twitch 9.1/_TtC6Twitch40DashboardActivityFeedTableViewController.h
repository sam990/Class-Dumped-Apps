//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseTableViewController.h>

__attribute__((visibility("hidden")))
@interface _TtC6Twitch40DashboardActivityFeedTableViewController : TWBaseTableViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: monitor
    // Error parsing type: , name: enabledActivityTypes
    // Error parsing type: , name: loadingIndicator
    // Error parsing type: , name: tableViewSize
    // Error parsing type: , name: completeHistory
    // Error parsing type: , name: filteredHistory
    // Error parsing type: , name: emptyActivityFeedLabelStackView
    // Error parsing type: , name: emptyActivityFeedTitleLabel
    // Error parsing type: , name: emptyActivityFeedSubtitleLabel
    // Error parsing type: , name: resumeAutoScrollButton
    // Error parsing type: , name: resumeAutoScrollButtonVisible
}

- (void).cxx_destruct;
- (id)initWithTableViewStyle:(long long)arg1 themeManager:(id)arg2;
- (void)applyTheme:(id)arg1;
- (void)resumeAutoScrollButtonTapped;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

