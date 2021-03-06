//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWSimpleAPICollectionViewController.h"

#import "TWSearchViewControllerProtocol-Protocol.h"

@class NSDate, NSObject, NSString, TWSearchClient, TWSearchDataSource;
@protocol TWSearchViewControllerInteractionProtocol;

__attribute__((visibility("hidden")))
@interface TWSearchContentViewController : TWSimpleAPICollectionViewController <TWSearchViewControllerProtocol>
{
    NSDate *_queryStartTime;
    NSObject<TWSearchViewControllerInteractionProtocol> *_interactionDelegate;
    unsigned long long _queryKind;
    TWSearchDataSource *_dataSource;
    TWSearchClient *_searchClient;
    NSString *_searchType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) TWSearchClient *searchClient; // @synthesize searchClient=_searchClient;
@property(retain, nonatomic) TWSearchDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long queryKind; // @synthesize queryKind=_queryKind;
@property(nonatomic) __weak NSObject<TWSearchViewControllerInteractionProtocol> *interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)logPageViewEventForDataSource:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subscreenName;
@property(readonly, copy, nonatomic) NSString *screenName;
- (void)applyTheme:(id)arg1;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(copy, nonatomic) NSString *query;
- (id)initWithSearchClient:(id)arg1 themeManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

