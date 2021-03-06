//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEChallengeDataManager : NSObject
{
}

+ (id)addMACAddressIfNeeded:(id)arg1;
+ (void)requestTaskItemWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)createChallengeItemWithTitle:(id)arg1 description:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestChallengeRelatedItemsWithName:(id)arg1 isCommerce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestChallengeRelatedItemsWithName:(id)arg1 isCommerce:(_Bool)arg2 type:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestChallengeRelatedItemsWithID:(id)arg1 isCommerce:(_Bool)arg2 type:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestChallengeRelatedItemsWithID:(id)arg1 isCommerce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestChallengeItemWithName:(id)arg1 isCommerce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestChallengeItemsWithIDArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestChallengeItemWithID:(id)arg1 isCommerce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestAwemeListWithHashtagName:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestAwemeListWithHashtagName:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 type:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)requestAwemeListWithHashtagName:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 type:(unsigned long long)arg6 sourceType:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)requestAwemeListWithHashtagName:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 type:(unsigned long long)arg6 sourceType:(unsigned long long)arg7 extraParams:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (void)requestAwemeListWithID:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 type:(unsigned long long)arg6 sourceType:(unsigned long long)arg7 extraParams:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (void)requestAwemeListWithID:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 type:(unsigned long long)arg6 sourceType:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)requestAwemeListWithID:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 type:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)requestAwemeListWithID:(id)arg1 isCommerce:(_Bool)arg2 pullType:(id)arg3 cursor:(id)arg4 count:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)requestFeedCommentListWithID:(id)arg1 isCommerce:(_Bool)arg2 hashtagName:(id)arg3 pullType:(id)arg4 cursor:(id)arg5 count:(id)arg6 type:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;

@end

