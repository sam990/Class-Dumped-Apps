//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMVideoSurfaceFactory, SPTNowPlayingContentLayerViewModel, SPTNowPlayingCoverArtProvider, SPTNowPlayingHorizontalVideoProvider, SPTNowPlayingSideBarContentLayerViewController, SPTTheme;
@protocol BMVideoSurfaceManager, SPTGLUEImageLoaderFactory, SPTNowPlayingContentLayerResolver, SPTNowPlayingVideoManager, SPTShareDragDelegateFactory;

@interface SPTNowPlayingSideBarContentViewProvider : NSObject
{
    SPTTheme *_theme;
    id <SPTGLUEImageLoaderFactory> _glueImageLoaderFactory;
    id <BMVideoSurfaceManager> _videoSurfaceManager;
    BMVideoSurfaceFactory *_surfaceFactory;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
    SPTNowPlayingContentLayerViewModel *_contentLayerViewModel;
    id <SPTNowPlayingContentLayerResolver> _contentLayerResolver;
    SPTNowPlayingSideBarContentLayerViewController *_contentLayerViewController;
    SPTNowPlayingCoverArtProvider *_coverArtProvider;
    SPTNowPlayingHorizontalVideoProvider *_horizontalVideoProvider;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
}

@property(retain, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(retain, nonatomic) SPTNowPlayingHorizontalVideoProvider *horizontalVideoProvider; // @synthesize horizontalVideoProvider=_horizontalVideoProvider;
@property(retain, nonatomic) SPTNowPlayingCoverArtProvider *coverArtProvider; // @synthesize coverArtProvider=_coverArtProvider;
@property(retain, nonatomic) SPTNowPlayingSideBarContentLayerViewController *contentLayerViewController; // @synthesize contentLayerViewController=_contentLayerViewController;
@property(readonly, nonatomic) id <SPTNowPlayingContentLayerResolver> contentLayerResolver; // @synthesize contentLayerResolver=_contentLayerResolver;
@property(readonly, nonatomic) SPTNowPlayingContentLayerViewModel *contentLayerViewModel; // @synthesize contentLayerViewModel=_contentLayerViewModel;
@property(readonly, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(readonly, nonatomic) BMVideoSurfaceFactory *surfaceFactory; // @synthesize surfaceFactory=_surfaceFactory;
@property(readonly, nonatomic) id <BMVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> glueImageLoaderFactory; // @synthesize glueImageLoaderFactory=_glueImageLoaderFactory;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)registerHorizontalVideoProvider;
- (void)registerCoverArtProvider;
- (id)initWithModel:(id)arg1 glueImageLoaderFactory:(id)arg2 theme:(id)arg3 videoSurfaceManager:(id)arg4 surfaceFactory:(id)arg5 nowPlayingVideoManager:(id)arg6 contentLayerViewModel:(id)arg7 shareDragDelegateFactory:(id)arg8;

@end
