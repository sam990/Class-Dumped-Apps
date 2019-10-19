//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface HTSLivePKContributeListData : MTLModel <MTLJSONSerializing>
{
    NSNumber *_anchorID;
    NSArray *_rankList;
}

+ (id)rankListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(retain, nonatomic) NSNumber *anchorID; // @synthesize anchorID=_anchorID;
- (void).cxx_destruct;
- (_Bool)shouldEnqueueWaiting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
