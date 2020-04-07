//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TwitterTextConfiguration;

@interface TwitterTextParser : NSObject
{
    TwitterTextConfiguration *_configuration;
}

+ (void)setDefaultParserWithConfiguration:(id)arg1;
+ (id)defaultParser;
+ (id)_queue;
@property(readonly, nonatomic) TwitterTextConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (long long)_tt_lengthOfWeightedChar:(id)arg1;
- (long long)_tt_lengthOfText:(id)arg1 range:(struct _NSRange)arg2 countingBlock:(CDUnknownBlockType)arg3;
- (id)parseTweet:(id)arg1;
- (long long)maxWeightedTweetLength;
- (id)initWithConfiguration:(id)arg1;

@end
