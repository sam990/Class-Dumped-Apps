//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGUser, NSString;

@interface IGToken : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGUser *_userToken_user;
    NSString *_userToken_tokenText;
    NSString *_hashtagToken_hashtagName;
}

+ (id)userTokenWithUser:(id)arg1 tokenText:(id)arg2;
+ (id)hashtagTokenWithHashtagName:(id)arg1;
- (void).cxx_destruct;
- (void)matchUserToken:(CDUnknownBlockType)arg1 hashtagToken:(CDUnknownBlockType)arg2;

@end

