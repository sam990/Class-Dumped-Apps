//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseViewController.h>

#import "TWOverlayContentViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TWBroadcastCategory, UITableView, UITapGestureRecognizer;
@protocol TWBroadcastCategorySelectionViewControllerInteractionProtocol;

__attribute__((visibility("hidden")))
@interface TWBroadcastCategorySelectionViewController : TWBaseViewController <UITableViewDataSource, UITableViewDelegate, TWOverlayContentViewControllerProtocol>
{
    UITapGestureRecognizer *_tapGesture;
    id <TWBroadcastCategorySelectionViewControllerInteractionProtocol> _interactionDelegate;
    TWBroadcastCategory *_selectedBroadcastCategory;
    UITableView *_tableView;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TWBroadcastCategory *selectedBroadcastCategory; // @synthesize selectedBroadcastCategory=_selectedBroadcastCategory;
@property(nonatomic) __weak id <TWBroadcastCategorySelectionViewControllerInteractionProtocol> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (double)preferredHeightForWidth:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSelectedBroadcastCategory:(id)arg1 interactionDelegate:(id)arg2 themeManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

