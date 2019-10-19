//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class GIMMe, NSString, YTIInlinePlaybackRenderer, YTInlinePlaybackView;
@protocol YTResponder;

@interface YTInlinePlaybackCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTThumbnailMapping>
{
    YTIInlinePlaybackRenderer *_inlinePlaybackRenderer;
    YTInlinePlaybackView *_videoView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 gimme:(id)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) YTInlinePlaybackView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)sizeSubviewsWithWidth:(double)arg1;
- (void)setCompanionAdView:(id)arg1;
- (id)metadataRenderer;
- (id)metadataContainer;
- (void)setDelegate:(id)arg1;
- (id)playerOrSnapshotView;
- (void)setAdPlaying:(_Bool)arg1;
- (void)setCellActive:(_Bool)arg1;
- (void)setPlaybackError:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setInlinePlaybackMDXActive:(_Bool)arg1;
- (void)setInlinePlaybackGlobalPlayEnabled:(_Bool)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (id)inlinePlaybackEndpoint;
- (void)showPlayerViewAnimated:(_Bool)arg1;
- (void)setPlayerView:(id)arg1;
- (id)playerReferenceContainer;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
