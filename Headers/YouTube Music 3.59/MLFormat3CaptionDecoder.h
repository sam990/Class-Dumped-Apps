//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLCaptionDecoder-Protocol.h"

@class NSString;

@interface MLFormat3CaptionDecoder : NSObject <MLCaptionDecoder>
{
}

- (void)logCaptionDecodeErrorWithCaptionData:(id)arg1;
- (id)captionBufferWithCaptions:(id)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 productionTime:(double)arg3 presentationDuration:(CDStruct_1b6d18a9)arg4 formatSelection:(id)arg5;
- (id)decodeSampleBuffer:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

