//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@protocol GHKSmartJourneysCardDelegate;

@interface GHKSmartJourneysContentViewObject : GOOBaseContentViewObject
{
    id <GHKSmartJourneysCardDelegate> _delegate;
    CDUnknownBlockType _paramsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType paramsBlock; // @synthesize paramsBlock=_paramsBlock;
@property(nonatomic) __weak id <GHKSmartJourneysCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithCardParamsBlock:(CDUnknownBlockType)arg1;

@end
