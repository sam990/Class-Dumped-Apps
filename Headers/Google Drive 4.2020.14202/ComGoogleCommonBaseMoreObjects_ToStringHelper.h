//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonBaseMoreObjects_ToStringHelper_ValueHolder, NSString;

@interface ComGoogleCommonBaseMoreObjects_ToStringHelper : NSObject
{
    NSString *className__;
    ComGoogleCommonBaseMoreObjects_ToStringHelper_ValueHolder *holderHead_;
    ComGoogleCommonBaseMoreObjects_ToStringHelper_ValueHolder *holderTail_;
    _Bool omitNullValues_;
}

- (void)dealloc;
- (id)description;
- (id)addValueWithLong:(long long)arg1;
- (id)addValueWithInt:(int)arg1;
- (id)addValueWithFloat:(float)arg1;
- (id)addValueWithDouble:(double)arg1;
- (id)addValueWithChar:(unsigned short)arg1;
- (id)addValueWithBoolean:(_Bool)arg1;
- (id)addValueWithId:(id)arg1;
- (id)addWithNSString:(id)arg1 withLong:(long long)arg2;
- (id)addWithNSString:(id)arg1 withInt:(int)arg2;
- (id)addWithNSString:(id)arg1 withFloat:(float)arg2;
- (id)addWithNSString:(id)arg1 withDouble:(double)arg2;
- (id)addWithNSString:(id)arg1 withChar:(unsigned short)arg2;
- (id)addWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (id)addWithNSString:(id)arg1 withId:(id)arg2;
- (id)omitNullValues;

@end

