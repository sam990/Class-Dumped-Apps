//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtask.h>

@class NSArray, NSDictionary, NSString, TFSTwitterOnboardingNavigationLink, TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingTopicsSelectorSubtask : TFSTwitterOnboardingSubtask
{
    TFSTwitterOnboardingRichText *_topBarTitle;
    TFSTwitterOnboardingRichText *_primaryText;
    TFSTwitterOnboardingRichText *_secondaryText;
    NSArray *_topCategoryIDs;
    NSArray *_defaultCategoryIDs;
    NSDictionary *_categoryByIDList;
    NSDictionary *_topicByIDList;
    long long _style;
    NSString *_searchHint;
    TFSTwitterOnboardingRichText *_searchDoneLabel;
    TFSTwitterOnboardingRichText *_bannerTitle;
    TFSTwitterOnboardingRichText *_bannerSubtitle;
    TFSTwitterOnboardingRichText *_bannerDismissLabel;
    TFSTwitterOnboardingRichText *_cartTitle;
    TFSTwitterOnboardingRichText *_cartDoneLabel;
    NSArray *_selectedTopicIDs;
    TFSTwitterOnboardingRichText *_selectLabel;
    TFSTwitterOnboardingRichText *_deselectLabel;
    TFSTwitterOnboardingNavigationLink *_nextLink;
    TFSTwitterOnboardingNavigationLink *_skipLink;
}

+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *deselectLabel; // @synthesize deselectLabel=_deselectLabel;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(readonly, nonatomic) NSArray *selectedTopicIDs; // @synthesize selectedTopicIDs=_selectedTopicIDs;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *cartDoneLabel; // @synthesize cartDoneLabel=_cartDoneLabel;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *cartTitle; // @synthesize cartTitle=_cartTitle;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *bannerDismissLabel; // @synthesize bannerDismissLabel=_bannerDismissLabel;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *bannerSubtitle; // @synthesize bannerSubtitle=_bannerSubtitle;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *searchDoneLabel; // @synthesize searchDoneLabel=_searchDoneLabel;
@property(readonly, nonatomic) NSString *searchHint; // @synthesize searchHint=_searchHint;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSDictionary *topicByIDList; // @synthesize topicByIDList=_topicByIDList;
@property(readonly, nonatomic) NSDictionary *categoryByIDList; // @synthesize categoryByIDList=_categoryByIDList;
@property(readonly, nonatomic) NSArray *defaultCategoryIDs; // @synthesize defaultCategoryIDs=_defaultCategoryIDs;
@property(readonly, nonatomic) NSArray *topCategoryIDs; // @synthesize topCategoryIDs=_topCategoryIDs;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *topBarTitle; // @synthesize topBarTitle=_topBarTitle;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end
