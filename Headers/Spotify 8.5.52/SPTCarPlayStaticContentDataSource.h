//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarPlayContentDataSource-Protocol.h"

@class NSArray, NSString;

@interface SPTCarPlayStaticContentDataSource : NSObject <SPTCarPlayContentDataSource>
{
}

- (id)createRootForURI:(id)arg1 withTitle:(id)arg2 withIcon:(long long)arg3;
- (id)fetchRootContentWithAccessorySessionID:(id)arg1 contentController:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) __weak NSArray *rootItemURIs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
