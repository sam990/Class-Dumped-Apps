//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, T1DirectMessageUserTypeaheadRowAdapter, TFNDirectMessageUser;

@protocol T1DirectMessageUserTypeaheadRowAdapterDelegate <NSObject>
- (void)directMessageUserTypeaheadRowAdapter:(T1DirectMessageUserTypeaheadRowAdapter *)arg1 didSelectUser:(TFNDirectMessageUser *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
