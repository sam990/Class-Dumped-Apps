//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, AWEVideoPublishViewModel, NSError;

@protocol AWEPublishTaskExternalMessage <NSObject>

@optional
- (void)externalTask:(AWEAwemeModel *)arg1 publishViewModel:(AWEVideoPublishViewModel *)arg2 didEndWithResult:(long long)arg3 error:(NSError *)arg4;
@end
