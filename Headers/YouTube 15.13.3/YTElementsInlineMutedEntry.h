//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTPlayableEntry-Protocol.h"

@class GIMMe, NSString, YTICommand, YTIThumbnailDetails;

@interface YTElementsInlineMutedEntry : NSObject <YTPlayableEntry>
{
    YTICommand *_inlinePlaybackEndpoint;
    YTIThumbnailDetails *_thumbnailDetails;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)thumbnail;
- (_Bool)hasInlinePlaybackEndpoint;
- (id)inlinePlaybackEndpoint;
- (_Bool)hasNavigationEndpoint;
- (id)navigationEndpoint;
- (id)initWithInlinePlaybackEndpoint:(id)arg1 thumbnail:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
