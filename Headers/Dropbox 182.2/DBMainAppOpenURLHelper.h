//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFirstPartyAppManagerURLHelper-Protocol.h"

@interface DBMainAppOpenURLHelper : NSObject <DBFirstPartyAppManagerURLHelper>
{
}

+ (id)sharedHelper;
@property(readonly) unsigned long long capabilities;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canOpenURL:(id)arg1;

@end

