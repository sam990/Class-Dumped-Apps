//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface CJPayProcessInfo : JSONModel
{
    NSString *_createTime;
    NSString *_processId;
    NSString *_processInfo;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *processInfo; // @synthesize processInfo=_processInfo;
@property(copy, nonatomic) NSString *processId; // @synthesize processId=_processId;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (_Bool)isValid;

@end

