//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageIOSDebugMenuInteraction1 : SPTLogMessage
{
    _Bool _isDevBuildValue;
    NSString *_itemValue;
    NSString *_categoryValue;
    long long _weightValue;
}

+ (id)messageWithItem:(id)arg1 category:(id)arg2 weight:(long long)arg3 isDevBuild:(_Bool)arg4;
@property(nonatomic) _Bool isDevBuildValue; // @synthesize isDevBuildValue=_isDevBuildValue;
@property(nonatomic) long long weightValue; // @synthesize weightValue=_weightValue;
@property(copy, nonatomic) NSString *categoryValue; // @synthesize categoryValue=_categoryValue;
@property(copy, nonatomic) NSString *itemValue; // @synthesize itemValue=_itemValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
