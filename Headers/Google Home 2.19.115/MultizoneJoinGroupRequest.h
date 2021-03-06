//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SetupRequest.h"

@class NSNumber, NSString;

@interface MultizoneJoinGroupRequest : SetupRequest
{
    NSString *_UUID;
    NSString *_groupName;
    _Bool _isMultichannelGroup;
    long long _multichannelSelection;
    NSNumber *_stereoBalance;
}

- (void).cxx_destruct;
- (void)didComplete;
- (void)execute;
- (id)initWithDevice:(id)arg1 groupUUIDString:(id)arg2 groupName:(id)arg3 channelSelection:(long long)arg4 stereoBalance:(id)arg5;
- (id)initWithDevice:(id)arg1 groupUUIDString:(id)arg2 groupName:(id)arg3;

@end

