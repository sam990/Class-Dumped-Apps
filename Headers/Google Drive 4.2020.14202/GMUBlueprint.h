//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFPDPhotosCreateMediaItemsRequest_MediaItemBlueprint;

@interface GMUBlueprint : NSObject
{
    _Bool _isCancelled;
    SFPDPhotosCreateMediaItemsRequest_MediaItemBlueprint *_proto;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) SFPDPhotosCreateMediaItemsRequest_MediaItemBlueprint *proto; // @synthesize proto=_proto;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProto:(id)arg1;
- (id)init;

@end

