//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PMVEffectProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *effectParamsArray; // @dynamic effectParamsArray;
@property(readonly, nonatomic) unsigned long long effectParamsArray_Count; // @dynamic effectParamsArray_Count;
@property(nonatomic) _Bool hasOutputNode; // @dynamic hasOutputNode;
@property(nonatomic) _Bool hasRenderType; // @dynamic hasRenderType;
@property(retain, nonatomic) NSMutableArray *inputNodeArray; // @dynamic inputNodeArray;
@property(readonly, nonatomic) unsigned long long inputNodeArray_Count; // @dynamic inputNodeArray_Count;
@property(copy, nonatomic) NSString *outputNode; // @dynamic outputNode;
@property(copy, nonatomic) NSString *renderType; // @dynamic renderType;

@end

