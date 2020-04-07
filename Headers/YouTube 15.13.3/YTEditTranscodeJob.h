//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSURL, YTUploadEditInstructions;

@interface YTEditTranscodeJob : NSObject
{
    _Bool _userInitiated;
    _Bool _invalidated;
    _Bool _completed;
    GIMMe *_gimme;
    NSURL *_assetURL;
    YTUploadEditInstructions *_editInstructions;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) YTUploadEditInstructions *editInstructions; // @synthesize editInstructions=_editInstructions;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetURL:(id)arg1 editInstructions:(id)arg2 userInitiated:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
