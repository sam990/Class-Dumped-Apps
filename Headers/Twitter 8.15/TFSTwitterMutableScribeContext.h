//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterScribeContext.h>

@class NSArray, NSDictionary, NSString;

@interface TFSTwitterMutableScribeContext : TFSTwitterScribeContext
{
}

+ (id)scribeContextWithScribeContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addParameters:(id)arg1;
@property(copy, nonatomic) NSArray *associations; // @dynamic associations;
@property(copy, nonatomic) TFSTwitterScribeContext *sourceContext; // @dynamic sourceContext;
@property(copy, nonatomic) NSDictionary *parameters; // @dynamic parameters;
@property(copy, nonatomic) NSString *element; // @dynamic element;
@property(copy, nonatomic) NSString *component; // @dynamic component;
@property(copy, nonatomic) NSString *section; // @dynamic section;
@property(copy, nonatomic) NSString *page; // @dynamic page;

@end

