//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterScribeWriter-Protocol.h>

@class NSData, NSString;
@protocol TFSScribeEventSerializer;

@protocol TFNTwitterScribeWriter <TFSTwitterScribeWriter>
- (void)enqueueImpression:(NSData *)arg1 eventName:(NSString *)arg2 query:(NSString *)arg3 group:(NSString *)arg4;
- (void)enqueueEvent:(id <TFSScribeEventSerializer>)arg1;
@end

