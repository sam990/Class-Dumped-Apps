//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectPublishedThread;

@interface IGDirectThreadCopier : NSObject
{
    IGDirectPublishedThread *_thread;
}

+ (id)withThread:(id)arg1;
@property(readonly, nonatomic) IGDirectPublishedThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (id)byReplacingMessages:(id)arg1 replacementReason:(id)arg2;
- (id)byRemovingPublishedMessageWithItemId:(id)arg1;
- (id)byAddingMessages:(id)arg1;
- (id)byAddingMessage:(id)arg1;
- (id)byTrimmingMessagesToMessageCount:(long long)arg1 userPK:(id)arg2;
- (id)initWithThread:(id)arg1;

@end

