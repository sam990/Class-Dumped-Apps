//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKFileChangeListener, NSString, UIImage;
@protocol GDKFile, GDKQuickAccessFilePredictionDelegate, GDKThumbnailCaching;

@interface GDKQuickAccessFilePrediction : NSObject
{
    id <GDKQuickAccessFilePredictionDelegate> _delegate;
    id <GDKFile> _file;
    NSString *_explanationMessage;
    UIImage *_thumbnail;
    NSString *_experimentTag;
    GDKFileChangeListener *_fileChangeListener;
    id <GDKThumbnailCaching> _thumbnailCache;
}

@property(retain, nonatomic) id <GDKThumbnailCaching> thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(retain, nonatomic) GDKFileChangeListener *fileChangeListener; // @synthesize fileChangeListener=_fileChangeListener;
@property(copy, nonatomic) NSString *experimentTag; // @synthesize experimentTag=_experimentTag;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *explanationMessage; // @synthesize explanationMessage=_explanationMessage;
@property(retain, nonatomic) id <GDKFile> file; // @synthesize file=_file;
@property(nonatomic) __weak id <GDKQuickAccessFilePredictionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelThumbnailRequest:(id)arg1;
- (void)updatedThumbnail:(id)arg1;
- (id)initWithExplanationMessage:(id)arg1 experimentTag:(id)arg2 thumbnailCache:(id)arg3;

@end

