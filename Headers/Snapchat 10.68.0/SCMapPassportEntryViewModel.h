//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, NSNumber, NSString;

@interface SCMapPassportEntryViewModel : SCComposerMarshallableObject
{
    _Bool _isTappable;
    NSString *_entryId;
    long long _entryType;
    NSString *_title;
    NSString *_subtitle;
    NSString *_venueId;
    NSString *_subtext;
    NSArray *_bitmojiModels;
    NSString *_backgroundImageSource;
    NSNumber *_startTimestamp;
    NSNumber *_endTimestamp;
    NSArray *_subEntries;
}

@property(copy, nonatomic) NSArray *subEntries; // @synthesize subEntries=_subEntries;
@property(retain, nonatomic) NSNumber *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(retain, nonatomic) NSNumber *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) _Bool isTappable; // @synthesize isTappable=_isTappable;
@property(copy, nonatomic) NSString *backgroundImageSource; // @synthesize backgroundImageSource=_backgroundImageSource;
@property(copy, nonatomic) NSArray *bitmojiModels; // @synthesize bitmojiModels=_bitmojiModels;
@property(copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(copy, nonatomic) NSString *entryId; // @synthesize entryId=_entryId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithEntryId:(id)arg1 entryType:(long long)arg2 title:(id)arg3 subtitle:(id)arg4 venueId:(id)arg5 subtext:(id)arg6 bitmojiModels:(id)arg7 backgroundImageSource:(id)arg8 isTappable:(_Bool)arg9 startTimestamp:(id)arg10 endTimestamp:(id)arg11 subEntries:(id)arg12;

@end
