//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBRenameAndDestinationOptionsViewController.h"

@class DBFileActionOptionsWithDestination;
@protocol DBFileActionOptionsWithRenameProtocol;

@interface DBCreateFolderOptionsViewController : DBRenameAndDestinationOptionsViewController
{
    DBFileActionOptionsWithDestination<DBFileActionOptionsWithRenameProtocol> *_options;
}

@property(readonly, nonatomic) DBFileActionOptionsWithDestination<DBFileActionOptionsWithRenameProtocol> *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)db_updateRightBarButtonItem;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithOptions:(id)arg1 modalPresenter:(id)arg2 analyticsLogger:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5;

@end

