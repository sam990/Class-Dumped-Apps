//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGProfilePictureImageView, IGStackedProfilePicture;

@interface IGVideoCallProfileImageContainerView : IGPassthroughView
{
    IGProfilePictureImageView *_profileImageView;
    IGStackedProfilePicture *_stackedParticipantsView;
}

- (void).cxx_destruct;
- (_Bool)shouldUseRingingAnimation;
- (void)_setupStackedProfileImageViewWithUserProfileImages:(id)arg1 module:(id)arg2;
- (void)_setupSingleProfileImageViewWithUserProfileImage:(id)arg1 module:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserProfileImages:(id)arg1 module:(id)arg2;

@end

