//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaImageProvider-Protocol.h"

@class NSString, SCShazamOperaDataSource, UIImage;
@protocol SCShazamOperaControllerDelegate;

@interface SCShazamOperaImageProvider : NSObject <SCOperaImageProvider>
{
    UIImage *_topSnapImage;
    UIImage *_artistImage;
    NSString *_topSnapURL;
    NSString *_artistName;
    NSString *_songTitle;
    SCShazamOperaDataSource *_khaleesiDataSource;
    id <SCShazamOperaControllerDelegate> _fetchImageDelegate;
}

+ (id)generateTopSnapFromImage:(id)arg1 artistName:(id)arg2 songTitle:(id)arg3;
- (void).cxx_destruct;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateTopSnap;
- (id)initWithTopSnapURL:(id)arg1 artistName:(id)arg2 songTitle:(id)arg3 dataSource:(id)arg4;
- (id)initWithFetchImageDelegate:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
