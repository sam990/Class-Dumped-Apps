//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEStudioFollowersManager, AWEStudioFriendsManager, NSArray, NSMutableArray;
@protocol AWESendToFriendDataManagerDelegate;

@interface AWESendToFriendDataManager : NSObject
{
    _Bool _hasMoreFriends;
    _Bool _hasMoreFollowers;
    _Bool _isFollowerSelecting;
    id <AWESendToFriendDataManagerDelegate> _delegate;
    NSMutableArray *_friendsList;
    NSMutableArray *_followersList;
    NSMutableArray *_originalFriendsList;
    NSMutableArray *_selectedUserList;
    NSMutableArray *_selectedFriendList;
    NSMutableArray *_selectedFollowerList;
    NSArray *_oldSelectedUserList;
    NSArray *_oldSelectedFriendList;
    NSArray *_oldSelectedFollowerList;
    NSMutableArray *_friendsShieldList;
    NSMutableArray *_followersShieldList;
    AWEStudioFriendsManager *_friendsManager;
    AWEStudioFollowersManager *_followersManager;
}

@property(nonatomic) _Bool isFollowerSelecting; // @synthesize isFollowerSelecting=_isFollowerSelecting;
@property(retain, nonatomic) AWEStudioFollowersManager *followersManager; // @synthesize followersManager=_followersManager;
@property(retain, nonatomic) AWEStudioFriendsManager *friendsManager; // @synthesize friendsManager=_friendsManager;
@property(retain, nonatomic) NSMutableArray *followersShieldList; // @synthesize followersShieldList=_followersShieldList;
@property(retain, nonatomic) NSMutableArray *friendsShieldList; // @synthesize friendsShieldList=_friendsShieldList;
@property(retain, nonatomic) NSArray *oldSelectedFollowerList; // @synthesize oldSelectedFollowerList=_oldSelectedFollowerList;
@property(retain, nonatomic) NSArray *oldSelectedFriendList; // @synthesize oldSelectedFriendList=_oldSelectedFriendList;
@property(retain, nonatomic) NSArray *oldSelectedUserList; // @synthesize oldSelectedUserList=_oldSelectedUserList;
@property(retain, nonatomic) NSMutableArray *selectedFollowerList; // @synthesize selectedFollowerList=_selectedFollowerList;
@property(retain, nonatomic) NSMutableArray *selectedFriendList; // @synthesize selectedFriendList=_selectedFriendList;
@property(retain, nonatomic) NSMutableArray *selectedUserList; // @synthesize selectedUserList=_selectedUserList;
@property(retain, nonatomic) NSMutableArray *originalFriendsList; // @synthesize originalFriendsList=_originalFriendsList;
@property(nonatomic) _Bool hasMoreFollowers; // @synthesize hasMoreFollowers=_hasMoreFollowers;
@property(nonatomic) _Bool hasMoreFriends; // @synthesize hasMoreFriends=_hasMoreFriends;
@property(retain, nonatomic) NSMutableArray *followersList; // @synthesize followersList=_followersList;
@property(retain, nonatomic) NSMutableArray *friendsList; // @synthesize friendsList=_friendsList;
@property(nonatomic) __weak id <AWESendToFriendDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)selectedUsersString:(id)arg1;
- (void)userArray:(id)arg1 addItem:(id)arg2;
- (void)userArray:(id)arg1 deleteItem:(id)arg2;
- (id)selectFollowersString;
- (id)selectFriendsString;
- (void)selectFinished:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isShieldedUser:(id)arg1;
- (_Bool)isSelectedUser:(id)arg1;
- (void)unselectUser:(id)arg1 isFriend:(_Bool)arg2;
- (_Bool)selectUser:(id)arg1 isFriend:(_Bool)arg2;
- (void)loadmoreFollowersWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFollowersWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadmoreFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFriendsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
