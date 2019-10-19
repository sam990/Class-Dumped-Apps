//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMCollectionNodeSection-Protocol.h"

@class GIMMe, NSString;
@protocol ELMCollectionNodeSectionDataSource, ELMContext, YTInnerTubeSectionRenderer, YTInnerTubeUIService, YTSectionControllerProtocol;

@interface YTInnerTubeCollectionNodeSection : NSObject <ELMCollectionNodeSection>
{
    id <ELMCollectionNodeSectionDataSource> _dataSource;
    id <YTInnerTubeUIService> _service;
    id <ELMContext> _context;
    id <YTInnerTubeSectionRenderer> _renderer;
    GIMMe *_gimme;
    id <YTSectionControllerProtocol> _controller;
}

@property(readonly, nonatomic) id <YTSectionControllerProtocol> controller; // @synthesize controller=_controller;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) id <YTInnerTubeSectionRenderer> renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)dataSource;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRenderer:(id)arg1 controller:(id)arg2 service:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
