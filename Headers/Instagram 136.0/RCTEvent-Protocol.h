//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol RCTEvent;

@protocol RCTEvent <NSObject>
+ (NSString *)moduleDotMethod;
@property(readonly, copy, nonatomic) NSString *eventName;
@property(readonly, nonatomic) NSNumber *viewTag;
- (NSArray *)arguments;
- (_Bool)canCoalesce;

@optional
@property(readonly, nonatomic) unsigned short coalescingKey;
- (id <RCTEvent>)coalesceWithEvent:(id <RCTEvent>)arg1;
@end

