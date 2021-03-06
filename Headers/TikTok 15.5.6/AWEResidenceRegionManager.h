//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALPRegionModel, NSMutableArray, NSString;

@interface AWEResidenceRegionManager : NSObject
{
    ALPRegionModel *_currenRegion;
    NSString *_lastSetRegion;
    NSMutableArray *_supportedRegions;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *supportedRegions; // @synthesize supportedRegions=_supportedRegions;
@property(retain, nonatomic) NSString *lastSetRegion; // @synthesize lastSetRegion=_lastSetRegion;
@property(retain, nonatomic) ALPRegionModel *currenRegion; // @synthesize currenRegion=_currenRegion;
- (void).cxx_destruct;
- (void)dealloc;
- (void)languageDidChange;
- (void)updateRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentResidenceRegionDisplay;
- (id)currentResidenceRegionCode;
- (id)currentResidenceRegion;
- (void)setupCountries;
- (id)init;

@end

