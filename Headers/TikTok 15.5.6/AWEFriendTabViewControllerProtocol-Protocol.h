//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AWEFriendTabViewControllerProtocol <NSObject>
+ (long long)initialLandingIndex;
@property(readonly, nonatomic) long long initialIndex;
@property(copy, nonatomic) NSString *enterFrom;
@property(nonatomic) long long currentSelectedIndex;
- (_Bool)isDotShownOnTopIndex:(long long)arg1;
- (void)silentUpdateSelectedIndex:(long long)arg1;
- (void)updateSelectedIndex:(long long)arg1;
@end

