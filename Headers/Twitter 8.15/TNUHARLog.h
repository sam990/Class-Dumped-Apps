//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/TNUHARObject.h>

@class NSDate, NSString, TFSCircularFIFOBuffer, TNUHARCreator;

@interface TNUHARLog : TNUHARObject
{
    NSString *_name;
    TNUHARCreator *_creator;
    NSDate *_startedDateTime;
    NSDate *_interactiveDateTime;
    NSDate *_loadedDateTime;
    TFSCircularFIFOBuffer *_entries;
}

+ (id)rootJSONDictionaryWithHARLog:(id)arg1;
@property(retain, nonatomic) TFSCircularFIFOBuffer *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSDate *loadedDateTime; // @synthesize loadedDateTime=_loadedDateTime;
@property(retain, nonatomic) NSDate *interactiveDateTime; // @synthesize interactiveDateTime=_interactiveDateTime;
@property(retain, nonatomic) NSDate *startedDateTime; // @synthesize startedDateTime=_startedDateTime;
@property(retain, nonatomic) TNUHARCreator *creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)mutableJSONDictionary;
- (void)updateTimingsOfInflightEntries;
- (void)addEntry:(id)arg1;
@property(nonatomic) unsigned long long maxNumberOfEntries;
- (void)removeAllEntries;
@property(readonly, copy, nonatomic) NSString *version;
- (id)init;
- (id)initWithMaxNumberOfEntries:(unsigned long long)arg1 name:(id)arg2 entryBufferDelegate:(id)arg3;

@end

