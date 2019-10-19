//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAtlasTagCell, NSString, UITableView, UIVisualEffectView;

@interface AWEAtlasTagViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    unsigned long long _tagType;
    NSString *_starAtlasVideoTip;
    CDUnknownBlockType _completion;
    UITableView *_tableView;
    AWEAtlasTagCell *_yesCell;
    AWEAtlasTagCell *_noCell;
    UIVisualEffectView *_visualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) AWEAtlasTagCell *noCell; // @synthesize noCell=_noCell;
@property(retain, nonatomic) AWEAtlasTagCell *yesCell; // @synthesize yesCell=_yesCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *starAtlasVideoTip; // @synthesize starAtlasVideoTip=_starAtlasVideoTip;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
- (void).cxx_destruct;
- (id)cells;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
