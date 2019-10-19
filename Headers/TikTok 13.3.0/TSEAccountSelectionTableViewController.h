//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;
@protocol TSEAccount, TSEAccountSelectionDelegate, TSEImageDownloader, TSENetworking;

@interface TSEAccountSelectionTableViewController : UITableViewController
{
    id <TSEAccountSelectionDelegate> _delegate;
    NSArray *_accounts;
    id <TSEAccount> _selectedAccount;
    id <TSEImageDownloader> _imageDownloader;
    id <TSENetworking> _networking;
}

@property(readonly, nonatomic) id <TSENetworking> networking; // @synthesize networking=_networking;
@property(readonly, nonatomic) id <TSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) id <TSEAccount> selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property __weak id <TSEAccountSelectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithAccounts:(id)arg1 selectedAccount:(id)arg2 imageDownloader:(id)arg3 networking:(id)arg4 delegate:(id)arg5;

@end
