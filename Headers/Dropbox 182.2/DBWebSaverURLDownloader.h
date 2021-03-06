//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBWebSaverFileLoader-Protocol.h>

@class NSMutableDictionary, NSURL;
@protocol DBWebSaverFileLoaderDelegate;

@interface DBWebSaverURLDownloader : NSObject <DBWebSaverFileLoader>
{
    NSURL *_downloadURL;
    NSURL *_destinationURL;
    NSMutableDictionary *_analyticsParameters;
    id <DBWebSaverFileLoaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)startLoadingFile;
- (id)analyticsParameters;
- (_Bool)hasProgress;
- (void)prepareToLoadFile;
- (id)initWithDownloadURL:(id)arg1 destinationURL:(id)arg2 delegate:(id)arg3;

@end

