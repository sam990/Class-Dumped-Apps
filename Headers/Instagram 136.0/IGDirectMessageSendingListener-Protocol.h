//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectDjangoThreadIdentifier, IGDirectOutgoingMessageContent, IGDirectSendError, NSString;

@protocol IGDirectMessageSendingListener <NSObject>
- (void)outgoingMessageWithContent:(IGDirectOutgoingMessageContent *)arg1 didFailToSendWithError:(IGDirectSendError *)arg2 onDjangoThreadTarget:(IGDirectDjangoThreadIdentifier *)arg3 clientContext:(NSString *)arg4;
- (void)outgoingMessageContentSuccessfullySent:(IGDirectOutgoingMessageContent *)arg1 onDjangoThreadTarget:(IGDirectDjangoThreadIdentifier *)arg2 clientContext:(NSString *)arg3;
@end

