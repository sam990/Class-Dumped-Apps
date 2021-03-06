//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ODEForceIntention.h"

#import "ODEDynamicIntention-Protocol.h"
#import "ODEForceWithValueIntention-Protocol.h"
#import "ODENamedIntention-Protocol.h"

@class NSString;

@interface ODEAttachmentForceIntention : ODEForceIntention <ODEForceWithValueIntention, ODEDynamicIntention, ODENamedIntention>
{
    id _cachedInitialValue;
    id _leftValue;
    id _rightValue;
    double _springCoefficient;
    double _dampingCoefficient;
}

@property(nonatomic) double dampingCoefficient; // @synthesize dampingCoefficient=_dampingCoefficient;
@property(nonatomic) double springCoefficient; // @synthesize springCoefficient=_springCoefficient;
@property(retain, nonatomic) id rightValue; // @synthesize rightValue=_rightValue;
@property(retain, nonatomic) id leftValue; // @synthesize leftValue=_leftValue;
- (void).cxx_destruct;
- (id)rightValueForView:(id)arg1;
- (id)leftValueForView:(id)arg1;
- (void)commitInitialValueToView:(id)arg1 withDirection:(unsigned long long)arg2;
- (id)createForceWithDirection:(unsigned long long)arg1 boxer:(id)arg2 forView:(id)arg3;
- (Class)actorClass;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

