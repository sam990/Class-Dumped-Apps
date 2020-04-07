//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTVisibilityPercentage : NSObject
{
    double _horizontalPercentage;
    double _verticalPercentage;
}

+ (double)getElementVisibilityPercentageWithStartOffset:(double)arg1 elementLength:(double)arg2 windowScrollOffset:(double)arg3 visibleWindowLength:(double)arg4;
+ (id)resetVisibilityPercentage;
@property(nonatomic) double verticalPercentage; // @synthesize verticalPercentage=_verticalPercentage;
@property(nonatomic) double horizontalPercentage; // @synthesize horizontalPercentage=_horizontalPercentage;
- (_Bool)strictIsAboveOrEqualTo:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)areaIsAboveOrEqualTo:(id)arg1;
- (_Bool)isAboveOrEqualTo:(id)arg1 strictComparison:(_Bool)arg2;
- (id)initWithNoClampingHorizontalPercentage:(double)arg1 verticalPercentage:(double)arg2;
- (id)initWithHorizontalPercentage:(double)arg1 verticalPercentage:(double)arg2;

@end
