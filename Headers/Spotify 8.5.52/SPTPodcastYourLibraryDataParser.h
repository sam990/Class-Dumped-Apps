//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol SPTPodcastEpisodeFactory, SPTPodcastTestManager, SPTPodcastYourLibraryDataParserDelegate;

@interface SPTPodcastYourLibraryDataParser : NSObject
{
    id <SPTPodcastYourLibraryDataParserDelegate> _delegate;
    NSMutableArray *_nextEpisodes;
    id <SPTPodcastEpisodeFactory> _podcastEpisodeFactory;
    id <SPTPodcastTestManager> _testManager;
    NSArray *_unfinishedEpisodes;
    NSArray *_headerCollection;
}

@property(copy, nonatomic) NSArray *headerCollection; // @synthesize headerCollection=_headerCollection;
@property(copy, nonatomic) NSArray *unfinishedEpisodes; // @synthesize unfinishedEpisodes=_unfinishedEpisodes;
@property(readonly, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTPodcastEpisodeFactory> podcastEpisodeFactory; // @synthesize podcastEpisodeFactory=_podcastEpisodeFactory;
@property(retain, nonatomic) NSMutableArray *nextEpisodes; // @synthesize nextEpisodes=_nextEpisodes;
@property(nonatomic) __weak id <SPTPodcastYourLibraryDataParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parseUnfinishedEpisodes:(id)arg1;
- (void)addEpisodesCollectionForNextSection:(id)arg1;
- (void)didFailParsingData;
- (void)parseNextEpisodes:(id)arg1;
- (id)initWithEpisodeFactory:(id)arg1 podcastTestManager:(id)arg2;

@end

