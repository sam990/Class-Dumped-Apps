//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESMMEffectMessage : NSObject
{
    long long _type;
    long long _msgId;
    long long _arg1;
    long long _arg2;
    NSString *_arg3;
}

+ (id)messageWithType:(long long)arg1;
@property(retain, nonatomic) NSString *arg3; // @synthesize arg3=_arg3;
@property(nonatomic) long long arg2; // @synthesize arg2=_arg2;
@property(nonatomic) long long arg1; // @synthesize arg1=_arg1;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end
