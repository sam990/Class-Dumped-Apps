//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AddFriendsDelegateObject, User;

@interface SCLegacyRegistrationFindFriendsService : NSObject
{
    User *_user;
    AddFriendsDelegateObject *_addFriendsDelegate;
}

- (void).cxx_destruct;
- (void)addMultiFriends:(id)arg1 context:(id)arg2 sourceType:(long long)arg3 pageType:(long long)arg4 sessionRequestManager:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)findFriendsUsingRequestCache:(_Bool)arg1;
- (void)findFriendsRegistration;
- (_Bool)shouldDisplayOfficialAccountsSuggestionOnSeparatePage;
- (id)officialAccountsSuggestions;
- (id)outOfContactsSuggestions;
- (id)publisherAccountsSuggestions;
- (id)contactNonSnapchatters;
- (id)contactSnapchatters;
- (id)initWithUser:(id)arg1;

@end
