//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithExternalResponseProcessor.h>

@class NSString;

@interface TFSTwitterAPILiveEventTimelineCommand : TFSTwitterAPICommandWithExternalResponseProcessor
{
    NSString *_eventID;
    NSString *_sourceID;
}

@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 eventID:(id)arg3 sourceID:(id)arg4 responseModelBuilder:(id)arg5 responseProcessorBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end
