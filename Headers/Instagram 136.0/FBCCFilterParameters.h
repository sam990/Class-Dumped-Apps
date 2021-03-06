//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBCCFilterDescriptor-Protocol.h>
#import <InstagramAppCoreFramework/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FBCCFilterParameters : NSObject <FBCCFilterDescriptor, NSCoding>
{
    NSString *_filterName;
    NSDictionary *_config;
}

+ (id)newWithFilterName:(id)arg1 config:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterName:(id)arg1 config:(id)arg2;
- (id)asFilterParameters;
- (id)asCCFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

