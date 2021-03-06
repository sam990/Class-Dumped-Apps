//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSectionControllerBuilderProtocol-Protocol.h"

@class GIMMe, NSString, YTServiceSectionController;

@interface YTInnerTubeDefaultSectionControllerBuilder : NSObject <YTSectionControllerBuilderProtocol>
{
    GIMMe *_gimme;
    YTServiceSectionController *_sectionController;
}

@property(readonly, nonatomic) __weak YTServiceSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)buildFooterForRenderer:(id)arg1;
- (id)buildHeaderForRenderer:(id)arg1 feedController:(id)arg2;
- (id)buildFeedControllerForRenderer:(id)arg1 dataSource:(id)arg2;
- (void)setupInnerTubeFeedControllerDataSource:(id)arg1;
- (id)buildDataSourceForRenderer:(id)arg1 service:(id)arg2;
- (void)updateSectionController:(id)arg1 withModel:(id)arg2;
- (void)loadSectionController:(id)arg1 withModel:(id)arg2;
- (id)dataSourceParamsForRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

