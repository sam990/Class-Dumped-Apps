//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PostModerationController : NSObject
{
}

+ (void)removePost:(id)arg1 asSpam:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)removePost:(id)arg1 asSpam:(_Bool)arg2;
+ (void)undistinguishPost:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)distinguishPostAsAdmin:(id)arg1;
+ (void)distinguishPostAsModerator:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)approvePost:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

