//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

@class NSString;

@interface NFUIPlaybackParams : NFLXGeneratedObject
{
    _Bool _presentPlayerOnLoading;
    _Bool _allowsExternalPlayback;
    double _loadTimeoutInterval;
    NSString *_prereleasePIN;
}

@property(copy, nonatomic) NSString *prereleasePIN; // @synthesize prereleasePIN=_prereleasePIN;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) double loadTimeoutInterval; // @synthesize loadTimeoutInterval=_loadTimeoutInterval;
@property(nonatomic) _Bool presentPlayerOnLoading; // @synthesize presentPlayerOnLoading=_presentPlayerOnLoading;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

