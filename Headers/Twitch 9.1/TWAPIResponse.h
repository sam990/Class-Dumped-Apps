//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TWAPIResponse : NSObject
{
    id _objectResponse;
    unsigned long long _total;
    NSString *_cursor;
    NSNumber *_disabled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *disabled;
@property(readonly, nonatomic) NSString *cursor;
@property(readonly, nonatomic) unsigned long long total;
@property(readonly, nonatomic) id objectResponse;
- (id)description;
- (id)initWithObjectResponse:(id)arg1 total:(unsigned long long)arg2 cursor:(id)arg3 disabled:(id)arg4;
- (id)initWithObjectResponse:(id)arg1 total:(unsigned long long)arg2 cursor:(id)arg3;

@end

