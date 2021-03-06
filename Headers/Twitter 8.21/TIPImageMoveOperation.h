//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPDisabledExternalMutabilityOperation.h>

@class NSString, TIPImagePipeline;

@interface TIPImageMoveOperation : TIPDisabledExternalMutabilityOperation
{
    CDUnknownBlockType _completion;
    NSString *_originalIdentifier;
    NSString *_updatedIdentifier;
    TIPImagePipeline *_pipeline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TIPImagePipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, copy, nonatomic) NSString *updatedIdentifier; // @synthesize updatedIdentifier=_updatedIdentifier;
@property(readonly, copy, nonatomic) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
- (void)main;
- (id)initWithPipeline:(id)arg1 originalIdentifier:(id)arg2 updatedIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

