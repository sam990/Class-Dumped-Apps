//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVScribe-Protocol.h>

@protocol TFSLogger;

@interface TAVLoggingScribe : NSObject <TAVScribe>
{
    id <TFSLogger> _logger;
}

@property(readonly, nonatomic) id <TFSLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logPromotedEventWithName:(id)arg1 parameters:(id)arg2;
- (void)logClientEventWithName:(id)arg1 parameters:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (id)init;

@end

