//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import <RedditCore/BaseModel-Protocol.h>
#import <RedditCore/ReportableModel-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSString;

@interface Message : ObservableObject <BaseModel, ReportableModel>
{
    _Bool _isLoadingMoreNode;
    _Bool _isUnread;
    _Bool _isLocallyRead;
    _Bool _isCollapsed;
    _Bool _isSelfMessage;
    NSString *_pk;
    NSString *_author;
    NSString *_destination;
    NSString *_body;
    NSAttributedString *_bodyAttributed;
    NSString *_subject;
    NSString *_subreddit;
    NSDate *_createdAt;
    unsigned long long _visualLevel;
    NSArray *_visualReplies;
    NSArray *_replies;
    unsigned long long _level;
    NSDictionary *_debugData;
    long long _distinguishedAs;
}

@property(nonatomic) long long distinguishedAs; // @synthesize distinguishedAs=_distinguishedAs;
@property(retain, nonatomic) NSDictionary *debugData; // @synthesize debugData=_debugData;
@property(nonatomic) _Bool isSelfMessage; // @synthesize isSelfMessage=_isSelfMessage;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(copy, nonatomic) NSArray *visualReplies; // @synthesize visualReplies=_visualReplies;
@property(nonatomic) unsigned long long visualLevel; // @synthesize visualLevel=_visualLevel;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *subreddit; // @synthesize subreddit=_subreddit;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSAttributedString *bodyAttributed; // @synthesize bodyAttributed=_bodyAttributed;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) _Bool isLocallyRead; // @synthesize isLocallyRead=_isLocallyRead;
@property(nonatomic) _Bool isUnread; // @synthesize isUnread=_isUnread;
@property(nonatomic) _Bool isLoadingMoreNode; // @synthesize isLoadingMoreNode=_isLoadingMoreNode;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool canBeBlocked;
@property(readonly, nonatomic) _Bool canBeReported;
@property(readonly, copy, nonatomic) NSString *sharingPermalinkIncludingDomain;
- (id)urlPath;
@property(readonly, copy) NSString *debugDescription;
- (void)configureWithData:(id)arg1;
- (id)initWithPk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

