//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractDisplayPageCellViewModel.h"

@class NSNumber;

@interface DisplayPageSectionDividerViewModel : AbstractDisplayPageCellViewModel
{
    _Bool _isDataLoaded;
    NSNumber *_currentSection;
}

@property(retain, nonatomic) NSNumber *currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) _Bool isDataLoaded; // @synthesize isDataLoaded=_isDataLoaded;
- (void).cxx_destruct;
- (void)configureWithDictionary:(id)arg1;

@end

