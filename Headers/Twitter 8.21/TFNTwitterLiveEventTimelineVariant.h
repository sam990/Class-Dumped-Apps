//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString, TFNTwitterLiveEventTimelineCustomizationInfo;

@interface TFNTwitterLiveEventTimelineVariant : NSObject <NSCopying>
{
    NSString *_timelineID;
    NSString *_title;
    NSString *_hashtag;
    NSString *_composeSemanticCoreID;
    NSString *_timelineSourceID;
    NSString *_timelineSourceType;
    NSString *_composeInjectionTimelineID;
    TFNTwitterLiveEventTimelineCustomizationInfo *_customizationInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TFNTwitterLiveEventTimelineCustomizationInfo *customizationInfo; // @synthesize customizationInfo=_customizationInfo;
@property(readonly, copy, nonatomic) NSString *composeInjectionTimelineID; // @synthesize composeInjectionTimelineID=_composeInjectionTimelineID;
@property(readonly, copy, nonatomic) NSString *timelineSourceType; // @synthesize timelineSourceType=_timelineSourceType;
@property(readonly, copy, nonatomic) NSString *timelineSourceID; // @synthesize timelineSourceID=_timelineSourceID;
@property(copy, nonatomic) NSString *composeSemanticCoreID; // @synthesize composeSemanticCoreID=_composeSemanticCoreID;
@property(readonly, copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
- (_Bool)isEqualToTimelineVariant:(id)arg1;
- (id)toJSONDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;

@end

