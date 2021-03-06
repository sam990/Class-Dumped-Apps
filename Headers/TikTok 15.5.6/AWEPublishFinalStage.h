//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseStage.h"

@class AWECreateAwemeResponse, AWECreateStoryResponse, AWEVideoPublishViewModel, NSString;

@interface AWEPublishFinalStage : AWEPublishBaseStage
{
    AWEVideoPublishViewModel *_publishViewModel;
    AWECreateAwemeResponse *_createAwemeResponse;
    AWECreateStoryResponse *_createStoryResponse;
    NSString *_uploadVideoUrl;
}

@property(retain, nonatomic) NSString *uploadVideoUrl; // @synthesize uploadVideoUrl=_uploadVideoUrl;
@property(retain, nonatomic) AWECreateStoryResponse *createStoryResponse; // @synthesize createStoryResponse=_createStoryResponse;
@property(retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse; // @synthesize createAwemeResponse=_createAwemeResponse;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
- (void).cxx_destruct;
- (void)run;
- (id)initWithModel:(id)arg1 uploadVideoUrl:(id)arg2 createAwemeResponse:(id)arg3 createStoryResponse:(id)arg4;
- (id)initWithModel:(id)arg1 createAwemeResponse:(id)arg2 createStoryResponse:(id)arg3;

@end

