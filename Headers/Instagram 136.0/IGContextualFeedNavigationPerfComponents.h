//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceMediaLoadingComponent, IGPerformanceNavigationLogger;

@interface IGContextualFeedNavigationPerfComponents : NSObject
{
    IGPerformanceNavigationLogger *_logger;
    IGPerformanceMediaLoadingComponent *_mediaLoadingComponent;
}

@property(readonly, nonatomic) IGPerformanceMediaLoadingComponent *mediaLoadingComponent; // @synthesize mediaLoadingComponent=_mediaLoadingComponent;
@property(readonly, nonatomic) IGPerformanceNavigationLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 markerId:(int)arg2;

@end

