//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, WAActionSheetPresenter, WAChatBarHelper, WAUserJID;

@protocol WAChatBarHelperDelegate
- (void)chatBarHelper:(WAChatBarHelper *)arg1 dismissActionSheetCancelled:(_Bool)arg2;
- (void)chatBarHelper:(WAChatBarHelper *)arg1 showActionSheet:(WAActionSheetPresenter *)arg2;
- (void)chatBarHelper:(WAChatBarHelper *)arg1 showBlockedContactWarning:(NSString *)arg2 forUserJID:(WAUserJID *)arg3;
@end
