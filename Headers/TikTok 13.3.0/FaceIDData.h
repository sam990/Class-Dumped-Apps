//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface FaceIDData : NSObject
{
    NSMutableDictionary *_images;
    NSString *_delta;
}

+ (id)dataWithBestFrame:(id)arg1 andBestFrameData:(id)arg2 andActionFrames:(id)arg3 andLog:(id)arg4 andBadActionFrame:(id)arg5;
@property(readonly) NSString *delta; // @synthesize delta=_delta;
@property(readonly) NSDictionary *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBestFrame:(id)arg1 andBestFrameData:(id)arg2 andActionFrames:(id)arg3 andLog:(id)arg4 andBadActionFrame:(id)arg5;
- (id)getInfoWithFrameData:(id)arg1;
- (id)getInfoWithFrame:(id)arg1 andImageData:(id)arg2;

@end
