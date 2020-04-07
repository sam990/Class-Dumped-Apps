//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWAAutocompleteAddress-Protocol.h>

@class NSArray, NSString;

@interface GWAGooglePlacesAutocompleteAddress : NSObject <GWAAutocompleteAddress>
{
    NSString *_hint;
    NSArray *_matchedSubstrings;
    NSString *_reference;
    NSString *_language;
}

+ (id)autocompleteAddressWithPlacesReference:(id)arg1 hint:(id)arg2 matchedSubstrings:(id)arg3 language:(id)arg4;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSString *reference; // @synthesize reference=_reference;
@property(readonly, nonatomic) NSArray *matchedSubstrings; // @synthesize matchedSubstrings=_matchedSubstrings;
@property(readonly, nonatomic) NSString *hint; // @synthesize hint=_hint;
- (void).cxx_destruct;
- (id)formattedStreetAddressWithResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)addressFromJson:(id)arg1;
- (void)loadAddressWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long relevance;
@property(readonly, nonatomic) NSString *iconName;
- (id)initWithReference:(id)arg1 hint:(id)arg2 matchedSubstrings:(id)arg3 language:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
