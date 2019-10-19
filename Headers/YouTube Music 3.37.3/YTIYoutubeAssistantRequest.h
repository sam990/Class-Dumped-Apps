//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeResponseCacheKeyProtocol-Protocol.h"

@class NSData, NSString, YTIInnerTubeContext, YTIScreenContext, YTIYoutubeAssistantParams;

@interface YTIYoutubeAssistantRequest : GPBMessage <YTInnerTubeResponseCacheKeyProtocol>
{
}

+ (id)descriptor;
+ (id)assistantRequestWithQuery:(id)arg1;
- (id)innerTubeResponseCacheKeyWithService:(long long)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *assistantServerEnv; // @dynamic assistantServerEnv;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disableSignedOutPrefetchLogging; // @dynamic disableSignedOutPrefetchLogging;
@property(nonatomic) _Bool enablePrefetchLogging; // @dynamic enablePrefetchLogging;
@property(nonatomic) _Bool enableTtsAudio; // @dynamic enableTtsAudio;
@property(nonatomic) _Bool hasAssistantServerEnv; // @dynamic hasAssistantServerEnv;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasDisableSignedOutPrefetchLogging; // @dynamic hasDisableSignedOutPrefetchLogging;
@property(nonatomic) _Bool hasEnablePrefetchLogging; // @dynamic hasEnablePrefetchLogging;
@property(nonatomic) _Bool hasEnableTtsAudio; // @dynamic hasEnableTtsAudio;
@property(nonatomic) _Bool hasIsPrefetchQuery; // @dynamic hasIsPrefetchQuery;
@property(nonatomic) _Bool hasOpaqueConversationToken; // @dynamic hasOpaqueConversationToken;
@property(nonatomic) _Bool hasOpaqueServerDrivenContextToken; // @dynamic hasOpaqueServerDrivenContextToken;
@property(nonatomic) _Bool hasPredictedRecognitionProbabilityThreshold; // @dynamic hasPredictedRecognitionProbabilityThreshold;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasQueryIntent; // @dynamic hasQueryIntent;
@property(nonatomic) _Bool hasRequestOrigin; // @dynamic hasRequestOrigin;
@property(nonatomic) _Bool hasS3Input; // @dynamic hasS3Input;
@property(nonatomic) _Bool hasSalInputMetadata; // @dynamic hasSalInputMetadata;
@property(nonatomic) _Bool hasScreenContext; // @dynamic hasScreenContext;
@property(nonatomic) _Bool hasUseSearchRecognizer; // @dynamic hasUseSearchRecognizer;
@property(nonatomic) _Bool hasYoutubeAssistantParams; // @dynamic hasYoutubeAssistantParams;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPrefetchQuery; // @dynamic isPrefetchQuery;
@property(copy, nonatomic) NSData *opaqueConversationToken; // @dynamic opaqueConversationToken;
@property(copy, nonatomic) NSData *opaqueServerDrivenContextToken; // @dynamic opaqueServerDrivenContextToken;
@property(nonatomic) float predictedRecognitionProbabilityThreshold; // @dynamic predictedRecognitionProbabilityThreshold;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(copy, nonatomic) NSData *queryIntent; // @dynamic queryIntent;
@property(nonatomic) int requestOrigin; // @dynamic requestOrigin;
@property(copy, nonatomic) NSData *s3Input; // @dynamic s3Input;
@property(copy, nonatomic) NSData *salInputMetadata; // @dynamic salInputMetadata;
@property(retain, nonatomic) YTIScreenContext *screenContext; // @dynamic screenContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useSearchRecognizer; // @dynamic useSearchRecognizer;
@property(retain, nonatomic) YTIYoutubeAssistantParams *youtubeAssistantParams; // @dynamic youtubeAssistantParams;

@end
