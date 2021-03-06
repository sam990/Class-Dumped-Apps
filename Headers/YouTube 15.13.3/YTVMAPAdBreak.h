//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInstreamAdBreak.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSArray, NSRegularExpression;

@interface YTVMAPAdBreak : YTBaseInstreamAdBreak <NSCopying>
{
    int _offsetType;
    double _timeOffset;
    NSRegularExpression *_userAuthRegExp;
    NSRegularExpression *_deviceAuthRegExp;
    struct NSDictionary *_macroRegexDict;
    NSArray *_breakStartPingURLs;
    NSArray *_breakEndPingURLs;
    NSArray *_errorPingURLs;
    NSArray *_abandonPingURLs;
    NSArray *_watchTimePingURLs;
    unsigned long long _percentageOffset;
    unsigned long long _positionOffset;
}

+ (id)timeBasedAdBreakAtInterval:(double)arg1 withAds:(id)arg2;
+ (id)percentageBasedAdBreakAtOffset:(unsigned long long)arg1 withAds:(id)arg2;
+ (id)positionalAdBreakAtOffset:(unsigned long long)arg1 withAds:(id)arg2;
+ (id)postrollAdBreakWithAds:(id)arg1;
+ (id)prerollAdBreakWithAds:(id)arg1;
@property(readonly, nonatomic) int offsetType; // @synthesize offsetType=_offsetType;
@property(readonly, nonatomic) unsigned long long positionOffset; // @synthesize positionOffset=_positionOffset;
@property(readonly, nonatomic) unsigned long long percentageOffset; // @synthesize percentageOffset=_percentageOffset;
@property(readonly, nonatomic) NSArray *watchTimePingURLs; // @synthesize watchTimePingURLs=_watchTimePingURLs;
@property(readonly, nonatomic) NSArray *abandonPingURLs; // @synthesize abandonPingURLs=_abandonPingURLs;
@property(readonly, nonatomic) NSArray *errorPingURLs; // @synthesize errorPingURLs=_errorPingURLs;
@property(readonly, nonatomic) NSArray *breakEndPingURLs; // @synthesize breakEndPingURLs=_breakEndPingURLs;
@property(readonly, nonatomic) NSArray *breakStartPingURLs; // @synthesize breakStartPingURLs=_breakStartPingURLs;
- (struct NSDictionary *)macroRegexDict;
- (id)deviceAuthRegExp;
- (id)userAuthRegExp;
- (double)timeOffset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)timeOffsetMilliseconds;
- (double)absoluteOffsetWithVideoLength:(double)arg1;
- (long long)type;
- (_Bool)isPostroll;
- (_Bool)isPreroll;
- (id)watchTimePings;
- (id)abandonPings;
- (id)errorPings;
- (id)breakEndPings;
- (id)breakStartPings;
- (void)updateAdTagsWithMacros:(id)arg1;
- (id)newAdBreakWithAds:(id)arg1;
- (id)initWithBreakStartPingURLs:(id)arg1 breakEndPingURLs:(id)arg2 errorPingURLs:(id)arg3 abandonPingURLs:(id)arg4 watchTimePingURLs:(id)arg5 timeOffset:(double)arg6 percentageOffset:(unsigned long long)arg7 positionOffset:(unsigned long long)arg8 offsetType:(int)arg9 ads:(id)arg10 userAuthRegex:(id)arg11 deviceAuthRegex:(id)arg12 macroRegexDict:(struct NSDictionary *)arg13;

@end

