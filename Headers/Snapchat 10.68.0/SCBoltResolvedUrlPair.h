//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface SCBoltResolvedUrlPair : NSObject
{
    NSURL *_optimalURL;
    NSURL *_fallbackURL;
}

@property(readonly, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, nonatomic) NSURL *optimalURL; // @synthesize optimalURL=_optimalURL;
- (void).cxx_destruct;
- (id)initWithOptimalURL:(id)arg1 fallbackURL:(id)arg2;

@end
