//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedViewModel-Protocol.h"

@class HMENestMediaManager, NSArray, NSString, NSURL;

@interface HMEFeedCardEventDeprecatedViewModel : NSObject <HMEFeedViewModel>
{
    double _artifactAspectRatio;
    NSString *_eventDuration;
    NSURL *_thumbnailURL;
    NSURL *_clipURL;
    HMENestMediaManager *_nestMediaManager;
    NSArray *_overflowMenuActions;
    id _detailData;
}

@property(copy, nonatomic) id detailData; // @synthesize detailData=_detailData;
@property(copy, nonatomic) NSArray *overflowMenuActions; // @synthesize overflowMenuActions=_overflowMenuActions;
@property(retain, nonatomic) HMENestMediaManager *nestMediaManager; // @synthesize nestMediaManager=_nestMediaManager;
@property(readonly, copy, nonatomic) NSURL *clipURL; // @synthesize clipURL=_clipURL;
@property(readonly, copy, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, copy, nonatomic) NSString *eventDuration; // @synthesize eventDuration=_eventDuration;
@property(readonly, nonatomic) double artifactAspectRatio; // @synthesize artifactAspectRatio=_artifactAspectRatio;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithThumbnailURL:(id)arg1 clipURL:(id)arg2 artifactAspectRatio:(double)arg3 eventMetadata:(id)arg4 nestMediaManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

