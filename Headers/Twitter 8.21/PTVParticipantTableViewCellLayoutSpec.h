//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVParticipantTableViewCellLayoutSpec : NSObject
{
}

+ (struct CGRect)HeartLabelFrame:(struct CGSize)arg1 LTRDisplayNameRect:(struct CGRect)arg2;
+ (struct CGRect)LTRHeartLabelFrame:(struct CGSize)arg1 DisplayNameRect:(struct CGRect)arg2;
+ (struct CGRect)HeartFrame:(struct CGSize)arg1 ContainerWidth:(double)arg2;
+ (id)HeartsFont;
+ (struct CGRect)LTRSuperfanIconFrame:(struct CGSize)arg1 LTRDisplayNameFrame:(struct CGRect)arg2 IsFollowing:(_Bool)arg3 SuperfanIconSize:(struct CGSize)arg4;
+ (struct CGRect)SuperfanIconFrame:(struct CGSize)arg1 LTRDisplayNameFrame:(struct CGRect)arg2 IsFollowing:(_Bool)arg3 SuperfanIconSize:(struct CGSize)arg4;
+ (id)SuperfanIcon;
+ (struct CGRect)LTRFollowingIconFrame:(struct CGRect)arg1 FollowingIconSize:(struct CGSize)arg2;
+ (struct CGRect)FollowingIconFrame:(struct CGSize)arg1 LTRDisplayNameFrame:(struct CGRect)arg2 FollowingIconSize:(struct CGSize)arg3;
+ (id)FollowingIcon;
+ (double)XSpacingBetweenParticipantNameAndEachIcon;
+ (struct CGRect)DisplayNameFrameWithLTRFrame:(struct CGRect)arg1 ContainerSize:(struct CGSize)arg2;
+ (struct CGRect)LTRDisplayNameFrame:(struct CGSize)arg1 HeartLabelVisible:(_Bool)arg2 AttributedDisplayName:(id)arg3 IsFollowing:(_Bool)arg4 FollowingIconSize:(struct CGSize)arg5 IsSuperfan:(_Bool)arg6 SuperfanIconSize:(struct CGSize)arg7;
+ (id)DisplayNameFont;
+ (struct CGRect)AvatarFrame:(double)arg1;
+ (struct CGRect)LTRAvatarFrame;
+ (struct CGSize)PreferredProfileSizePoints;
+ (struct UIEdgeInsets)InnerPadding;
+ (double)CellHeight;

@end

