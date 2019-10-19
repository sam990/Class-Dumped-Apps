//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MTLDevice;

@protocol MTLRenderPipelineState <NSObject>
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long imageblockSampleLength;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;
@end
