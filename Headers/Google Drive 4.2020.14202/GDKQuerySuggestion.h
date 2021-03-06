//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKZSSSuggestion-Protocol.h"

@class GDKQuerySuggestionValue, NSString, UIImage;

@interface GDKQuerySuggestion : NSObject <GDKZSSSuggestion>
{
    GDKQuerySuggestionValue *_value_5;
    NSString *_suggestionID_12;
}

@property(readonly, copy, nonatomic) NSString *suggestionID; // @synthesize suggestionID=_suggestionID_12;
@property(readonly, nonatomic) GDKQuerySuggestionValue *value; // @synthesize value=_value_5;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIImage *syntheticImage;
@property(readonly, nonatomic) UIImage *historyImage;
@property(readonly, nonatomic) UIImage *suggestionImage;
- (id)initWithValue:(id)arg1 suggestionID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

