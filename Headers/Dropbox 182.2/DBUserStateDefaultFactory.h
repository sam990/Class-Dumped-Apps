//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBUserStateFactory-Protocol.h"

@class NSString;

@interface DBUserStateDefaultFactory : NSObject <DBUserStateFactory>
{
}

+ (id)syncToDBXAccountInfo:(id)arg1;
- (id)userStateWithAccount:(id)arg1 pairingInfoProvider:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

