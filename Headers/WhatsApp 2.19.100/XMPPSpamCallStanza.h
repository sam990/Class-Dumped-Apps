//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPStanza.h>

@class NSString, WAUserJID;

@interface XMPPSpamCallStanza : XMPPStanza
{
}

@property(retain, nonatomic) WAUserJID *adderJID;
@property(retain, nonatomic) WAUserJID *creatorJID;
@property(copy, nonatomic) NSString *reason;
@property(retain, nonatomic) WAUserJID *terminator;
@property(copy, nonatomic) NSString *mediaType;
@property(nonatomic) int duration;
- (id)callInfo;
- (id)initWithFromJID:(id)arg1 toJID:(id)arg2;

@end
