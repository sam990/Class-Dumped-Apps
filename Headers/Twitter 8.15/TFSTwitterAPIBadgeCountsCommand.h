//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber;

@interface TFSTwitterAPIBadgeCountsCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _urtEnabled;
    NSNumber *_activityModelVersion;
    long long _userID;
}

@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) _Bool urtEnabled; // @synthesize urtEnabled=_urtEnabled;
@property(readonly, nonatomic) NSNumber *activityModelVersion; // @synthesize activityModelVersion=_activityModelVersion;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 userID:(long long)arg3 activityModelVersion:(id)arg4 urtEnabled:(_Bool)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end
