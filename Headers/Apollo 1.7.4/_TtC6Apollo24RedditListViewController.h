//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Apollo25ApolloTableViewController.h"

@interface _TtC6Apollo24RedditListViewController : _TtC6Apollo25ApolloTableViewController
{
    // Error parsing type: , name: refreshControl
    // Error parsing type: , name: editBarButtonItem
    // Error parsing type: , name: addBarButtonItem
    // Error parsing type: , name: doneBarButtonItem
    // Error parsing type: , name: multireddits
    // Error parsing type: , name: subredditToLoad
    // Error parsing type: , name: sectionIndexTitlesView
    // Error parsing type: , name: preventSectionIndexTitlesFromWorking
    // Error parsing type: , name: panGestureCalled
    // Error parsing type: , name: subredditFetchProgress
    // Error parsing type: , name: subscribedSubreddits
    // Error parsing type: , name: subredditNamesToFullnames
    // Error parsing type: , name: sectionedSubreddits
    // Error parsing type: , name: subredditIconDiameter
    // Error parsing type: , name: registeredFor3DTouch
    // Error parsing type: , name: viewHasBeenSeen
    // Error parsing type: , name: addSubredditAction
}

- (void).cxx_destruct;
- (void)favoriteSubredditButtonTapped:(id)arg1;
- (void)multiredditExpandButtonTapped:(id)arg1;
- (void)tappedAddBarButtonItem:(id)arg1;
- (void)refreshControlActivated:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)sectionIndexTitlesPannedWithPanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
