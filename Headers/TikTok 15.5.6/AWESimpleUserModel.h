//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEHitTaskInfoModel, AWEURLModel, NSString;

@interface AWESimpleUserModel : AWEBaseApiModel
{
    NSString *_userID;
    NSString *_nickname;
    NSString *_signature;
    AWEURLModel *_avatarThumb;
    long long _followStatus;
    long long _status;
    long long _userRate;
    AWEURLModel *_avatarLarger;
    AWEHitTaskInfoModel *_hitTaskModel;
}

+ (id)hitTaskModelJSONAdapter;
+ (id)avatarLargerJSONAdapter;
+ (id)avatarThumbJSONAdapter;
+ (id)userRateJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEHitTaskInfoModel *hitTaskModel; // @synthesize hitTaskModel=_hitTaskModel;
@property(retain, nonatomic) AWEURLModel *avatarLarger; // @synthesize avatarLarger=_avatarLarger;
@property(nonatomic) long long userRate; // @synthesize userRate=_userRate;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(retain, nonatomic) AWEURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

