//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface LSRawDataRecordConfig : NSObject
{
    unsigned int _pixelformat;
    NSURL *_outputUrl;
    long long _dumpFrames;
    long long _sourceType;
    struct CGSize _videoSize;
}

@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long dumpFrames; // @synthesize dumpFrames=_dumpFrames;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned int pixelformat; // @synthesize pixelformat=_pixelformat;
@property(retain, nonatomic) NSURL *outputUrl; // @synthesize outputUrl=_outputUrl;
- (void).cxx_destruct;
- (id)defaultOutputURL;
- (id)init;

@end

