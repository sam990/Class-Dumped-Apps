//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface IESLiveADFilterWord : MTLModel <MTLJSONSerializing>
{
    NSString *_wordID;
    NSNumber *_selected;
    NSString *_name;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *wordID; // @synthesize wordID=_wordID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
