//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMapTable;
@protocol OS_dispatch_queue;

@interface PINGIFAnimatedImageManager : NSObject
{
    NSConditionLock *_lock;
    NSMapTable *_animatedImages;
    NSObject<OS_dispatch_queue> *_serialProcessingQueue;
}

+ (id)writeFrameToFile:(id)arg1 duration:(float)arg2 frameData:(id)arg3;
+ (id)writeFileHeader:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bitsPerPixel:(unsigned int)arg4 loopCount:(unsigned int)arg5 frameCount:(unsigned int)arg6 bitmapInfo:(unsigned int)arg7 durations:(float *)arg8;
+ (id)fileHandle:(id *)arg1 filePath:(id *)arg2 temporaryDirectory:(id)arg3 UUID:(id)arg4 count:(unsigned long long)arg5;
+ (id)filePathWithTemporaryDirectory:(id)arg1 UUID:(id)arg2 count:(unsigned long long)arg3;
+ (float)frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
+ (void)processAnimatedImage:(id)arg1 temporaryDirectory:(id)arg2 infoCompletion:(CDUnknownBlockType)arg3 decodedPath:(CDUnknownBlockType)arg4;
+ (void)cleanupFiles;
+ (id)temporaryDirectory;
+ (id)sharedManager;
+ (void)load;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingQueue; // @synthesize serialProcessingQueue=_serialProcessingQueue;
@property(readonly, nonatomic) NSMapTable *animatedImages; // @synthesize animatedImages=_animatedImages;
- (void).cxx_destruct;
- (void)animatedPathForImageData:(id)arg1 infoCompletion:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
