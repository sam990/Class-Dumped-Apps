//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTParser-Protocol.h>

@class NSDateFormatter, NSString;

@interface YTTBParser : NSObject <YTParser>
{
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)parseElement:(id)arg1 error:(id *)arg2;
- (id)dateOrNilFromString:(id)arg1 error:(id *)arg2;
- (id)dateFromString:(id)arg1 error:(id *)arg2;
- (id)parse:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

