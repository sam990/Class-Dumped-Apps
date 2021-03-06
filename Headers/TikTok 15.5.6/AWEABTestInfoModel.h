//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AWEABTestInfoModel : NSObject
{
    NSString *_propertyName;
    NSString *_serverString;
    unsigned long long _propertyType;
    NSString *_cellTitle;
    NSArray *_defaultValueArray;
    NSArray *_serverTestCaseDataArray;
    NSArray *_testCaseMessages;
    NSString *_descriptionText;
    NSString *_author;
    NSArray *_PMs;
    NSString *_appVersion;
    NSArray *_linesOfBusiness;
    NSArray *_modules;
}

@property(retain, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSArray *linesOfBusiness; // @synthesize linesOfBusiness=_linesOfBusiness;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSArray *PMs; // @synthesize PMs=_PMs;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSArray *testCaseMessages; // @synthesize testCaseMessages=_testCaseMessages;
@property(copy, nonatomic) NSArray *serverTestCaseDataArray; // @synthesize serverTestCaseDataArray=_serverTestCaseDataArray;
@property(retain, nonatomic) NSArray *defaultValueArray; // @synthesize defaultValueArray=_defaultValueArray;
@property(copy, nonatomic) NSString *cellTitle; // @synthesize cellTitle=_cellTitle;
@property(nonatomic) unsigned long long propertyType; // @synthesize propertyType=_propertyType;
@property(copy, nonatomic) NSString *serverString; // @synthesize serverString=_serverString;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (void)configStringWithPropertyName:(id)arg1 serverString:(id)arg2 defaultValueArray:(id)arg3 title:(id)arg4 description:(id)arg5 author:(id)arg6 PMs:(id)arg7 appVersion:(id)arg8 linesOfBusiness:(id)arg9 modules:(id)arg10;
- (void)configNumberWithPropertyName:(id)arg1 serverString:(id)arg2 defaultValueArray:(id)arg3 title:(id)arg4 description:(id)arg5 author:(id)arg6 PMs:(id)arg7 appVersion:(id)arg8 linesOfBusiness:(id)arg9 modules:(id)arg10;
- (void)configEnumWithPropertyName:(id)arg1 serverString:(id)arg2 serverTestCaseDataArray:(id)arg3 defaultValueArray:(id)arg4 title:(id)arg5 testCaseMessages:(id)arg6 description:(id)arg7 author:(id)arg8 PMs:(id)arg9 appVersion:(id)arg10 linesOfBusiness:(id)arg11 modules:(id)arg12;
- (void)configBoolWithPropertyName:(id)arg1 serverString:(id)arg2 defaultValueArray:(id)arg3 title:(id)arg4 description:(id)arg5 author:(id)arg6 PMs:(id)arg7 appVersion:(id)arg8 linesOfBusiness:(id)arg9 modules:(id)arg10;
- (id)defaultValue;
- (void)configStringWithPropertyName:(id)arg1 serverString:(id)arg2 defaultValueArray:(id)arg3 title:(id)arg4;
- (void)configNumberWithPropertyName:(id)arg1 serverString:(id)arg2 defaultValueArray:(id)arg3 title:(id)arg4;
- (void)configEnumWithPropertyName:(id)arg1 serverString:(id)arg2 serverTestCaseDataArray:(id)arg3 defaultValueArray:(id)arg4 title:(id)arg5 testCaseMessages:(id)arg6;
- (void)configBoolWithPropertyName:(id)arg1 serverString:(id)arg2 defaultValueArray:(id)arg3 title:(id)arg4;
- (id)init;

@end

