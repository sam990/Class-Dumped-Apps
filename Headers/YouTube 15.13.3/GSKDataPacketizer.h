//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSKDataPacketizer : NSObject
{
    long long _frameSize;
    char *_residualBuffer;
    long long _residualLength;
}

- (void)reset;
- (void)processData:(void *)arg1 ofLength:(long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithFrameSize:(long long)arg1;

@end
