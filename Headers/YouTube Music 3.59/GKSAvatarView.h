//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIMMe, GIPNetworkImageView, GKSAvatar, GPCPromise, NSArray, UIColor;
@protocol GKSAvatarModel;

@interface GKSAvatarView : UIView
{
    _Bool _notificationMark;
    _Bool _roundCorners;
    _Bool _paddedDefaultAvatar;
    GIMMe *_gimme;
    GKSAvatar *_avatarData;
    id <GKSAvatarModel> _model;
    GIPNetworkImageView *_userImage;
    UIView *_userImageBackground;
    unsigned long long _avatarViewChangeReasonID;
    UIColor *_defaultBackgroundColor;
    UIView *_circle;
    NSArray *_userImageConstraints;
    GPCPromise *_thumbnailLoadPromise;
}

+ (Class)layerClass;
@property(retain, nonatomic) GPCPromise *thumbnailLoadPromise; // @synthesize thumbnailLoadPromise=_thumbnailLoadPromise;
@property(retain, nonatomic) NSArray *userImageConstraints; // @synthesize userImageConstraints=_userImageConstraints;
@property(retain, nonatomic) UIView *circle; // @synthesize circle=_circle;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(nonatomic) unsigned long long avatarViewChangeReasonID; // @synthesize avatarViewChangeReasonID=_avatarViewChangeReasonID;
@property(retain, nonatomic) UIView *userImageBackground; // @synthesize userImageBackground=_userImageBackground;
@property(retain, nonatomic) GIPNetworkImageView *userImage; // @synthesize userImage=_userImage;
@property(nonatomic) _Bool paddedDefaultAvatar; // @synthesize paddedDefaultAvatar=_paddedDefaultAvatar;
@property(nonatomic) _Bool roundCorners; // @synthesize roundCorners=_roundCorners;
@property(nonatomic) _Bool notificationMark; // @synthesize notificationMark=_notificationMark;
@property(retain, nonatomic) id <GKSAvatarModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) GKSAvatar *avatarData; // @synthesize avatarData=_avatarData;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)postProfilePictureHasChangedNotificationWithError:(id)arg1;
- (void)thumbnailFetchDidFail:(id)arg1;
- (void)thumbnailFetchDidSucceed:(id)arg1;
- (void)imageViewDidChanged:(id)arg1;
- (id)userImageConstraintsForAvatar;
- (id)userImageConstraintsForDefaultAvatar;
- (void)updateUI;
- (void)updateData;
- (void)handleAvatarModelChangeWithNotification:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)unsubscribeFromLocalNotificationsWithObserver:(id)arg1;
- (id)subscribeToProfilePictureUpdatesWithBlock:(CDUnknownBlockType)arg1;
- (id)subscribeToViewUpdatesWithBlock:(CDUnknownBlockType)arg1;
- (id)asImage;
@property(nonatomic) double elevation;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

