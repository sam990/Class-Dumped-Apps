//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEAwemeControlModel : MTLModel <MTLJSONSerializing>
{
    _Bool _canForward;
    _Bool _canShare;
    _Bool _canComment;
    _Bool _canShowComment;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool canShowComment; // @synthesize canShowComment=_canShowComment;
@property(nonatomic) _Bool canComment; // @synthesize canComment=_canComment;
@property(nonatomic) _Bool canShare; // @synthesize canShare=_canShare;
@property(nonatomic) _Bool canForward; // @synthesize canForward=_canForward;
@property(readonly, nonatomic) _Bool disableShowComment; // @dynamic disableShowComment;
@property(readonly, nonatomic) _Bool disableComment; // @dynamic disableComment;
@property(readonly, nonatomic) _Bool disableShare; // @dynamic disableShare;
@property(readonly, nonatomic) _Bool disableForward; // @dynamic disableForward;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

