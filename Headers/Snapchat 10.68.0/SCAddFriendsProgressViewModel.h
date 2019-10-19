//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString;

@interface SCAddFriendsProgressViewModel : NSObject <NSCopying>
{
    NSArray *_silhouettes;
    NSArray *_avatars;
    NSArray *_smilingAvatars;
    NSArray *_confettiImages;
}

+ (unsigned long long)maxNumberOfAvatarsToAdd;
@property(readonly, nonatomic) NSArray *confettiImages; // @synthesize confettiImages=_confettiImages;
@property(readonly, nonatomic) NSArray *smilingAvatars; // @synthesize smilingAvatars=_smilingAvatars;
@property(readonly, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(readonly, nonatomic) NSArray *silhouettes; // @synthesize silhouettes=_silhouettes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedProgressText;
- (int)removedAvatarIndexInViewModel:(id)arg1;
- (id)addedAvatarsInViewModel:(id)arg1;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic, getter=isCompleted) _Bool completed;
- (unsigned long long)numberOfAvatarsToAdd;
- (id)initWithSilhouettes:(id)arg1 avatars:(id)arg2 smilingAvatars:(id)arg3 confettis:(id)arg4;
- (id)initWithSilhouettes:(id)arg1 avatars:(id)arg2 smilingAvatars:(id)arg3;
- (id)initWithSilhouettes:(id)arg1 avatars:(id)arg2;
- (id)initWithSilhouettes:(id)arg1;

@end
