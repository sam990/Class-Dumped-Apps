//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEGuideWordModel, AWERiskPreventModel, AWESearchCorrectModel, AWESearchNilInfoModel, AWESearchNilTextModel, NSArray, NSNumber, NSString;

@interface AWEAwemeResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSArray *_awemeList;
    AWERiskPreventModel *_riskPreventModel;
    NSNumber *_cursor;
    NSString *_correctName;
    NSArray *_awesomeSplashList;
    AWESearchCorrectModel *_correctModel;
    AWESearchNilInfoModel *_searchNilInfoModel;
    AWESearchNilTextModel *_searchNilTextModel;
    NSArray *_guideSearchWordList;
}

+ (id)searchNilTextModelTransformer;
+ (id)searchNilInfoModelTransformer;
+ (id)correctModelTransformer;
+ (id)awesomeSplashListJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)awemeListJSONTransformer;
+ (id)guideSearchWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)guideWordJSONTransformer;
+ (id)guideWordModel_subModelPropertyKey;
@property(copy, nonatomic) NSArray *guideSearchWordList; // @synthesize guideSearchWordList=_guideSearchWordList;
@property(retain, nonatomic) AWESearchNilTextModel *searchNilTextModel; // @synthesize searchNilTextModel=_searchNilTextModel;
@property(retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel; // @synthesize searchNilInfoModel=_searchNilInfoModel;
@property(retain, nonatomic) AWESearchCorrectModel *correctModel; // @synthesize correctModel=_correctModel;
@property(copy, nonatomic) NSArray *awesomeSplashList; // @synthesize awesomeSplashList=_awesomeSplashList;
@property(copy, nonatomic) NSString *correctName; // @synthesize correctName=_correctName;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) AWERiskPreventModel *riskPreventModel; // @synthesize riskPreventModel=_riskPreventModel;
@property(copy, nonatomic) NSArray *awemeList; // @synthesize awemeList=_awemeList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(retain, nonatomic) NSNumber *minCursor; // @synthesize minCursor=_minCursor;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEGuideWordModel *guideWord;

@end
