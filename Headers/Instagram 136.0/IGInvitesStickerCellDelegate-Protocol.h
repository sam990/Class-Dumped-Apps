//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGInvitesStickerCell, NSString;

@protocol IGInvitesStickerCellDelegate <NSObject>
- (void)invitesStickerCell:(IGInvitesStickerCell *)arg1 didRSVP:(long long)arg2 withInviteStickerPk:(NSString *)arg3;
- (void)invitesStickerCellDidTapInvitesList:(IGInvitesStickerCell *)arg1;
- (void)invitesStickerCellDidTapMoreButton:(IGInvitesStickerCell *)arg1;
@end

