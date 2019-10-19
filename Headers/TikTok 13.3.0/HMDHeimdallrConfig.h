//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCleanupConfig, NSArray, NSDictionary;

@interface HMDHeimdallrConfig : NSObject
{
    _Bool _enableNetStats;
    _Bool _disableReportError;
    _Bool _enableEncrypt;
    _Bool _needHookTTMonitor;
    NSArray *_modules;
    HMDCleanupConfig *_cleanupConfig;
    NSDictionary *_allowedLogTypes;
    NSDictionary *_allowedServiceTypes;
    NSDictionary *_allowedMetricTypes;
    NSArray *_imageAllowList;
    NSArray *_apiBlackList;
    NSArray *_apiAllowList;
    unsigned long long _onceMaxCount;
    unsigned long long _fetchSettingInterval;
    unsigned long long _pollingInterval;
    NSArray *_configURLLists;
    NSArray *_reportHosts;
    NSDictionary *_enableTimestamps;
}

+ (id)hmd_attributeMapDictionary;
@property(retain, nonatomic) NSDictionary *enableTimestamps; // @synthesize enableTimestamps=_enableTimestamps;
@property(nonatomic) _Bool needHookTTMonitor; // @synthesize needHookTTMonitor=_needHookTTMonitor;
@property(nonatomic) _Bool enableEncrypt; // @synthesize enableEncrypt=_enableEncrypt;
@property(retain, nonatomic) NSArray *reportHosts; // @synthesize reportHosts=_reportHosts;
@property(retain, nonatomic) NSArray *configURLLists; // @synthesize configURLLists=_configURLLists;
@property(nonatomic) unsigned long long pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) unsigned long long fetchSettingInterval; // @synthesize fetchSettingInterval=_fetchSettingInterval;
@property(nonatomic) unsigned long long onceMaxCount; // @synthesize onceMaxCount=_onceMaxCount;
@property(retain, nonatomic) NSArray *apiAllowList; // @synthesize apiAllowList=_apiAllowList;
@property(retain, nonatomic) NSArray *apiBlackList; // @synthesize apiBlackList=_apiBlackList;
@property(retain, nonatomic) NSArray *imageAllowList; // @synthesize imageAllowList=_imageAllowList;
@property(nonatomic) _Bool disableReportError; // @synthesize disableReportError=_disableReportError;
@property(nonatomic) _Bool enableNetStats; // @synthesize enableNetStats=_enableNetStats;
@property(retain, nonatomic) NSDictionary *allowedMetricTypes; // @synthesize allowedMetricTypes=_allowedMetricTypes;
@property(retain, nonatomic) NSDictionary *allowedServiceTypes; // @synthesize allowedServiceTypes=_allowedServiceTypes;
@property(retain, nonatomic) NSDictionary *allowedLogTypes; // @synthesize allowedLogTypes=_allowedLogTypes;
@property(readonly, nonatomic) HMDCleanupConfig *cleanupConfig; // @synthesize cleanupConfig=_cleanupConfig;
@property(readonly, nonatomic) NSArray *modules; // @synthesize modules=_modules;
- (void).cxx_destruct;
- (_Bool)serviceTypeEnabled:(id)arg1;
- (_Bool)metricTypeEnabled:(id)arg1;
- (double)enableAPIAllUploadTimestamp;
- (double)enableAPIErrorUploadTimestamp;
- (double)logTypeEnableTimestamp:(id)arg1;
- (_Bool)logTypeEnabled:(id)arg1;
- (id)performanceReportURL;
- (_Bool)isURLInWhiteList:(id)arg1;
- (_Bool)isURLInBlackList:(id)arg1;
- (void)parseCleanupConfig:(id)arg1;
- (void)parseHeimdallrModules:(id)arg1;
- (void)parseConfigData:(id)arg1;
- (id)initWithJSONData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)prepareCleanConfig:(id)arg1;

@end
