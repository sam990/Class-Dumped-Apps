//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGExperimentSetProviding-Protocol.h>

@class NSString;

@protocol IGExperimentSet <IGExperimentSetProviding>
- (NSString *)valueForUniverse:(NSString *)arg1 parameter:(NSString *)arg2 holdoutUniverse:(NSString *)arg3 holdoutParameter:(NSString *)arg4 expose:(_Bool)arg5;
@end

