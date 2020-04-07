//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSArray;

@interface TFSTwitterAPIAmplifyMarketplaceDefaultsPostCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _monitize;
    NSArray *_videoCategories;
    NSArray *_advertiserBlacklist;
    NSArray *_monetizationCategoryBlacklist;
    NSArray *_adsCategoryBlacklist;
}

@property(retain, nonatomic) NSArray *adsCategoryBlacklist; // @synthesize adsCategoryBlacklist=_adsCategoryBlacklist;
@property(retain, nonatomic) NSArray *monetizationCategoryBlacklist; // @synthesize monetizationCategoryBlacklist=_monetizationCategoryBlacklist;
@property(retain, nonatomic) NSArray *advertiserBlacklist; // @synthesize advertiserBlacklist=_advertiserBlacklist;
@property(retain, nonatomic) NSArray *videoCategories; // @synthesize videoCategories=_videoCategories;
@property(nonatomic) _Bool monitize; // @synthesize monitize=_monitize;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 monitize:(_Bool)arg3 videoCategories:(id)arg4 advertiserBlacklist:(id)arg5 monetizationCategoryBlacklist:(id)arg6 adsCategoryBlacklist:(id)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end
