//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSData;
@protocol MLCDMSession;

@protocol MLCDM <NSObject>
- (_Bool)decrypt:(char *)arg1 length:(unsigned long long)arg2 blockOffset:(unsigned long long)arg3 keyID:(NSData *)arg4 IV:(const char *)arg5 IVLength:(unsigned long long)arg6 error:(id *)arg7;
- (id <MLCDMSession>)openSessionAndReturnError:(id *)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;
@end
