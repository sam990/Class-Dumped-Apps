//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEWaterFallSectionItem : NSObject
{
    id _value;
    long long _index;
    long long _section;
}

@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)valueWithClass:(Class)arg1;
- (id)initWithValue:(id)arg1 index:(long long)arg2 section:(long long)arg3;

@end
