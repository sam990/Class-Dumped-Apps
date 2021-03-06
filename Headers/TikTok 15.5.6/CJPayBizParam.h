//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CJPayNameModel, NSString;

@interface CJPayBizParam : NSObject
{
    NSString *_appName;
    CJPayNameModel *_nameModel;
    CDUnknownBlockType _riskInfoBlock;
}

+ (id)shared;
@property(copy, nonatomic) CDUnknownBlockType riskInfoBlock; // @synthesize riskInfoBlock=_riskInfoBlock;
@property(copy, nonatomic) CJPayNameModel *nameModel; // @synthesize nameModel=_nameModel;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)setupAppInfoConfig:(id)arg1;
- (void)setupTrackerDelegate:(id)arg1;
- (void)cleanCookies;
- (void)setupCookieWith:(CDUnknownBlockType)arg1;
- (void)setupRiskInfoBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *configHost;
- (void)setupLanguage:(unsigned long long)arg1;

@end

